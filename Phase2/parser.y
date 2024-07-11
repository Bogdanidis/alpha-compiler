%{
#include "symtable.h"
int yyerror (char* yaccProvidedMessage);
int yylex(void);

int scope=0;
extern char * yyval;
extern int yylineno;
extern char* yytext;
extern FILE * yyin;
extern FILE * yyout;
int anonFuncCount=0;
int arrayFlag=0;
int functionFlag=0;
int IDfoundFlag=0;
node* currentFunction=NULL;
%}



%start program

%token 	IF
%token	ELSE
%token	WHILE
%token	FOR
%token	FUNCTION
%token	RETURN
%token	BREAK
%token	CONTINUE
%token	LOCAL
%token	TRUE
%token	FALSE
%token 	NIL
%token	NOT
%token	AND
%token	OR
%token	ASSIGNMENT
%token	PLUS
%token	MINUS
%token	MULT
%token	DIV
%token	MODULO
%token	EQUAL
%token	NOT_EQUAL
%token	INCREMENT
%token	DECREMENT
%token	GREATER
%token	LESS
%token	GREATER_EQUAL
%token	LESS_EQUAL
%token  NUMBER
%token  REAL_NUMBER
%token  ID
%token  STRING
%token	LEFT_PARENTHESIS
%token	RIGHT_PARENTHESIS
%token	LEFT_SQUARE_BRACKET
%token	RIGHT_SQUARE_BRACKET
%token	LEFT_CURLY_BRACKET
%token	RIGHT_CURLY_BRACKET
%token	SEMICOLON
%token	COMMA
%token	COLON
%token	DOUBLE_COLONS
%token	DOT
%token	DOUBLE_DOT
%token	ONE_LINE_COMMENT
%token 	MULTI_LINE_COMMENT

%token	OTHER

%right	ASSIGNMENT
%right	NOT INCREMENT DECREMENT UMINUS

%nonassoc	EQUAL NOT_EQUAL
%nonassoc	GREATER GREATER_EQUAL LESS LESS_EQUAL
%nonassoc IF
%nonassoc ELSE

%left	AND OR
%left	PLUS MINUS
%left	MULT DIV MOD
%left	DOT DOTS
%left	LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET
%left	LEFT_PARENTHESIS RIGHT_PARENTHESIS
%left	LEFT_CURLY_BRACKET RIGHT_CURLY_BRACKET

%union{
   char*  stringValue;
   int    intValue;
   double realValue;
}
%%

program : stmt  program               {}
        |/*empty*/                    {}
        ;


stmt    : expr SEMICOLON            {printf("stmt-->expr;\n");}
        | ifstmt                    {printf("stmt-->ifstmt\n");}
        | whilestmt                 {printf("stmt-->whilestmt\n");}
        | forstmt                   {printf("stmt-->forstmt\n");}
        | returnstmt                {printf("stmt-->return \n");}
        | BREAK{if (scope==0)printf("Error: use of break in scope 0 in line %d\n",yylineno);} SEMICOLON           {printf("stmt-->break;\n");}
        | CONTINUE{if (scope==0)printf("Error: use of continue in scope 0 in line %d\n",yylineno);} SEMICOLON        {printf("stmt-->continue;\n");}
        | block                     {printf("stmt-->block\n");}
        | funcdef                   {printf("stmt-->funcdef\n");}
        | SEMICOLON                 {printf("stmt-->;\n");}
        ;

expr    : assignexpr                {printf("expr-->assignexpr\n");}
        | expr AND expr             {printf("expr-->expr and expr\n");}
        | expr OR expr              {printf("expr-->expr or expr\n");}
        | expr PLUS expr            {printf("expr-->expr + expr\n");}
        | expr MINUS expr           {printf("expr-->expr - expr\n");}
        | expr MULT expr	          {printf("expr-->expr * expr\n");}
        | expr DIV expr		          {printf("expr-->expr / expr\n");}
        | expr MOD expr		          {printf("expr-->expr % expr\n");}
    		| expr EQUAL expr	          {printf("expr-->expr == expr\n");}
    		| expr NOT_EQUAL expr	      {printf("expr-->expr != expr\n");}
    		| expr GREATER expr	        {printf("expr-->expr > expr\n");}
    		| expr LESS expr	          {printf("expr-->expr < expr\n");}
    		| expr GREATER_EQUAL expr 	{printf("expr-->expr >= expr\n");}
    		| expr LESS_EQUAL expr		  {printf("expr-->expr <= expr\n");}
    		| term				              {printf("expr-->term\n");}
    		;

assignexpr  : lvalue{
              if (!arrayFlag)
                  if (isFunction(yylval.stringValue))
                    printf("ERROR: In Line %d  Can not assign any value to %s cause its a function\n",yylineno, yylval.stringValue);

              arrayFlag=0;
}
              ASSIGNMENT expr   {printf("assignexpr-->lvalue = expr\n");}
              ;


term    : LEFT_PARENTHESIS expr RIGHT_PARENTHESIS {printf("term-->(expr)\n");}
        | MINUS expr %prec UMINUS                 {printf("term--> -expr\n");}
        | NOT expr                                {printf("term--> !expr\n");}
        | INCREMENT lvalue                        {printf("term--> ++lvalue\n");
            if (isFunction(yylval.stringValue))
              printf("ERROR: In Line %d  Can not increment  %s,its a function\n",yylineno, yylval.stringValue); }
        | lvalue INCREMENT                        {printf("term--> lvalue++\n");
        if (isFunction(yylval.stringValue))
          printf("ERROR: In Line %d  Can not increment  %s,its a function\n",yylineno, yylval.stringValue); }
        | DECREMENT lvalue                        {printf("term--> --lvalue\n");
        if (isFunction(yylval.stringValue))
          printf("ERROR: In Line %d  Can not decrement  %s,its a function\n",yylineno, yylval.stringValue); }
        | lvalue DECREMENT                        {printf("term--> lvalue--\n");
        if (isFunction(yylval.stringValue))
          printf("ERROR: In Line %d  Can not decrement  %s,its a function\n",yylineno, yylval.stringValue); }
        | primary                                 {printf("term--> primary\n");}
        ;


primary   : lvalue {printf("primary--> lvalue\n");}
          | call {printf("primary--> call\n");}
          | objectdef {printf("primary--> objectdef\n");}
          | LEFT_PARENTHESIS funcdef RIGHT_PARENTHESIS {printf("primary--> ( funcdef )\n");}
          | const{printf("primary--> const\n");}
          ;

const	    : NUMBER  		{printf("const--> NUMBER\n");}
          | REAL_NUMBER	{printf("const--> REAL_NUMBER\n");}
          | STRING		  {printf("const--> STRING\n");}
          | TRUE			  {printf("const--> TRUE\n");}
          | FALSE			  {printf("const--> FALSE\n");}
          | NIL 		  	{printf("const--> NIL\n");}
          ;

lvalue      : ID {
              printf("lvalue--> ID\n");
              int tempScope=scope;
              node* tempNode=NULL;
              while (tempScope>-1){
              //printf("%s inside while\n",yytext);
                if((tempNode=scopeLookup(tempScope,yytext))!=NULL) {
                  //printf("%s inside if1\n",yytext);
                    IDfoundFlag=1;
                    //printf("tempScope: %d tempNode->scope :%d\n",tempScope,tempNode->scope);
                    tempScope=tempNode->scope;
                    if((tempScope!=0)&&(!isFunction(tempNode->name))){
                      //printf("%s inside if2\n",yytext);
                        /*if a function intervenes*/
                        //printf("scope: %d %d\n",tempScope,scope-1);
                        if(intervenesFunction(tempScope,scope-1))
                            printf("ERROR: In Line %d Can not access %s\n",yylineno,yylval.stringValue);
                    }

                      break;
                  }
                tempScope--;
                }
                /*if ID wasnt found*/
                if (!IDfoundFlag){
                  if (scope == 0) insert(yytext, GLOBAL, yylineno, scope);
                  else insert(yytext, LOCL, yylineno, scope);
                }
                IDfoundFlag=0;
              }
            | LOCAL ID {printf("lvalue--> local ID\n");
              node* tempNode=scopeLookup(scope,yytext);
              if (tempNode==NULL&&!checkIfLibFunc(yytext)){
                  if (scope==0)insert(strdup(yytext),GLOBAL, yylineno, scope);
                  else insert(strdup(yytext),LOCL, yylineno, scope);
              }else {
                if (checkIfLibFunc(yytext)){
                printf("ERROR: In Line %d  %s Shadows a Library Function!\n",yylineno, yytext); }
              }
  					}
            | DOUBLE_COLONS ID{printf("lvalue-->:: ID\n");
                if(scopeLookup(0, yytext)== NULL){
                  printf("ERROR: In Line %d  There is no global var with the name %s\n",yylineno, yytext);//yylval.stringValue;

                }
              }
            | member {printf("lvalue--> member\n");}
            ;

member      : lvalue DOT ID {printf("member--> lvalue . ID\n");}
            | lvalue LEFT_SQUARE_BRACKET expr RIGHT_SQUARE_BRACKET {arrayFlag = 1;printf("member--> lvalue [ expr ] ID\n");}
            | call DOT ID {printf("member--> call . ID\n");}
            | call LEFT_SQUARE_BRACKET expr RIGHT_SQUARE_BRACKET {arrayFlag = 1;printf("member--> call [ expr ]\n");}
            ;


call        : call LEFT_PARENTHESIS elist RIGHT_PARENTHESIS {printf("call--> call ( elist ) \n");}
            | lvalue callsuffix {printf("call--> lvalue callsuffix\n");}
            | LEFT_PARENTHESIS funcdef RIGHT_PARENTHESIS LEFT_PARENTHESIS elist RIGHT_PARENTHESIS {printf("call--> ( funcdef ) ( elist )\n");}
            ;

callsuffix  : normcall {printf("callsuffix--> normcall \n");}
            | methodcall {printf("callsuffix--> methodcall \n");}
            ;

normcall    :  LEFT_PARENTHESIS elist RIGHT_PARENTHESIS {printf("normcall-->( elist )\n");}
            ;

methodcall  : DOUBLE_DOT ID LEFT_PARENTHESIS elist RIGHT_PARENTHESIS {printf("methodcall--> .. ID( elist )\n");}
            ;

elist       : expr cexprs	{printf("elist-->expr cexprs\n");}
		        |/*empty*/	{printf("elist-->empty\n");}
		        ;

cexprs	     :COMMA expr cexprs {printf("cexprs--> , expr cexprs\n");}
		         | /*empty*/	   {printf("cexprs-->empty\n");}
		         ;


objectdef	: LEFT_SQUARE_BRACKET elist RIGHT_SQUARE_BRACKET	{printf("objectdef-->[ elist ]\n");}
			    | LEFT_SQUARE_BRACKET indexed RIGHT_SQUARE_BRACKET   {printf("objectdef-->[ indexed ]\n");}
			    ;

indexed		: indexedelem clindexedelem	{printf("indexed-->indexedelem clindexedelem\n");}
	        ;

clindexedelem	: COMMA indexedelem clindexedelem	{printf("clindexedelem-->, indexedelem clindexedelem\n");}
				      | /*empty*/		{printf("clindexedelem-->empty\n");}
				      ;

indexedelem	: LEFT_CURLY_BRACKET expr COLON expr RIGHT_CURLY_BRACKET		{printf("indexedelem-->{expr ; expr }\n");}
            ;

block			: LEFT_CURLY_BRACKET RIGHT_CURLY_BRACKET	{printf("block-->{}\n");}
			 	  | LEFT_CURLY_BRACKET {scope++;} stmt program RIGHT_CURLY_BRACKET{
            printf("block-->{ stmt }\n");
            hide(scope);
            scope--;}
				  ;

funcdef : FUNCTION {
                  char *newName=malloc(sizeof(char)*15);
                  strcpy(newName,"_f");
                  char str[12];
                  int i=0;
                  for(i=0;i<12;i++)
                    str[i]='\0';
                  sprintf(str, "%d", anonFuncCount);
                  strcat(newName,str);
                  anonFuncCount++;
                  currentFunction=insert(newName,USERFUNC,yylineno,scope);} LEFT_PARENTHESIS {scope++;}
                  /*scope -- giati otan anoiksei to block tha kanei ++ pali*/
                  idlist RIGHT_PARENTHESIS {scope--;} block {printf("funcdef-->function( idlist ) block \n");}


        | FUNCTION ID{
                        if(scopeLookup(scope,yytext)!=NULL){
                            printf("ERROR: at line %d, %s collides with other function or variable\n",yylineno,yytext);
                        }
                        else if(checkIfLibFunc(yytext)){
                                printf("ERROR: at line %d, %s collides with library function\n",yylineno,yytext);
                        }else if(argLookup(yytext)){
                                  printf("ERROR: at line %d,cant use %s as a function name\n",yylineno,yytext);
                        }
                      currentFunction=NULL;
                      currentFunction=insert(yytext,USERFUNC,yylineno,scope); } LEFT_PARENTHESIS {scope++;}
                      idlist RIGHT_PARENTHESIS {scope--;} block	{printf("funcdef-->function ID( idlist ) block \n");}
		    ;


idlist	: ID {if(scopeLookup(scope,yytext)!=NULL){
                printf("ERROR: invalid name in line %d\n",yylineno);
             }
             else if(checkIfLibFunc(yytext))
                printf("ERROR: collision with library function in line %d\n",yylineno);
             if(currentFunction!=NULL) insertArguments(currentFunction,yytext);
             else {insert(yytext,FORMAL,yylineno,scope);}
             }
              cidlist	{printf("idlist--> ID cidlist\n");}
		    | /*empty*/	{currentFunction=NULL;printf("idlist-->empty\n");}
		    ;


cidlist	: COMMA ID{if(scopeLookup(scope,yytext)!=NULL){
                printf("ERROR: invalid name in line %d\n",yylineno);
                currentFunction=NULL;
             }
             else if(checkIfLibFunc(yytext))
                    printf("ERROR: collision with library function in line %d\n",yylineno);
             args *tmp=currentFunction->FuncArgs;
             while(tmp!=NULL){
               if(!strcmp(tmp->name,yytext))
                  printf("ERROR: argument redefinition in line %d\n",yylineno);
               tmp=tmp->next;
             }
             if(currentFunction!=NULL) insertArguments(currentFunction,yytext);
             else insert(yytext,FORMAL,yylineno,scope);
            }
              cidlist {printf("cidlist-->, ID cidlist\n");}
		    | /*empty*/	{currentFunction=NULL;printf("cidlist-->empty\n");}
		    ;

ifstmt	: IF LEFT_PARENTHESIS expr RIGHT_PARENTHESIS stmt{printf("ifstmt-->if(expr)stmt\n");}
        | IF LEFT_PARENTHESIS expr RIGHT_PARENTHESIS stmt ELSE stmt{printf("ifstmt-->if(expr)stmt else stmt\n");}
		    ;

whilestmt	: WHILE LEFT_PARENTHESIS expr RIGHT_PARENTHESIS stmt{printf("whilestmt-->while(expr)stmt\n");}
			    ;

forstmt	: FOR LEFT_PARENTHESIS elist SEMICOLON expr SEMICOLON elist RIGHT_PARENTHESIS stmt	{printf("forstmt-->for(elist;expr;) stmt\n");}
		    ;

returnstmt	: RETURN{if (scope==0)printf("Error use of return in scope 0 in line %d\n",yylineno);} expr  SEMICOLON	         {printf("returnstmt-->return expr;\n");}
			      | RETURN{if (scope==0)printf("Error use of return in scope 0 in line %d\n",yylineno);} SEMICOLON	               {printf("returnstmt-->return;\n");}
			      ;

%%

int yyerror (char* yaccProvidedMessage)
{
	printf("%s: at line %d, before token: '%s'\n", yaccProvidedMessage, yylineno, yytext);
}

int main(int argc, char** argv){
initialize();
if (argc == 3){
  if( !(yyin = fopen(argv[1], "r")) ) {
    printf("Cannot Open File: %s\n", argv[1]);
    yyin = stdin;
  }
  if(!(yyout = fopen(argv[2], "w")) )
  {
    printf("Cannot Open File: %s\n", argv[2]);
    yyout = stdout;
  }
}
else if (argc == 2){
  if( !(yyin = fopen(argv[1], "r")) ) {
    printf("Cannot Open File: %s\n", argv[1]);
    yyin = stdin;
  }
}
else{
  printf("NO ARGUMENTS\n");
  return 0;
}

yyparse();
printf("SYMTABLE:\n");
printTable();
printf("\nSCOPES:\n");
printScopes();
return 0;
}
