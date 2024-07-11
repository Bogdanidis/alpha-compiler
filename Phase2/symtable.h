#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 25
#define max_scope 8



typedef struct Function{
    const char *name;
    struct Function *next;
}args;

typedef enum SymbolType{
    GLOBAL,LOCL,FORMAL,USERFUNC,LIBFUNC
}Type;

typedef struct SymbolNode{
    const char *name;
    unsigned int scope;
    unsigned int line;
    struct SymbolNode *next;
    struct SymbolNode *next_scope;
    Type type;
    int isActive;
    args *FuncArgs;
}node;

node *heads[max_scope]; // heads gia tis upolistes twn scopes
node *hash_array[size]; //pointers se listes tou hastable



/*Return the index where the symbol is going */
/*to be inserted based on it's name*/
int hash_function(const char *a){
    int i=0;
    int mul=3;
    int return_value=0;
    for(i=0;a[i]!='\0';i++)
        return_value=mul*return_value+a[i];

    return return_value%size;
}

node *create_node(const char*name,Type type,int line ,int scope){
    node *new_node=malloc(sizeof(node));
    new_node->isActive=1;
    new_node->line=line;
    new_node->name=strdup(name);
    new_node->scope=scope;
    new_node->type=type;
    new_node->next_scope=NULL;
    new_node->next=NULL;
    new_node->FuncArgs=NULL;
    return new_node;
}

void insertArguments(node * function,const char *arg){
    args *newArg=malloc(sizeof(args));
    newArg->name=strdup(arg);
    newArg->next=NULL;
    if(function->FuncArgs==NULL)
        function->FuncArgs=newArg;
    else{
        args *tmp=function->FuncArgs;
        while(tmp->next!=NULL)
            tmp=tmp->next;
        tmp->next=newArg;
    }
    
    
}

node* insert(const char *name,Type type,int line,int scope){
    int index=hash_function(name);
    node *new_node=create_node(name,type,line,scope);
    if(heads[scope]==NULL){
        heads[scope]=new_node;
    }else{
        new_node->next_scope=heads[scope];
        heads[scope]=new_node;
    }

    if(hash_array[index]==NULL)
        hash_array[index]=new_node;
    else{
       new_node->next=hash_array[index];
       hash_array[index]=new_node;
    }
    return new_node;
}

void hide(int scope){
    if(scope>max_scope) //isws den xreaizetai kan, alla eimai alvanos
        return;
    node *tmp=heads[scope];
    while(tmp!=NULL){
        tmp->isActive=0;
        tmp=tmp->next_scope;
    }
}

node* scopeLookup(int scope,const char * name){
    node* tmp=heads[scope];
    while(tmp!=NULL&&strcmp(tmp->name,name)){
        if(tmp->isActive){
            args* temp=tmp->FuncArgs;
            while(temp!=NULL){
                if(!strcmp(temp->name,name)){
                    node * newNode=malloc(sizeof(node));
                    newNode->FuncArgs=NULL;
                    newNode->isActive=1;
                    newNode->line=tmp->line;
                    newNode->name=strdup(name);
                    newNode->next=NULL;
                    newNode->next_scope=NULL;
                    newNode->scope=++scope;
                    newNode->type=FORMAL;
                    return newNode;
                }
                temp=temp->next;
            }
        }
        tmp=tmp->next_scope;
    }
   if(tmp==NULL||!tmp->isActive)
        return NULL;
    else if(tmp->isActive)
        return tmp;
    else
        return NULL;
}


/*converts Type to string */
char *enum_to_str(Type type){
  switch(type){
    case GLOBAL:return "global";
    case LOCL:return "local";
    case FORMAL:return "formal";
    case USERFUNC: return "userfunc";
    case LIBFUNC:return "libfunc";
    default:return "";
  }
}
int argLookup(const char *name){
    int i;
    for(i=0;i<max_scope;i++){
        node* tmp=heads[i];
        while(tmp!=NULL){
            args *tempArgs=tmp->FuncArgs;
            while(tempArgs!=NULL){
                if(!strcmp(tempArgs->name,name))
                    return 1;
                tempArgs=tempArgs->next;
            }
          
          tmp=tmp->next_scope;
      }
  }
  return 0;
}
node* tableLookup(const char *name){
    int index=hash_function(name);
    node * tmp=hash_array[index];
    while(tmp!=NULL&&strcmp(tmp->name,name)){
        if(tmp->isActive){
            args* temp=tmp->FuncArgs;
            while(temp!=NULL){
                if(!strcmp(tmp->name,name)){
                    node * newNode=malloc(sizeof(node));
                    newNode->FuncArgs=NULL;
                    newNode->isActive=1;
                    newNode->line=tmp->line;
                    newNode->name=strdup(name);
                    newNode->next=NULL;
                    newNode->next_scope=NULL;
                    newNode->scope=++(tmp->scope);
                    newNode->type=FORMAL;
                    return newNode;
                }
                temp=temp->next;
                }
            }
        tmp=tmp->next;
    }

    if(tmp==NULL||!tmp->isActive)
        return NULL;
    else if(tmp->isActive)
        return tmp;
    else
        return NULL;
}
int isFunction(const char * name){
  node* temp=tableLookup(name);
  if(temp==NULL) return 0;
  if(temp->type == USERFUNC || temp->type == LIBFUNC){
    return 1;
  } 
return 0;
}

int intervenesFunction(int startScope, int endScope) {
    int i=0;
    for (i = endScope; i >= startScope; i--) {
        node* temp = heads[i];
        while (temp != NULL) {
            if (isFunction(temp->name)) return 1;
            temp = temp->next_scope;
        }
    }
    return 0;
}
int checkIfLibFunc(const char * name){
  if(!strcmp(name,"print")||
     !strcmp(name,"input")||
     !strcmp(name,"objectmemberkeys")||
     !strcmp(name,"objecttotalmembers")||
     !strcmp(name,"objectcopy")||
     !strcmp(name,"totalarguments")||
     !strcmp(name,"argument")||
     !strcmp(name,"typeof")||
     !strcmp(name,"stronum")||
     !strcmp(name,"sqrt")||
     !strcmp(name,"cos")||
     !strcmp(name,"sin"))return 1;
  return 0;
}
void initialize(){
    int i=0;
    for(i=0;i<size;i++)
        hash_array[i]=NULL;
    for(i=0;i<max_scope;i++)
        heads[i]=NULL;
    
    insert("print", LIBFUNC , 0, 0);
	insert("input", LIBFUNC , 0, 0);
	insert("objectmemberkeys", LIBFUNC , 0, 0);
	insert("objecttotalmembers", LIBFUNC , 0, 0);
	insert("objectcopy", LIBFUNC , 0, 0);
	insert("totalarguments", LIBFUNC , 0, 0);
	insert("argument", LIBFUNC , 0, 0);
	insert("typeof", LIBFUNC , 0, 0);
	insert("stronum", LIBFUNC , 0, 0);
	insert("sqrt", LIBFUNC , 0, 0);
	insert("cos", LIBFUNC , 0, 0);
	insert("sin", LIBFUNC , 0, 0); 
}


void printTable(){
  int i;
  for(i=0;i<size;i++){
      printf("Bucket :%d ",i);
      node *tmp=hash_array[i];
      while(tmp!=NULL){
          printf("\tName: %s, Type: %s, Scope: %d, Line: %d",tmp->name,enum_to_str(tmp->type), tmp->scope ,tmp->line);
          if(tmp->type==USERFUNC||tmp->type==LIBFUNC){
            printf(" with arguments: ");
            args *tempArgs=tmp->FuncArgs;
            while(tempArgs!=NULL){
              printf("%s ",tempArgs->name);
              tempArgs=tempArgs->next;
            }
           
          }
          printf("\n");
          tmp=tmp->next;
      }
      printf("\n");
  }
}

void printScopes(){
  int i;
  for(i=0;i<max_scope;i++){
    printf("Entries with scope %d :\n",i);
      node* tmp=heads[i];
      while(tmp!=NULL){
          printf("\tName: %s, Type: %s, Line: %d",tmp->name,enum_to_str(tmp->type) ,tmp->line);
          if(tmp->type==USERFUNC||tmp->type==LIBFUNC){
            printf(" with arguments: ");
            args *tempArgs=tmp->FuncArgs;
            while(tempArgs!=NULL){
              printf("%s ",tempArgs->name);
              tempArgs=tempArgs->next;
            }
            
          }
          printf("\n");
          tmp=tmp->next_scope;
      }
      printf("\n");
  }
}
