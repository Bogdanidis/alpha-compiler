
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "parser.y"

#include "quad.h"
//#include "avm.h"
int yyerror (char* yaccProvidedMessage);
int yylex(void);
int termflag=1;
int assignflag=0;
int scope=0;

char* leftvalue;
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
node* tempFunction=NULL;
char* tempName;
node* tempsymnode=NULL;
int loopcounter=0;
int returnPatch=-1;
node* tempNodeForFunctionLocals;
int currscope(){return scope;}


/* Line 189 of yacc.c  */
#line 103 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF = 258,
     ELSE = 259,
     WHILE = 260,
     FOR = 261,
     FUNCTION = 262,
     RETURN = 263,
     BREAK = 264,
     CONTINUE = 265,
     LOCAL = 266,
     TRUE = 267,
     FALSE = 268,
     NIL = 269,
     AND = 270,
     NOT = 271,
     OR = 272,
     ASSIGNMENT = 273,
     PLUS = 274,
     MINUS = 275,
     MULT = 276,
     DIV = 277,
     MODULO = 278,
     EQUAL = 279,
     NOT_EQUAL = 280,
     INCREMENT = 281,
     DECREMENT = 282,
     GREATER = 283,
     LESS = 284,
     GREATER_EQUAL = 285,
     LESS_EQUAL = 286,
     NUMBER = 287,
     REAL_NUMBER = 288,
     ID = 289,
     STRING = 290,
     LEFT_PARENTHESIS = 291,
     RIGHT_PARENTHESIS = 292,
     LEFT_SQUARE_BRACKET = 293,
     RIGHT_SQUARE_BRACKET = 294,
     LEFT_CURLY_BRACKET = 295,
     RIGHT_CURLY_BRACKET = 296,
     SEMICOLON = 297,
     COMMA = 298,
     COLON = 299,
     DOUBLE_COLONS = 300,
     DOT = 301,
     DOUBLE_DOT = 302,
     ONE_LINE_COMMENT = 303,
     MULTI_LINE_COMMENT = 304,
     OTHER = 305,
     UMINUS = 306,
     DOTS = 307
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 139 "parser.y"

   char*  stringValue;
   int    intValue;
   double realValue;
   struct expr* expression;
   struct call* call;
   struct forStruct *forStruct;



/* Line 214 of yacc.c  */
#line 202 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 214 "parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  71
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   463

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  126
/* YYNRULES -- Number of states.  */
#define YYNSTATES  221

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    12,    14,    16,    18,
      20,    21,    25,    26,    30,    32,    34,    36,    38,    39,
      45,    46,    52,    55,    59,    63,    67,    71,    75,    76,
      81,    82,    87,    91,    95,    99,   103,   105,   106,   107,
     112,   116,   119,   122,   125,   128,   131,   133,   135,   137,
     139,   143,   145,   147,   149,   151,   153,   155,   157,   159,
     162,   165,   167,   171,   176,   180,   185,   190,   193,   200,
     202,   204,   208,   209,   216,   219,   220,   224,   225,   229,
     233,   236,   240,   241,   247,   250,   251,   257,   258,   259,
     260,   261,   262,   275,   276,   277,   278,   279,   292,   293,
     294,   295,   299,   300,   301,   306,   307,   308,   314,   317,
     322,   324,   328,   330,   331,   336,   340,   341,   342,   343,
     352,   360,   361,   362,   363,   369,   370
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    55,    -1,    56,    55,    -1,    -1,    59,
      42,    -1,   103,    -1,   105,    -1,   114,    -1,   116,    -1,
      -1,     9,    57,    42,    -1,    -1,    10,    58,    42,    -1,
      83,    -1,    85,    -1,    42,    -1,    65,    -1,    -1,    59,
      17,    60,    64,    59,    -1,    -1,    59,    15,    61,    64,
      59,    -1,    16,    59,    -1,    59,    19,    59,    -1,    59,
      20,    59,    -1,    59,    21,    59,    -1,    59,    22,    59,
      -1,    59,    23,    59,    -1,    -1,    59,    24,    62,    59,
      -1,    -1,    59,    25,    63,    59,    -1,    59,    28,    59,
      -1,    59,    29,    59,    -1,    59,    30,    59,    -1,    59,
      31,    59,    -1,    67,    -1,    -1,    -1,    70,    66,    18,
      59,    -1,    36,    59,    37,    -1,    20,    59,    -1,    26,
      70,    -1,    70,    26,    -1,    27,    70,    -1,    70,    27,
      -1,    68,    -1,    70,    -1,    72,    -1,    79,    -1,    36,
      85,    37,    -1,    69,    -1,    32,    -1,    33,    -1,    35,
      -1,    12,    -1,    13,    -1,    14,    -1,    34,    -1,    11,
      34,    -1,    45,    34,    -1,    71,    -1,    70,    46,    34,
      -1,    70,    38,    59,    39,    -1,    72,    46,    34,    -1,
      72,    38,    59,    39,    -1,    72,    36,    77,    37,    -1,
      70,    73,    -1,    36,    85,    37,    36,    77,    37,    -1,
      74,    -1,    75,    -1,    36,    77,    37,    -1,    -1,    47,
      34,    76,    36,    77,    37,    -1,    59,    78,    -1,    -1,
      43,    59,    78,    -1,    -1,    38,    77,    39,    -1,    38,
      80,    39,    -1,    82,    81,    -1,    43,    82,    81,    -1,
      -1,    40,    59,    44,    59,    41,    -1,    40,    41,    -1,
      -1,    40,    84,    56,    55,    41,    -1,    -1,    -1,    -1,
      -1,    -1,     7,    86,    36,    87,    97,    88,    37,    89,
      95,    83,    90,    96,    -1,    -1,    -1,    -1,    -1,     7,
      34,    91,    36,    92,    97,    37,    93,    95,    83,    94,
      96,    -1,    -1,    -1,    -1,    34,    98,    99,    -1,    -1,
      -1,    43,    34,   100,    99,    -1,    -1,    -1,     3,    36,
      59,   102,    37,    -1,   101,    56,    -1,   101,    56,   104,
      56,    -1,     4,    -1,   106,   107,   109,    -1,     5,    -1,
      -1,    36,    59,   108,    37,    -1,   110,    56,   111,    -1,
      -1,    -1,    -1,     6,    36,    77,    42,    64,    59,   113,
      42,    -1,   112,   115,    77,    37,   115,   109,   115,    -1,
      -1,    -1,    -1,     8,   117,    59,   118,    42,    -1,    -1,
       8,   119,    42,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   148,   148,   152,   166,   170,   192,   193,   196,   199,
     202,   202,   217,   217,   230,   231,   234,   240,   242,   242,
     283,   283,   321,   340,   345,   350,   355,   360,   365,   365,
     479,   479,   599,   607,   617,   626,   635,   641,   646,   646,
     721,   722,   733,   751,   770,   788,   807,   813,   818,   819,
     820,   823,   826,   827,   828,   829,   830,   831,   834,   899,
     923,   930,   933,   936,   942,   948,   960,   963,   977,   986,
     989,   994,  1003,  1003,  1013,  1040,  1045,  1072,  1078,  1090,
    1104,  1110,  1114,  1119,  1126,  1127,  1127,  1152,  1180,  1182,
    1182,  1183,  1152,  1210,  1242,  1243,  1244,  1210,  1268,  1273,
    1278,  1278,  1290,  1294,  1294,  1311,  1316,  1316,  1349,  1350,
    1363,  1370,  1387,  1392,  1392,  1424,  1427,  1430,  1433,  1433,
    1472,  1488,  1492,  1493,  1492,  1522,  1522
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "WHILE", "FOR", "FUNCTION",
  "RETURN", "BREAK", "CONTINUE", "LOCAL", "TRUE", "FALSE", "NIL", "AND",
  "NOT", "OR", "ASSIGNMENT", "PLUS", "MINUS", "MULT", "DIV", "MODULO",
  "EQUAL", "NOT_EQUAL", "INCREMENT", "DECREMENT", "GREATER", "LESS",
  "GREATER_EQUAL", "LESS_EQUAL", "NUMBER", "REAL_NUMBER", "ID", "STRING",
  "LEFT_PARENTHESIS", "RIGHT_PARENTHESIS", "LEFT_SQUARE_BRACKET",
  "RIGHT_SQUARE_BRACKET", "LEFT_CURLY_BRACKET", "RIGHT_CURLY_BRACKET",
  "SEMICOLON", "COMMA", "COLON", "DOUBLE_COLONS", "DOT", "DOUBLE_DOT",
  "ONE_LINE_COMMENT", "MULTI_LINE_COMMENT", "OTHER", "UMINUS", "DOTS",
  "$accept", "program", "statements", "stmt", "$@1", "$@2", "expr", "$@3",
  "$@4", "$@5", "$@6", "M", "assignexpr", "$@7", "term", "primary",
  "const", "lvalue", "member", "call", "callsuffix", "normcall",
  "methodcall", "$@8", "elist", "cexprs", "objectdef", "indexed",
  "clindexedelem", "indexedelem", "block", "$@9", "funcdef", "$@10",
  "$@11", "$@12", "$@13", "$@14", "$@15", "$@16", "$@17", "$@18",
  "funcblockstart", "funcblockend", "idlist", "$@19", "cidlist", "$@20",
  "ifprefix", "$@21", "ifstmt", "elseprefix", "whilestmt", "whilestart",
  "whilecond", "$@22", "loopstmt", "loopstart", "loopend", "forprefix",
  "$@23", "forstmt", "N", "returnstmt", "$@24", "$@25", "$@26", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    55,    56,    56,    56,    56,    56,
      57,    56,    58,    56,    56,    56,    56,    59,    60,    59,
      61,    59,    59,    59,    59,    59,    59,    59,    62,    59,
      63,    59,    59,    59,    59,    59,    59,    64,    66,    65,
      67,    67,    67,    67,    67,    67,    67,    68,    68,    68,
      68,    68,    69,    69,    69,    69,    69,    69,    70,    70,
      70,    70,    71,    71,    71,    71,    72,    72,    72,    73,
      73,    74,    76,    75,    77,    77,    78,    78,    79,    79,
      80,    81,    81,    82,    83,    84,    83,    86,    87,    88,
      89,    90,    85,    91,    92,    93,    94,    85,    95,    96,
      98,    97,    97,   100,    99,    99,   102,   101,   103,   103,
     104,   105,   106,   108,   107,   109,   110,   111,   113,   112,
     114,   115,   117,   118,   116,   119,   116
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     1,     1,     1,     1,
       0,     3,     0,     3,     1,     1,     1,     1,     0,     5,
       0,     5,     2,     3,     3,     3,     3,     3,     0,     4,
       0,     4,     3,     3,     3,     3,     1,     0,     0,     4,
       3,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     3,     4,     3,     4,     4,     2,     6,     1,
       1,     3,     0,     6,     2,     0,     3,     0,     3,     3,
       2,     3,     0,     5,     2,     0,     5,     0,     0,     0,
       0,     0,    12,     0,     0,     0,     0,    12,     0,     0,
       0,     3,     0,     0,     4,     0,     0,     5,     2,     4,
       1,     3,     1,     0,     4,     3,     0,     0,     0,     8,
       7,     0,     0,     0,     5,     0,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,   112,     0,    87,   122,    10,    12,     0,    55,
      56,    57,     0,     0,     0,     0,    52,    53,    58,    54,
       0,    75,    85,    16,     0,     0,     2,     4,     0,    17,
      36,    46,    51,    47,    61,    48,    49,    14,    15,     0,
       6,     7,     0,   121,     8,     9,     0,    75,    93,     0,
       0,     0,     0,     0,    59,    22,    41,     0,    42,     0,
      44,     0,     0,     0,    77,     0,     0,    82,    84,     0,
      60,     1,     3,    20,    18,     0,     0,     0,     0,     0,
      28,    30,     0,     0,     0,     0,     5,    43,    45,    75,
       0,     0,     0,     0,    67,    69,    70,    75,     0,     0,
     108,     0,   116,    75,   106,     0,     0,    88,   123,   126,
      11,    13,     0,    40,    50,     0,     0,    74,    78,    79,
       0,    80,     4,    37,    37,    23,    24,    25,    26,    27,
       0,     0,    32,    33,    34,    35,     0,     0,    62,    72,
       0,     0,     0,    64,   110,     0,   113,   111,     0,     0,
       0,    37,    94,   102,     0,     0,    75,     0,    77,    82,
       0,     0,     0,    29,    31,    71,    63,     0,    39,    66,
      65,   109,     0,   117,   121,   107,     0,   102,   100,    89,
     124,     0,     0,    76,    81,    86,    21,    19,    75,   114,
     115,   116,   118,     0,   105,     0,    68,    83,     0,   121,
       0,    95,     0,   101,    90,    73,   120,   119,    98,   103,
      98,     0,   105,     0,    96,   104,    91,    99,    99,    97,
      92
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    25,    26,    27,    52,    53,    28,   124,   123,   130,
     131,   161,    29,    93,    30,    31,    32,    33,    34,    35,
      94,    95,    96,   167,    65,   117,    36,    66,   121,    67,
      37,    69,    38,    49,   153,   195,   210,   218,   106,   177,
     208,   217,   211,   219,   179,   194,   203,   212,    39,   150,
      40,   145,    41,    42,   102,   172,   147,   148,   190,    43,
     200,    44,   103,    45,    50,   154,    51
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -201
static const yytype_int16 yypact[] =
{
     172,   -21,  -201,    -6,     2,     1,  -201,  -201,     5,  -201,
    -201,  -201,   237,   237,    -5,    -5,  -201,  -201,  -201,  -201,
     120,   207,    12,  -201,    16,    60,  -201,   172,   281,  -201,
    -201,  -201,  -201,    56,  -201,    23,  -201,  -201,  -201,   172,
    -201,  -201,    32,  -201,  -201,  -201,   237,   237,  -201,    48,
     237,    20,    45,    46,  -201,  -201,  -201,    83,    59,    23,
      59,   370,    63,   237,   264,    54,    57,    55,  -201,   172,
    -201,  -201,  -201,  -201,  -201,   237,   237,   237,   237,   237,
    -201,  -201,   237,   237,   237,   237,  -201,  -201,  -201,   237,
     237,    67,    73,    90,  -201,  -201,  -201,   237,   237,    76,
     109,   237,  -201,   237,   389,    72,    79,  -201,   389,  -201,
    -201,  -201,    80,  -201,    84,    -3,   237,  -201,  -201,  -201,
      81,  -201,   172,  -201,  -201,    58,    58,  -201,  -201,  -201,
     237,   237,    26,    26,    26,    26,    85,   328,  -201,  -201,
     237,    86,   349,  -201,  -201,   172,   389,  -201,   172,    87,
      88,  -201,  -201,    82,    93,    84,   237,   237,   264,    55,
      89,   237,   237,   419,   419,  -201,  -201,   101,   389,  -201,
    -201,  -201,    92,  -201,  -201,  -201,   237,    82,  -201,  -201,
    -201,   102,   305,  -201,  -201,  -201,   432,   406,   237,  -201,
    -201,  -201,   389,   104,    95,   105,  -201,  -201,   111,  -201,
     115,  -201,   117,  -201,  -201,  -201,  -201,  -201,  -201,  -201,
    -201,   119,    95,   119,  -201,  -201,  -201,  -201,  -201,  -201,
    -201
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -201,  -201,   -23,   -36,  -201,  -201,   -12,  -201,  -201,  -201,
    -201,  -114,  -201,  -201,  -201,  -201,  -201,     9,  -201,    61,
    -201,  -201,  -201,  -201,   -45,   -32,  -201,  -201,     3,    40,
    -200,  -201,   -15,  -201,  -201,  -201,  -201,  -201,  -201,  -201,
    -201,  -201,   -49,   -55,   -11,  -201,   -44,  -201,  -201,  -201,
    -201,  -201,  -201,  -201,  -201,  -201,   -24,  -201,  -201,  -201,
    -201,  -201,  -167,  -201,  -201,  -201,  -201
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -126
static const yytype_int16 yytable[] =
{
      55,    56,   105,   100,    72,    62,     8,   191,    61,    64,
     162,   214,    73,   216,    74,    46,    75,    76,    77,    78,
      79,    80,    81,    58,    60,    82,    83,    84,    85,    18,
      47,    57,   206,   122,   104,    64,    48,   176,   108,    54,
      24,   157,   112,  -125,   136,    75,    76,    77,    78,    79,
      70,   115,   141,    68,  -126,  -126,  -126,  -126,   149,    97,
      71,    98,   109,   125,   126,   127,   128,   129,   101,    99,
     132,   133,   134,   135,   -38,    59,    59,    64,   137,    77,
      78,    79,    87,    88,   107,    64,   142,   110,   111,   146,
       4,    64,    89,   118,    90,    89,   119,    90,   120,   160,
     114,   138,    91,    92,   158,    91,    92,   139,   140,   171,
     143,   181,   173,   144,   151,   152,   178,   155,   163,   164,
     156,    63,   165,   169,   174,   175,   183,     4,   168,   189,
     185,     8,     9,    10,    11,   180,    12,   188,   202,   196,
      13,   201,   204,   198,    64,   182,    14,    15,   205,   186,
     187,   209,    16,    17,    18,    19,    20,   207,    21,    22,
     159,   213,   184,   220,   192,    24,   193,   199,   215,     0,
       0,     0,     0,     0,     0,     1,    64,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,     0,    12,     0,
       0,     0,    13,     0,     0,     0,     0,     0,    14,    15,
       0,     0,     0,     0,    16,    17,    18,    19,    20,     0,
      21,     0,    22,     0,    23,     0,     0,    24,     8,     9,
      10,    11,     0,    12,     0,     0,     0,    13,     0,     0,
       0,     0,     0,    14,    15,     0,     0,     0,     0,    16,
      17,    18,    19,    20,     0,    21,     0,    63,     8,     9,
      10,    11,    24,    12,     0,     0,     0,    13,     0,     0,
       0,     0,     0,    14,    15,     0,     0,     0,     0,    16,
      17,    18,    19,    20,     0,    21,     0,     0,     0,    73,
       0,    74,    24,    75,    76,    77,    78,    79,    80,    81,
       0,     0,    82,    83,    84,    85,    73,     0,    74,     0,
      75,    76,    77,    78,    79,    80,    81,   116,     0,    82,
      83,    84,    85,     0,     0,     0,     0,     0,     0,     0,
      73,     0,    74,    86,    75,    76,    77,    78,    79,    80,
      81,     0,     0,    82,    83,    84,    85,     0,     0,     0,
       0,     0,     0,    73,     0,    74,   197,    75,    76,    77,
      78,    79,    80,    81,     0,     0,    82,    83,    84,    85,
       0,     0,     0,     0,    73,     0,    74,   166,    75,    76,
      77,    78,    79,    80,    81,     0,     0,    82,    83,    84,
      85,     0,     0,     0,     0,    73,     0,    74,   170,    75,
      76,    77,    78,    79,    80,    81,     0,     0,    82,    83,
      84,    85,     0,     0,    73,     0,    74,   113,    75,    76,
      77,    78,    79,    80,    81,     0,     0,    82,    83,    84,
      85,    73,     0,     0,     0,    75,    76,    77,    78,    79,
      80,    81,     0,     0,    82,    83,    84,    85,    75,    76,
      77,    78,    79,  -126,  -126,     0,     0,    82,    83,    84,
      85,    75,    76,    77,    78,    79,    80,    81,     0,     0,
      82,    83,    84,    85
};

static const yytype_int16 yycheck[] =
{
      12,    13,    47,    39,    27,    20,    11,   174,    20,    21,
     124,   211,    15,   213,    17,    36,    19,    20,    21,    22,
      23,    24,    25,    14,    15,    28,    29,    30,    31,    34,
      36,    36,   199,    69,    46,    47,    34,   151,    50,    34,
      45,    44,    57,    42,    89,    19,    20,    21,    22,    23,
      34,    63,    97,    41,    28,    29,    30,    31,   103,    36,
       0,    38,    42,    75,    76,    77,    78,    79,    36,    46,
      82,    83,    84,    85,    18,    14,    15,    89,    90,    21,
      22,    23,    26,    27,    36,    97,    98,    42,    42,   101,
       7,   103,    36,    39,    38,    36,    39,    38,    43,   122,
      37,    34,    46,    47,   116,    46,    47,    34,    18,   145,
      34,   156,   148,     4,    42,    36,    34,    37,   130,   131,
      36,    40,    37,    37,    37,    37,   158,     7,   140,    37,
      41,    11,    12,    13,    14,    42,    16,    36,    43,    37,
      20,    37,    37,   188,   156,   157,    26,    27,    37,   161,
     162,    34,    32,    33,    34,    35,    36,    42,    38,    40,
     120,   210,   159,   218,   176,    45,   177,   191,   212,    -1,
      -1,    -1,    -1,    -1,    -1,     3,   188,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    -1,
      38,    -1,    40,    -1,    42,    -1,    -1,    45,    11,    12,
      13,    14,    -1,    16,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    -1,    38,    -1,    40,    11,    12,
      13,    14,    45,    16,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    -1,    38,    -1,    -1,    -1,    15,
      -1,    17,    45,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    28,    29,    30,    31,    15,    -1,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    43,    -1,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      15,    -1,    17,    42,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    28,    29,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    15,    -1,    17,    41,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    28,    29,    30,    31,
      -1,    -1,    -1,    -1,    15,    -1,    17,    39,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    28,    29,    30,
      31,    -1,    -1,    -1,    -1,    15,    -1,    17,    39,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    28,    29,
      30,    31,    -1,    -1,    15,    -1,    17,    37,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    28,    29,    30,
      31,    15,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    28,    29,    30,    31,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    28,    29,    30,
      31,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      28,    29,    30,    31
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    16,    20,    26,    27,    32,    33,    34,    35,
      36,    38,    40,    42,    45,    54,    55,    56,    59,    65,
      67,    68,    69,    70,    71,    72,    79,    83,    85,   101,
     103,   105,   106,   112,   114,   116,    36,    36,    34,    86,
     117,   119,    57,    58,    34,    59,    59,    36,    70,    72,
      70,    59,    85,    40,    59,    77,    80,    82,    41,    84,
      34,     0,    55,    15,    17,    19,    20,    21,    22,    23,
      24,    25,    28,    29,    30,    31,    42,    26,    27,    36,
      38,    46,    47,    66,    73,    74,    75,    36,    38,    46,
      56,    36,   107,   115,    59,    77,    91,    36,    59,    42,
      42,    42,    85,    37,    37,    59,    43,    78,    39,    39,
      43,    81,    56,    61,    60,    59,    59,    59,    59,    59,
      62,    63,    59,    59,    59,    59,    77,    59,    34,    34,
      18,    77,    59,    34,     4,   104,    59,   109,   110,    77,
     102,    42,    36,    87,   118,    37,    36,    44,    59,    82,
      55,    64,    64,    59,    59,    37,    39,    76,    59,    37,
      39,    56,   108,    56,    37,    37,    64,    92,    34,    97,
      42,    77,    59,    78,    81,    41,    59,    59,    36,    37,
     111,   115,    59,    97,    98,    88,    37,    41,    77,   109,
     113,    37,    43,    99,    37,    37,   115,    42,    93,    34,
      89,    95,   100,    95,    83,    99,    83,    94,    90,    96,
      96
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 148 "parser.y"
    {printf(" program --> statements \n");;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 152 "parser.y"
    {
                              //  printf("%p %p %p\n",$$,$1,$2);
                                if((yyvsp[(1) - (2)].expression)&&(yyvsp[(2) - (2)].expression)){

                                  (yyvsp[(1) - (2)].expression)->breaklist=merge((yyvsp[(1) - (2)].expression)->breaklist,(yyvsp[(2) - (2)].expression)->breaklist);
                                  (yyvsp[(1) - (2)].expression)->continuelist=merge((yyvsp[(1) - (2)].expression)->continuelist,(yyvsp[(2) - (2)].expression)->continuelist);
                              //    printf("$1 %p \n",$1);
                                }
                                if((yyvsp[(1) - (2)].expression)){
                                  (yyval.expression)=(yyvsp[(1) - (2)].expression);
                                }else if((yyvsp[(2) - (2)].expression)){(yyval.expression)=(yyvsp[(2) - (2)].expression);}
                            //    printf("$$ %p \n",$$);

                                printf("statements --> stmt statements\n");;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 166 "parser.y"
    {(yyval.expression)=NULL;printf("statements --> empty\n");;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 170 "parser.y"
    {

                            if((yyvsp[(1) - (2)].expression)->backpatch&&!assignflag){
                              expr* t=newexpr(boolexpr_e),*t1=newexpr(boolexpr_e),*arg=newexpr(var_e);
                              t->type=constbool_e;
                              t->boolConst=1;
                              arg->type=var_e;
                              arg->sym=newtemp();
                              arg->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                              strcpy(arg->strConst,arg->sym->name);
                              backpatch((yyvsp[(1) - (2)].expression)->truelist,nextquadlabel());
                              emit(assign,t,NULL,arg,-1,yylineno);
                              emit(jump,NULL,NULL,NULL,nextquadlabel()+2,yylineno);
                              t1->boolConst=0;
                              t1->type=constbool_e;
                              backpatch((yyvsp[(1) - (2)].expression)->falselist,nextquadlabel());
                              emit(assign,t1,NULL,arg,-1,yylineno);
                              assignflag=0;
                            }


                            (yyval.expression)=(yyvsp[(1) - (2)].expression);resetTempVar();printf("stmt-->expr;\n");;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 192 "parser.y"
    {(yyval.expression)=(yyvsp[(1) - (1)].expression);printf("stmt-->ifstmt\n");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 193 "parser.y"
    {
            (yyval.expression)=NULL;
            printf("stmt-->whilestmt\n");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 196 "parser.y"
    {
              (yyval.expression)=NULL;
              printf("stmt-->forstmt\n");;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 199 "parser.y"
    {
              (yyval.expression)=NULL;
              printf("stmt-->return \n");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 202 "parser.y"
    {if (scope==0)printf("ERROR: use of break in scope 0 in line %d\n",yylineno);;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 202 "parser.y"
    {
            if(loopcounter>0){

                  (yyval.expression)=malloc(sizeof(expr));
                //  printf("%p\n",$$);
                  (yyval.expression)->breaklist=makelist(nextquadlabel(),(yyval.expression)->breaklist);


                  emit(jump,NULL,NULL,NULL,-1,yylineno);

                  }
                  else
                  printf("ERROR: Use of break outside a loop in line %d\n",yylineno);
                   printf("stmt-->break;\n");
                   ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 217 "parser.y"
    {if (scope==0)printf("ERROR: use of continue in scope 0 in line %d\n",yylineno);;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 217 "parser.y"
    {
                if(loopcounter>0){

                    (yyval.expression)=malloc(sizeof(expr));
                //    printf("%p\n",$$);
                    (yyval.expression)->continuelist=makelist(nextquadlabel(),  (yyval.expression)->continuelist);
                    emit(jump,NULL,NULL,NULL,-1,yylineno);

                      }
                      else
                      printf("ERROR: Use of continue outside a loop in line %d\n",yylineno);
                printf("stmt-->continue;\n");
                ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 230 "parser.y"
    {(yyval.expression)=(yyvsp[(1) - (1)].expression);printf("stmt-->block\n");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 231 "parser.y"
    {
              (yyval.expression)=NULL;
              printf("stmt-->funcdef\n");;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 234 "parser.y"
    {(yyval.expression)=NULL;resetTempVar();printf("stmt-->;\n");;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 240 "parser.y"
    {(yyval.expression)=(yyvsp[(1) - (1)].expression);printf("expr-->assignexpr\n");;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 242 "parser.y"
    {
                      if(!(yyvsp[(1) - (2)].expression)->isBoolean&&(yyvsp[(1) - (2)].expression)->isEmitable){
                          if(!(yyvsp[(1) - (2)].expression)->passedByNot){
                            (yyvsp[(1) - (2)].expression)->truelist=makelist(nextquadlabel(),(yyvsp[(1) - (2)].expression)->truelist);
                            (yyvsp[(1) - (2)].expression)->falselist=makelist(nextquadlabel()+1,(yyvsp[(1) - (2)].expression)->falselist);
                            emit(if_eq,newexpr_constbool(1),(yyvsp[(1) - (2)].expression),NULL,-1,yylineno);
                            emit(jump,NULL,NULL,NULL,-1,yylineno);
                            (yyvsp[(1) - (2)].expression)->isEmitable=0;
                          }else
                                (yyvsp[(1) - (2)].expression)->passedByNot=0;

                      }
                  ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 254 "parser.y"
    {
                                    (yyval.expression)->backpatch=1;

                                    backpatch((yyvsp[(1) - (5)].expression)->falselist,(yyvsp[(4) - (5)].intValue));



                                      if(!(yyvsp[(5) - (5)].expression)->isBoolean&&(yyvsp[(5) - (5)].expression)->isEmitable){
                                          if(!(yyvsp[(5) - (5)].expression)->passedByNot){
                                            (yyvsp[(5) - (5)].expression)->truelist=makelist(nextquadlabel(),(yyvsp[(5) - (5)].expression)->truelist);
                                            (yyvsp[(5) - (5)].expression)->falselist=makelist(nextquadlabel()+1,(yyvsp[(5) - (5)].expression)->falselist);
                                            emit(if_eq,newexpr_constbool(1),(yyvsp[(5) - (5)].expression),NULL,-1,yylineno);
                                            emit(jump,NULL,NULL,NULL,-1,yylineno);
                                            (yyvsp[(5) - (5)].expression)->isEmitable=0;
                                          }else
                                                (yyvsp[(5) - (5)].expression)->passedByNot=0;

                                      }

                                      if(!(yyvsp[(1) - (5)].expression)->isEmitable&&!(yyvsp[(5) - (5)].expression)->isEmitable){
                                          (yyval.expression)->isEmitable=0;
                                      }

                                      (yyval.expression)->truelist=merge((yyvsp[(1) - (5)].expression)->truelist,(yyvsp[(5) - (5)].expression)->truelist);
                                      (yyval.expression)->falselist=(yyvsp[(5) - (5)].expression)->falselist;
                                      (yyval.expression)->passedByNot=0;

                                    printf("expr-->expr or expr\n");;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 283 "parser.y"
    {

                    if(!(yyvsp[(1) - (2)].expression)->isBoolean&&(yyvsp[(1) - (2)].expression)->isEmitable){
                        if(!((yyvsp[(1) - (2)].expression)->passedByNot)){
                          (yyvsp[(1) - (2)].expression)->truelist=makelist(nextquadlabel(),(yyvsp[(1) - (2)].expression)->truelist);
                          (yyvsp[(1) - (2)].expression)->falselist=makelist(nextquadlabel()+1,(yyvsp[(1) - (2)].expression)->falselist);
                          emit(if_eq,newexpr_constbool(1),(yyvsp[(1) - (2)].expression),NULL,-1,yylineno);
                          emit(jump,NULL,NULL,NULL,-1,yylineno);
                          (yyvsp[(1) - (2)].expression)->isEmitable=0;
                        }else
                              (yyvsp[(1) - (2)].expression)->passedByNot=0;

                    }

                    ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 297 "parser.y"
    {

                                    (yyval.expression)->backpatch=1;

                                    backpatch((yyvsp[(1) - (5)].expression)->truelist,(yyvsp[(4) - (5)].intValue));
                                     if(!(yyvsp[(5) - (5)].expression)->isBoolean&&(yyvsp[(5) - (5)].expression)->isEmitable){
                                         if(!(yyvsp[(5) - (5)].expression)->passedByNot){
                                           (yyvsp[(5) - (5)].expression)->truelist=makelist(nextquadlabel(),(yyvsp[(5) - (5)].expression)->truelist);
                                           (yyvsp[(5) - (5)].expression)->falselist=makelist(nextquadlabel()+1,(yyvsp[(5) - (5)].expression)->falselist);
                                           emit(if_eq,newexpr_constbool(1),(yyvsp[(5) - (5)].expression),NULL,-1,yylineno);
                                           emit(jump,NULL,NULL,NULL,-1,yylineno);
                                           (yyvsp[(5) - (5)].expression)->isEmitable=0;
                                         }else
                                               (yyvsp[(5) - (5)].expression)->passedByNot=0;

                                     }
                                     if(!(yyvsp[(1) - (5)].expression)->isEmitable&&!(yyvsp[(5) - (5)].expression)->isEmitable){
                                         (yyval.expression)->isEmitable=0;
                                     }

                                    (yyval.expression)->truelist=(yyvsp[(5) - (5)].expression)->truelist;
                                    (yyval.expression)->falselist=merge((yyvsp[(1) - (5)].expression)->falselist,(yyvsp[(5) - (5)].expression)->falselist);
                                    printf("expr-->expr and expr\n");;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 321 "parser.y"
    {

                                    if((yyvsp[(2) - (2)].expression)->isEmitable){
                                      (yyvsp[(2) - (2)].expression)->truelist=makelist(nextquadlabel(),(yyvsp[(2) - (2)].expression)->truelist);
                                      (yyvsp[(2) - (2)].expression)->falselist=makelist(nextquadlabel()+1,(yyvsp[(2) - (2)].expression)->falselist);
                                      emit(if_eq,newexpr_constbool(1),(yyvsp[(2) - (2)].expression),NULL,-1,yylineno);
                                      emit(jump,NULL,NULL,NULL,-1,yylineno);
                                      (yyvsp[(2) - (2)].expression)->isEmitable=0;
                                    }

                                    swapLists((yyvsp[(2) - (2)].expression)->truelist,(yyvsp[(2) - (2)].expression)->falselist);
                                    (yyval.expression)=(yyvsp[(2) - (2)].expression);

                                    (yyval.expression)->passedByNot=1;

                                    (yyval.expression)->backpatch=1;

                                    printf("expr--> !expr\n");;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 340 "parser.y"
    {
                                      (yyval.expression)=newexpr(arithexpr_e);
                                      (yyval.expression)->sym=newtemp();
                                      emit(add,(yyvsp[(1) - (3)].expression),(yyvsp[(3) - (3)].expression),(yyval.expression),-1,yylineno);
                                      printf("expr-->expr + expr\n");;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 345 "parser.y"
    {
                                      (yyval.expression)=newexpr(arithexpr_e);
                                      (yyval.expression)->sym=newtemp();
                                      emit(sub,(yyvsp[(1) - (3)].expression),(yyvsp[(3) - (3)].expression),(yyval.expression),-1,yylineno);
                                      printf("expr-->expr - expr\n");;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 350 "parser.y"
    {
                                      (yyval.expression)=newexpr(arithexpr_e);
                                      (yyval.expression)->sym=newtemp();
                                      emit(mul,(yyvsp[(1) - (3)].expression),(yyvsp[(3) - (3)].expression),(yyval.expression),-1,yylineno);
                                      printf("expr-->expr * expr\n");;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 355 "parser.y"
    {
                                      (yyval.expression)=newexpr(arithexpr_e);
                                      (yyval.expression)->sym=newtemp();
                                      emit(divv,(yyvsp[(1) - (3)].expression),(yyvsp[(3) - (3)].expression),(yyval.expression),-1,yylineno);
                                      printf("expr-->expr / expr\n");;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 360 "parser.y"
    {
                                      (yyval.expression)=newexpr(arithexpr_e);
                                      (yyval.expression)->sym=newtemp();
                                      emit(mod,(yyvsp[(1) - (3)].expression),(yyvsp[(3) - (3)].expression),(yyval.expression),-1,yylineno);
                                      printf("expr-->expr % expr\n");;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 365 "parser.y"
    {;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 365 "parser.y"
    {
                              expr * arg1=(yyvsp[(1) - (4)].expression),*arg2=(yyvsp[(4) - (4)].expression);
                              if((yyvsp[(1) - (4)].expression)->passedByNot/*&&$1->isEmitable*/){

                                expr* t=newexpr(boolexpr_e),*t1=newexpr(boolexpr_e),*arg=newexpr(var_e);
                                t->type=constbool_e;
                                t->boolConst=1;
                                arg->type=var_e;
                                arg->sym=newtemp();
                                arg->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                                strcpy(arg->strConst,arg->sym->name);
                                backpatch((yyvsp[(1) - (4)].expression)->truelist,nextquadlabel());
                                emit(assign,t,NULL,arg,-1,yylineno);
                                emit(jump,NULL,NULL,NULL,nextquadlabel()+2,yylineno);

                                t1->boolConst=0;
                                t1->type=constbool_e;

                                backpatch((yyvsp[(1) - (4)].expression)->falselist,nextquadlabel());
                                emit(assign,t1,NULL,arg,-1,yylineno);

                                (yyvsp[(1) - (4)].expression)->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                                strcpy((yyvsp[(1) - (4)].expression)->strConst,arg->sym->name);

                                assignflag=0;
                                arg1=arg;
                                (yyvsp[(1) - (4)].expression)->truelist=NULL;
                                (yyvsp[(1) - (4)].expression)->falselist=NULL;
                                (yyvsp[(1) - (4)].expression)->isEmitable=0;
                              }
                              else if((yyvsp[(1) - (4)].expression)->backpatch&&!assignflag){
                                    expr* t=newexpr(boolexpr_e),*t1=newexpr(boolexpr_e),*arg=newexpr(var_e);
                                    t->type=constbool_e;
                                    t->boolConst=1;
                                    arg->type=var_e;
                                    arg->sym=newtemp();
                                    arg->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                                    strcpy(arg->strConst,arg->sym->name);

                                    backpatch((yyvsp[(1) - (4)].expression)->truelist,nextquadlabel());
                                    emit(assign,t,NULL,arg,-1,yylineno);
                                    emit(jump,NULL,NULL,NULL,nextquadlabel()+2,yylineno);
                                    t1->boolConst=0;
                                    t1->type=constbool_e;
                                    backpatch((yyvsp[(1) - (4)].expression)->falselist,nextquadlabel());
                                    emit(assign,t1,NULL,arg,-1,yylineno);
                                    assignflag=0;
                                    arg1=arg;
                                    (yyvsp[(1) - (4)].expression)->isEmitable=0;
                                    (yyvsp[(1) - (4)].expression)->truelist=NULL;
                                    (yyvsp[(1) - (4)].expression)->falselist=NULL;
                                    }

                                    if((yyvsp[(4) - (4)].expression)->passedByNot/*&&$4->isEmitable*/){
                                      expr* t=newexpr(boolexpr_e),*t1=newexpr(boolexpr_e),*arg=newexpr(var_e);
                                      t->type=constbool_e;
                                      t->boolConst=1;
                                      arg->type=var_e;
                                      arg->sym=newtemp();
                                      arg->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                                      strcpy(arg->strConst,arg->sym->name);

                                      backpatch((yyvsp[(4) - (4)].expression)->truelist,nextquadlabel());
                                      emit(assign,t,NULL,arg,-1,yylineno);
                                      emit(jump,NULL,NULL,NULL,nextquadlabel()+2,yylineno);

                                      t1->boolConst=0;
                                      t1->type=constbool_e;

                                      backpatch((yyvsp[(4) - (4)].expression)->falselist,nextquadlabel());
                                      emit(assign,t1,NULL,arg,-1,yylineno);


                                      (yyvsp[(4) - (4)].expression)->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                                      strcpy((yyvsp[(4) - (4)].expression)->strConst,arg->sym->name);

                                      assignflag=0;
                                      arg2=arg;
                                      (yyvsp[(4) - (4)].expression)->isEmitable=0;
                                      (yyvsp[(4) - (4)].expression)->truelist=NULL;
                                      (yyvsp[(4) - (4)].expression)->falselist=NULL;
                                    }
                                    else if((yyvsp[(4) - (4)].expression)->backpatch&&!assignflag){
                                          expr* t=newexpr(boolexpr_e),*t1=newexpr(boolexpr_e),*arg=newexpr(var_e);
                                          t->type=constbool_e;
                                          t->boolConst=1;
                                          arg->type=var_e;
                                          arg->sym=newtemp();
                                          arg->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                                          strcpy(arg->strConst,arg->sym->name);
                                          backpatch((yyvsp[(4) - (4)].expression)->truelist,nextquadlabel());
                                          emit(assign,t,NULL,arg,-1,yylineno);
                                          emit(jump,NULL,NULL,NULL,nextquadlabel()+2,yylineno);
                                          t1->boolConst=0;
                                          t1->type=constbool_e;
                                          backpatch((yyvsp[(4) - (4)].expression)->falselist,nextquadlabel());
                                          emit(assign,t1,NULL,arg,-1,yylineno);
                                          assignflag=0;
                                          arg1=arg;
                                          (yyvsp[(4) - (4)].expression)->isEmitable=0;
                                    }
                                  //  if(!$1->isEmitable&&!$4->isEmitable)
                                        (yyval.expression)->isEmitable=0;


                                    (yyval.expression)->isBoolean=1;
                                    (yyval.expression)->backpatch=1;
                                    (yyval.expression)->truelist=makelist(nextquadlabel(),(yyval.expression)->truelist);
                                    (yyval.expression)->falselist=makelist(nextquadlabel()+1,(yyval.expression)->falselist);

                                    emit(if_eq,arg1,arg2,NULL,0,yylineno);
                                    emit(jump,NULL,NULL,NULL,-1,yylineno);

                                    printf("expr-->expr == expr\n");;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 479 "parser.y"
    {;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 479 "parser.y"
    {


                              expr * arg1=(yyvsp[(1) - (4)].expression),*arg2=(yyvsp[(4) - (4)].expression);
                              if((yyvsp[(1) - (4)].expression)->passedByNot){
                              //  if($1->isEmitable){
                                  expr* t=newexpr(boolexpr_e),*t1=newexpr(boolexpr_e),*arg=newexpr(var_e);
                                  t->type=constbool_e;
                                  t->boolConst=1;
                                  arg->type=var_e;
                                  arg->sym=newtemp();
                                  arg->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                                  strcpy(arg->strConst,arg->sym->name);
                                  backpatch((yyvsp[(1) - (4)].expression)->truelist,nextquadlabel());
                                  emit(assign,t,NULL,arg,-1,yylineno);
                                  emit(jump,NULL,NULL,NULL,nextquadlabel()+2,yylineno);

                                  t1->boolConst=0;
                                  t1->type=constbool_e;

                                  backpatch((yyvsp[(1) - (4)].expression)->falselist,nextquadlabel());
                                  emit(assign,t1,NULL,arg,-1,yylineno);

                                  (yyvsp[(1) - (4)].expression)->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                                  strcpy((yyvsp[(1) - (4)].expression)->strConst,arg->sym->name);

                                  assignflag=0;
                                  arg1=arg;
                                  (yyvsp[(1) - (4)].expression)->truelist=NULL;
                                  (yyvsp[(1) - (4)].expression)->falselist=NULL;
                                  (yyvsp[(1) - (4)].expression)->isEmitable=0;
                              //  }
                              }
                              else if((yyvsp[(1) - (4)].expression)->backpatch&&!assignflag){
                                    expr* t=newexpr(boolexpr_e),*t1=newexpr(boolexpr_e),*arg=newexpr(var_e);
                                    t->type=constbool_e;
                                    t->boolConst=1;
                                    arg->type=var_e;
                                    arg->sym=newtemp();
                                    arg->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                                    strcpy(arg->strConst,arg->sym->name);

                                    backpatch((yyvsp[(1) - (4)].expression)->truelist,nextquadlabel());
                                    emit(assign,t,NULL,arg,-1,yylineno);
                                    emit(jump,NULL,NULL,NULL,nextquadlabel()+2,yylineno);
                                    t1->boolConst=0;
                                    t1->type=constbool_e;
                                    backpatch((yyvsp[(1) - (4)].expression)->falselist,nextquadlabel());
                                    emit(assign,t1,NULL,arg,-1,yylineno);
                                    assignflag=0;
                                    arg1=arg;
                                    (yyvsp[(1) - (4)].expression)->truelist=NULL;
                                    (yyvsp[(1) - (4)].expression)->falselist=NULL;
                                    (yyvsp[(1) - (4)].expression)->isEmitable=0;
                                    }

                                    if((yyvsp[(4) - (4)].expression)->passedByNot){

                                    //  if($4->isEmitable){
                                        expr* t=newexpr(boolexpr_e),*t1=newexpr(boolexpr_e),*arg=newexpr(var_e);
                                        t->type=constbool_e;
                                        t->boolConst=1;
                                        arg->type=var_e;
                                        arg->sym=newtemp();
                                        arg->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                                        strcpy(arg->strConst,arg->sym->name);

                                        backpatch((yyvsp[(4) - (4)].expression)->truelist,nextquadlabel());
                                        emit(assign,t,NULL,arg,-1,yylineno);
                                        emit(jump,NULL,NULL,NULL,nextquadlabel()+2,yylineno);

                                        t1->boolConst=0;
                                        t1->type=constbool_e;

                                        backpatch((yyvsp[(4) - (4)].expression)->falselist,nextquadlabel());
                                        emit(assign,t1,NULL,arg,-1,yylineno);


                                        (yyvsp[(4) - (4)].expression)->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                                        strcpy((yyvsp[(4) - (4)].expression)->strConst,arg->sym->name);

                                        assignflag=0;
                                        arg2=arg;
                                        (yyvsp[(4) - (4)].expression)->truelist=NULL;
                                        (yyvsp[(4) - (4)].expression)->falselist=NULL;
                                        (yyvsp[(4) - (4)].expression)->isEmitable=0;
                                    //  }
                                    }
                                    else if((yyvsp[(4) - (4)].expression)->backpatch&&!assignflag){
                                          expr* t=newexpr(boolexpr_e),*t1=newexpr(boolexpr_e),*arg=newexpr(var_e);
                                          t->type=constbool_e;
                                          t->boolConst=1;
                                          arg->type=var_e;
                                          arg->sym=newtemp();
                                          arg->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                                          strcpy(arg->strConst,arg->sym->name);
                                          backpatch((yyvsp[(4) - (4)].expression)->truelist,nextquadlabel());
                                          emit(assign,t,NULL,arg,-1,yylineno);
                                          emit(jump,NULL,NULL,NULL,nextquadlabel()+2,yylineno);
                                          t1->boolConst=0;
                                          t1->type=constbool_e;
                                          backpatch((yyvsp[(4) - (4)].expression)->falselist,nextquadlabel());
                                          emit(assign,t1,NULL,arg,-1,yylineno);
                                          assignflag=0;
                                          arg1=arg;
                                          (yyvsp[(4) - (4)].expression)->isEmitable=0;
                                    }

                                //    if(!$1->isEmitable&&!$4->isEmitable)
                                        (yyval.expression)->isEmitable=0;

                                    (yyval.expression)->isBoolean=1;
                                    (yyval.expression)->backpatch=1;
                                    (yyval.expression)->truelist=makelist(nextquadlabel(),(yyval.expression)->truelist);
                                    (yyval.expression)->falselist=makelist(nextquadlabel()+1,(yyval.expression)->falselist);

                                    emit(if_noteq,arg1,arg2,NULL,0,yylineno);
                                    emit(jump,NULL,NULL,NULL,-1,yylineno);
                                    printf("expr-->expr != expr\n");;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 599 "parser.y"
    {
                                    (yyval.expression)->isBoolean=1;
                                    (yyval.expression)->backpatch=1;
                                    (yyval.expression)->truelist=makelist(nextquadlabel(),(yyval.expression)->truelist);
                                    (yyval.expression)->falselist=makelist(nextquadlabel()+1,(yyval.expression)->falselist);
                                    emit(if_greater,(yyvsp[(1) - (3)].expression),(yyvsp[(3) - (3)].expression),NULL,0,yylineno);
                                    emit(jump,NULL,NULL,NULL,-1,yylineno);
                                    printf("expr-->expr > expr\n");;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 607 "parser.y"
    {
                                    (yyval.expression)->isBoolean=1;
                                    (yyval.expression)->backpatch=1;
                                    (yyval.expression)->truelist=makelist(nextquadlabel(),(yyval.expression)->truelist);
                                    (yyval.expression)->falselist=makelist(nextquadlabel()+1,(yyval.expression)->falselist);
                                    emit(if_less,(yyvsp[(1) - (3)].expression),(yyvsp[(3) - (3)].expression),NULL,-1,yylineno);
                                    emit(jump,NULL,NULL,NULL,-1,yylineno);


                                    printf("expr-->expr < expr\n");;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 617 "parser.y"
    {
                                    (yyval.expression)->isBoolean=1;
                                    (yyval.expression)->backpatch=1;
                                    (yyval.expression)->truelist=makelist(nextquadlabel(),(yyval.expression)->truelist);
                                    (yyval.expression)->falselist=makelist(nextquadlabel()+1,(yyval.expression)->falselist);
                                    emit(if_geatereq,(yyvsp[(1) - (3)].expression),(yyvsp[(3) - (3)].expression),NULL,-1,yylineno);
                                    emit(jump,NULL,NULL,NULL,-1,yylineno);
                                    printf("expr-->expr >= expr\n");;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 626 "parser.y"
    {
                                    (yyval.expression)->isBoolean=1;
                                    (yyval.expression)->backpatch=1;
                                    (yyval.expression)->truelist=makelist(nextquadlabel(),(yyval.expression)->truelist);
                                    (yyval.expression)->falselist=makelist(nextquadlabel()+1,(yyval.expression)->falselist);
                                    emit(if_lesseq,(yyvsp[(1) - (3)].expression),(yyvsp[(3) - (3)].expression),NULL,-1,yylineno);
                                    emit(jump,NULL,NULL,NULL,-1,yylineno);
                                    printf("expr-->expr <= expr\n");;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 635 "parser.y"
    {
                                    (yyval.expression)=(yyvsp[(1) - (1)].expression);

                                    printf("expr-->term\n");;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 641 "parser.y"
    {(yyval.intValue)=nextquadlabel();;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 646 "parser.y"
    {
              if (!arrayFlag)
                  if (isFunction(yylval.stringValue))
                    printf("ERROR: In Line %d  Can not assign any value to %s cause its a function\n",yylineno, yylval.stringValue);

              arrayFlag=0;
;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 653 "parser.y"
    {
                                      expr* tmp_expr=(yyvsp[(4) - (4)].expression);
                                      if((yyvsp[(1) - (4)].expression)->type==tableitem_e){
                                          emit(tablesetelem,(yyvsp[(1) - (4)].expression)->index,(yyvsp[(4) - (4)].expression),(yyvsp[(1) - (4)].expression),-1,yylineno);
                                          (yyval.expression)=emit_iftableitem((yyvsp[(1) - (4)].expression),yylineno);
                                          (yyval.expression)->type=assignexpr_e;
                                          if((yyvsp[(4) - (4)].expression)->backpatch){
                                              expr* t=newexpr(boolexpr_e),*t1=newexpr(boolexpr_e),*arg=newexpr(var_e);
                                              t->type=constbool_e;
                                              t->boolConst=1;
                                              arg->type=var_e;
                                              arg->sym=newtemp();
                                              arg->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                                              strcpy(arg->strConst,arg->sym->name);

                                              backpatch((yyvsp[(4) - (4)].expression)->truelist,nextquadlabel());
                                              emit(assign,t,NULL,arg,-1,yylineno);
                                              emit(jump,NULL,NULL,NULL,nextquadlabel()+2,yylineno);

                                              t1->boolConst=0;
                                              t1->type=constbool_e;

                                              backpatch((yyvsp[(4) - (4)].expression)->falselist,nextquadlabel());
                                              emit(assign,t1,NULL,arg,-1,yylineno);
                                              tmp_expr=arg;
                                              assignflag=0;

                                            }
                                      }else{
                                      if((yyvsp[(4) - (4)].expression)->backpatch){
                                          expr* t=newexpr(boolexpr_e),*t1=newexpr(boolexpr_e),*arg=newexpr(var_e);
                                          t->type=constbool_e;
                                          t->boolConst=1;
                                          arg->type=var_e;
                                          arg->sym=newtemp();
                                          arg->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                                          strcpy(arg->strConst,arg->sym->name);

                                          backpatch((yyvsp[(4) - (4)].expression)->truelist,nextquadlabel());
                                          emit(assign,t,NULL,arg,-1,yylineno);
                                          emit(jump,NULL,NULL,NULL,nextquadlabel()+2,yylineno);

                                          t1->boolConst=0;
                                          t1->type=constbool_e;

                                          backpatch((yyvsp[(4) - (4)].expression)->falselist,nextquadlabel());
                                          emit(assign,t1,NULL,arg,-1,yylineno);
                                          tmp_expr=arg;
                                          assignflag=0;

                                        }

                                          (yyval.expression)=(yyvsp[(4) - (4)].expression);

                                            emit(assign,tmp_expr,NULL,(yyvsp[(1) - (4)].expression),-1,yylineno);//na check
                                            (yyval.expression)=newexpr(assignexpr_e);
                                            (yyval.expression)->sym=newtemp();
                                            (yyval.expression)->strConst=malloc(sizeof(strlen((yyval.expression)->sym->name))+1);
                                            strcpy((yyval.expression)->strConst,(yyval.expression)->sym->name);
                                            (yyval.expression)->type=var_e;
                                            emit(assign,(yyvsp[(1) - (4)].expression),NULL,(yyval.expression),-1,yylineno);

                                      }

                                  printf("assignexpr-->lvalue = expr\n");;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 721 "parser.y"
    {(yyval.expression)=(yyvsp[(2) - (3)].expression);(yyval.expression)->passedByPar=1;printf("term-->(expr)\n");;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 722 "parser.y"
    {

                  if(check_arithmetic((yyvsp[(2) - (2)].expression))){
                      (yyval.expression)=newexpr(arithexpr_e);
                      (yyval.expression)->sym=newtemp();
                      emit(uminus,(yyvsp[(2) - (2)].expression),NULL,(yyval.expression),-1,yylineno);
                      }


                  printf("term--> -expr\n");;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 733 "parser.y"
    {

               if(check_arithmetic((yyvsp[(2) - (2)].expression))){
                    if((yyvsp[(2) - (2)].expression)->type==tableitem_e){
                      (yyval.expression)=emit_iftableitem((yyvsp[(2) - (2)].expression),yylineno);
                      emit(add,(yyval.expression),newexpr_constint(1),(yyval.expression),-1,yylineno);
                      emit(tablesetelem,(yyvsp[(2) - (2)].expression)->index,(yyval.expression),(yyvsp[(2) - (2)].expression),-1,yylineno);
                    }else{
                      emit(add,newexpr_constint(1),(yyvsp[(2) - (2)].expression),(yyvsp[(2) - (2)].expression),-1,yylineno);
                      (yyval.expression)=newexpr(arithexpr_e);
                      (yyval.expression)->sym=newtemp();
                      emit(assign,(yyvsp[(2) - (2)].expression),NULL,(yyval.expression),-1,yylineno);
                    }
                }

                printf("term--> ++lvalue\n");
              if (isFunction(yylval.stringValue))
                printf("ERROR: In Line %d  Can not increment  %s,its a function\n",yylineno, yylval.stringValue); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 751 "parser.y"
    {

                if(check_arithmetic((yyvsp[(1) - (2)].expression))){
                (yyval.expression)=newexpr(var_e);
                (yyval.expression)->sym=newtemp();
                if((yyvsp[(1) - (2)].expression)->type==tableitem_e){
                    expr* val=emit_iftableitem((yyvsp[(1) - (2)].expression),yylineno);
                    emit(assign,val,NULL,(yyval.expression),-1,yylineno);
                    emit(add,val,newexpr_constint(1),val,-1,yylineno);
                    emit(tablesetelem,(yyvsp[(1) - (2)].expression)->index,val,(yyvsp[(1) - (2)].expression),-1,yylineno);
                }else{
                    emit(assign,(yyvsp[(1) - (2)].expression),NULL,(yyval.expression),-1,yylineno);
                    emit(add,(yyvsp[(1) - (2)].expression),newexpr_constint(1),(yyvsp[(1) - (2)].expression),-1,yylineno);
                }
                }

                printf("term--> lvalue++\n");
          if (isFunction(yylval.stringValue))
            printf("ERROR: In Line %d  Can not increment  %s,its a function\n",yylineno, yylval.stringValue); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 770 "parser.y"
    {

                  if(check_arithmetic((yyvsp[(2) - (2)].expression))){
                      if((yyvsp[(2) - (2)].expression)->type==tableitem_e){
                        (yyval.expression)=emit_iftableitem((yyvsp[(2) - (2)].expression),yylineno);
                        emit(sub,(yyval.expression),newexpr_constint(1),(yyval.expression),-1,yylineno);
                        emit(tablesetelem,(yyvsp[(2) - (2)].expression)->index,(yyval.expression),(yyvsp[(2) - (2)].expression),-1,yylineno);
                      }else{
                        emit(sub,(yyvsp[(2) - (2)].expression),newexpr_constint(1),(yyvsp[(2) - (2)].expression),-1,yylineno);
                        (yyval.expression)=newexpr(arithexpr_e);
                        (yyval.expression)->sym=newtemp();
                        emit(assign,(yyvsp[(2) - (2)].expression),NULL,(yyval.expression),-1,yylineno);
                      }
                  }

                    printf("term--> --lvalue\n");
          if (isFunction(yylval.stringValue))
            printf("ERROR: In Line %d  Can not decrement  %s,its a function\n",yylineno, yylval.stringValue); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 788 "parser.y"
    {

                  if(check_arithmetic((yyvsp[(1) - (2)].expression))){
                  (yyval.expression)=newexpr(var_e);
                  (yyval.expression)->sym=newtemp();
                  if((yyvsp[(1) - (2)].expression)->type==tableitem_e){
                      expr* val=emit_iftableitem((yyvsp[(1) - (2)].expression),yylineno);
                      emit(assign,val,NULL,(yyval.expression),-1,yylineno);
                      emit(sub,val,newexpr_constint(1),val,-1,yylineno);
                      emit(tablesetelem,(yyvsp[(1) - (2)].expression)->index,val,(yyvsp[(1) - (2)].expression),-1,yylineno);
                  }else{
                      emit(assign,(yyvsp[(1) - (2)].expression),NULL,(yyval.expression),-1,yylineno);
                      emit(sub,(yyvsp[(1) - (2)].expression),newexpr_constint(1),(yyvsp[(1) - (2)].expression),-1,yylineno);
                  }
                  }

                    printf("term--> lvalue--\n");
                  if (isFunction(yylval.stringValue))
                    printf("ERROR: In Line %d  Can not decrement  %s,its a function\n",yylineno, yylval.stringValue); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 807 "parser.y"
    {
                (yyval.expression)=(yyvsp[(1) - (1)].expression);
              //  printf("%p\n",$1);
                printf("term--> primary\n");;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 813 "parser.y"
    {

                    (yyval.expression)=emit_iftableitem((yyvsp[(1) - (1)].expression),yylineno);

                    printf("primary--> lvalue\n");;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 818 "parser.y"
    {(yyval.expression)=(yyvsp[(1) - (1)].expression);printf("primary--> call\n");;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 819 "parser.y"
    {(yyval.expression)=(yyvsp[(1) - (1)].expression);printf("primary--> objectdef\n");;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 820 "parser.y"
    {
                (yyval.expression)=(yyvsp[(2) - (3)].expression);
                printf("primary--> ( funcdef )\n");;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 823 "parser.y"
    {(yyval.expression)=(yyvsp[(1) - (1)].expression);printf("primary--> const\n");;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 826 "parser.y"
    {(yyval.expression)=newexpr_constint(yylval.intValue);printf("const--> NUMBER\n");;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 827 "parser.y"
    {(yyval.expression)=newexpr_constdouble(yylval.realValue);printf("const--> REAL_NUMBER\n");;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 828 "parser.y"
    {(yyval.expression)=newexpr_conststring(yylval.stringValue);printf("const--> STRING\n");;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 829 "parser.y"
    {(yyval.expression)=newexpr_constbool(1);printf("const--> TRUE\n");;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 830 "parser.y"
    {(yyval.expression)=newexpr_constbool(0);printf("const--> FALSE\n");;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 831 "parser.y"
    {(yyval.expression)=newexpr(nil_e);printf("const--> NIL\n");;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 834 "parser.y"
    {

                    int tempScope=scope;
                    node* tempNode=NULL;
                    while (tempScope>-1){
                    //printf("%s inside while\n",yytext);
                      if((tempNode=scopeLookup(tempScope,yytext))!=NULL) {
                        //printf("%s inside if1\n",yytext);
                          (yyval.expression)=lvalue_expr(tempNode);

                          IDfoundFlag=1;
                          //printf("tempScope: %d tempNode->scope :%d\n",tempScope,tempNode->scope);
                          tempScope=tempNode->scope;
                          if((tempScope!=0)&&(!isFunction(tempNode->name))){
                          //  printf("%s inside if2\n",yytext);
                              /*if a function intervenes*/
                              //printf("scope: %d %d\n",tempScope,scope-1);
                              if(intervenesFunction(tempScope,scope-1))
                                  printf("ERROR: In Line %d Can not access %s\n",yylineno,yylval.stringValue);
                              else{if(tempNode->space==formalarg){
                                        if (scope == 0){
                                          tempNode=insert(yytext, GLOBAL, yylineno, scope);
                                          tempNode->offset=currscopeoffset();
                                          tempNode->space=currscopespace();
                                          (yyval.expression)=lvalue_expr(tempNode);
                                        }
                                        else{
                                          tempNode=insert(yytext, LOCL, yylineno, scope);
                                          tempNode->offset=currscopeoffset();
                                          tempNode->space=currscopespace();
                                          (yyval.expression)=lvalue_expr(tempNode);
                                        }
                                      }
                                  }
                          }

                            break;
                        }
                      tempScope--;
                      }
                      /*if ID wasnt found*/
                      if (!IDfoundFlag){

                        if (scope == 0){

                            tempNode=insert(yytext, GLOBAL, yylineno, scope);
                            tempNode->offset=currscopeoffset();
                            tempNode->space=currscopespace();
                            (yyval.expression)=lvalue_expr(tempNode);
                        }
                        else{
                            tempNode=insert(yytext, LOCL, yylineno, scope);
                            tempNode->offset=currscopeoffset();
                            tempNode->space=currscopespace();
                            (yyval.expression)=lvalue_expr(tempNode);
                        }

                        inccurrescopeoffset();

                      }
                      IDfoundFlag=0;
                      printf("lvalue--> ID\n");
                    ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 899 "parser.y"
    {printf("lvalue--> local ID\n");
                      node* tempNode=scopeLookup(scope,yytext);
                      if (tempNode==NULL&&!checkIfLibFunc(yytext)){
                          if (scope==0){
                            tempNode=insert(strdup(yytext),GLOBAL, yylineno, scope);
                            tempNode->offset=currscopeoffset();
                            tempNode->space=currscopespace();
                          }
                          else{
                              tempNode= insert(strdup(yytext),LOCL, yylineno, scope);
                              tempNode->offset=currscopeoffset();
                              tempNode->space=currscopespace();
                              }
                          inccurrescopeoffset();
                      }else {
                        if (checkIfLibFunc(yytext)){
                        printf("ERROR: In Line %d  %s Shadows a Library Function!\n",yylineno, yytext); }
                      }

                      (yyval.expression)=lvalue_expr(tempNode);

          					;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 923 "parser.y"
    {printf("lvalue-->:: ID\n");
              node* tempNode=scopeLookup(0,yytext);
                if(tempNode== NULL){
                  printf("ERROR: In Line %d  There is no global var with the name %s\n",yylineno, yytext);
                }else (yyval.expression)=lvalue_expr(tempNode);

              ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 930 "parser.y"
    {(yyval.expression)=(yyvsp[(1) - (1)].expression);printf("lvalue--> member\n");;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 933 "parser.y"
    {
                    (yyval.expression)=member_item((yyvsp[(1) - (3)].expression),yylval.stringValue,yylineno);//ID.name
                    printf("member--> lvalue . ID\n");;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 936 "parser.y"
    {
                    (yyvsp[(1) - (4)].expression) =emit_iftableitem((yyvsp[(1) - (4)].expression),yylineno);
                    (yyval.expression)=newexpr(tableitem_e);
                    (yyval.expression)->sym=(yyvsp[(1) - (4)].expression)->sym;
                    (yyval.expression)->index=(yyvsp[(3) - (4)].expression);
                    arrayFlag = 1;printf("member--> lvalue [ expr ] ID\n");;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 942 "parser.y"
    {(yyval.expression)=(yyvsp[(1) - (3)].expression);
                          if ((yyval.expression)) {
                          (yyval.expression)->type=tableitem_e;
                          (yyval.expression)->index=newexpr_conststring(yylval.stringValue);
                          }
                          printf("member--> call . ID\n");;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 948 "parser.y"
    {
                      (yyval.expression)=(yyvsp[(1) - (4)].expression);
                      if ((yyval.expression)) {
                      (yyval.expression)->type=tableitem_e;
                      (yyval.expression)->index=(yyvsp[(3) - (4)].expression);
                      }
                      arrayFlag = 1;
                      printf("member--> call [ expr ]\n");
                      ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 960 "parser.y"
    {
                  (yyval.expression)=make_call((yyvsp[(1) - (4)].expression),(yyvsp[(3) - (4)].expression),yylineno);//$1
                  printf("call--> call ( elist ) \n");;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 963 "parser.y"
    {
                  if((yyvsp[(2) - (2)].call)->method){
                      expr* self=(yyvsp[(1) - (2)].expression);
                      (yyvsp[(1) - (2)].expression)=emit_iftableitem(member_item(self,(yyvsp[(2) - (2)].call)->name,yylineno),yylineno);
                      expr* temp=(yyvsp[(2) - (2)].call)->elist;
                      if(temp){
                      while(temp->next) temp=temp->next;
                      temp->next=self;
                      }else (yyvsp[(2) - (2)].call)->elist=self;

                  }

                  (yyval.expression)=make_call((yyvsp[(1) - (2)].expression),(yyvsp[(2) - (2)].call)->elist,yylineno);
                  printf("call--> lvalue callsuffix\n");;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 977 "parser.y"
    {

                  expr* func =(yyvsp[(2) - (6)].expression);
                  func->sym=(yyvsp[(2) - (6)].expression)->sym;
                  (yyval.expression)=make_call(func,(yyvsp[(5) - (6)].expression),yylineno);

                  printf("call--> ( funcdef ) ( elist )\n");;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 986 "parser.y"
    {
                  (yyval.call)=(yyvsp[(1) - (1)].call);
                  printf("callsuffix--> normcall \n");;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 989 "parser.y"
    {
                  (yyval.call)=(yyvsp[(1) - (1)].call);
                  printf("callsuffix--> methodcall \n");;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 994 "parser.y"
    {
                    (yyval.call)=malloc(sizeof(struct call));
                    (yyval.call)->elist=(yyvsp[(2) - (3)].expression);
                    (yyval.call)->method=0;
                    (yyval.call)->name=NULL;

                    printf("normcall-->( elist )\n");;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 1003 "parser.y"
    {
                tempName=yylval.stringValue;
                ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 1005 "parser.y"
    {
                  (yyval.call)=malloc(sizeof(struct call));
                  (yyval.call)->elist=(yyvsp[(5) - (6)].expression);
                  (yyval.call)->method=1;
                  (yyval.call)->name=tempName;
                  printf("methodcall--> .. ID( elist )\n");;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 1013 "parser.y"
    {
                  if((yyvsp[(1) - (2)].expression)->backpatch){
                     expr* t=newexpr(boolexpr_e),*t1=newexpr(boolexpr_e),*arg=newexpr(var_e);
                     t->type=constbool_e;
                     t->boolConst=1;
                     arg->type=var_e;
                     arg->sym=newtemp();
                     arg->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                     strcpy(arg->strConst,arg->sym->name);
                     backpatch((yyvsp[(1) - (2)].expression)->truelist,nextquadlabel());

                     emit(assign,t,NULL,arg,-1,yylineno);

                     emit(jump,NULL,NULL,NULL,nextquadlabel()+2,yylineno);
                     t1->boolConst=0;
                     t1->type=constbool_e;

                     backpatch((yyvsp[(1) - (2)].expression)->falselist,nextquadlabel());
                     emit(assign,t1,NULL,arg,-1,yylineno);


                     assignflag=0;

                     (yyvsp[(1) - (2)].expression)=arg;}
                (yyval.expression)=(yyvsp[(1) - (2)].expression);
                (yyval.expression)->next=(yyvsp[(2) - (2)].expression);
                printf("elist-->expr cexprs\n");;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 1040 "parser.y"
    {
                (yyval.expression)=NULL;
                printf("elist-->empty\n");;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 1045 "parser.y"
    {
                if((yyvsp[(2) - (3)].expression)->backpatch){
                     expr* t=newexpr(boolexpr_e),*t1=newexpr(boolexpr_e),*arg=newexpr(var_e);
                     t->type=constbool_e;
                     t->boolConst=1;
                     arg->type=var_e;
                     arg->sym=newtemp();
                     arg->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                     strcpy(arg->strConst,arg->sym->name);
                     backpatch((yyvsp[(2) - (3)].expression)->truelist,nextquadlabel());

                     emit(assign,t,NULL,arg,-1,yylineno);

                     emit(jump,NULL,NULL,NULL,nextquadlabel()+2,yylineno);
                     t1->boolConst=0;
                     t1->type=constbool_e;

                     backpatch((yyvsp[(2) - (3)].expression)->falselist,nextquadlabel());
                     emit(assign,t1,NULL,arg,-1,yylineno);


                     assignflag=0;

                     (yyvsp[(2) - (3)].expression)=arg;}
                  (yyval.expression)=(yyvsp[(2) - (3)].expression);
                  (yyval.expression)->next=(yyvsp[(3) - (3)].expression);
                  printf("cexprs--> , expr cexprs\n");;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 1072 "parser.y"
    {
                 (yyval.expression)=NULL;
                  printf("cexprs-->empty\n");;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 1078 "parser.y"
    {

                expr* t=newexpr(newtable_e);
                t->sym =newtemp();
                emit(tablecreate,NULL,NULL,t,-1,yylineno);
                int i=0;
                while((yyvsp[(2) - (3)].expression)){
                    emit(tablesetelem,newexpr_constint(i++),(yyvsp[(2) - (3)].expression),t,-1,yylineno);
                    (yyvsp[(2) - (3)].expression)=(yyvsp[(2) - (3)].expression)->next;
                }
                (yyval.expression)=t;
                printf("objectdef-->[ elist ]\n");;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 1090 "parser.y"
    {

                expr* t=newexpr(newtable_e);
                t->sym =newtemp();
                emit(tablecreate,NULL,NULL,t,-1,yylineno);
                while((yyvsp[(2) - (3)].expression)){
                    emit(tablesetelem,(yyvsp[(2) - (3)].expression)->index,(yyvsp[(2) - (3)].expression)->value,t,-1,yylineno);
                    (yyvsp[(2) - (3)].expression)=(yyvsp[(2) - (3)].expression)->next;
                }
                (yyval.expression)=t;

                printf("objectdef-->[ indexed ]\n");;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 1104 "parser.y"
    {
                (yyval.expression)=(yyvsp[(1) - (2)].expression);
                (yyval.expression)->next=(yyvsp[(2) - (2)].expression);
                printf("indexed-->indexedelem clindexedelem\n");;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 1110 "parser.y"
    {
                    (yyval.expression)=(yyvsp[(2) - (3)].expression);
                    (yyval.expression)->next=(yyvsp[(3) - (3)].expression);
                    printf("clindexedelem-->, indexedelem clindexedelem\n");;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 1114 "parser.y"
    {
                (yyval.expression)=NULL;
                printf("clindexedelem-->empty\n");;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 1119 "parser.y"
    {
                (yyval.expression)=(yyvsp[(4) - (5)].expression);
                (yyval.expression)->value=(yyvsp[(4) - (5)].expression);
                (yyval.expression)->index=(yyvsp[(2) - (5)].expression);
                printf("indexedelem-->{expr : expr }\n");;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 1126 "parser.y"
    {(yyval.expression)=malloc(sizeof(expr));printf("block-->{}\n");;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 1127 "parser.y"
    {scope++;;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1127 "parser.y"
    {
            //    printf("$$ %p\n",$$);
            //    printf("$3 %p\n",$3);
            //    printf("$4 %p\n",$4);
                (yyval.expression)=malloc(sizeof(expr));
            if((yyvsp[(3) - (5)].expression)&&(yyvsp[(4) - (5)].expression)){
          //    printf("%p %p\n",$3->breaklist,$4->breaklist);
              (yyval.expression)->breaklist=merge((yyvsp[(3) - (5)].expression)->breaklist,(yyvsp[(4) - (5)].expression)->breaklist);
              (yyval.expression)->continuelist=merge((yyvsp[(3) - (5)].expression)->continuelist,(yyvsp[(4) - (5)].expression)->continuelist);
          //    printf("d %p \n",$$);
            }else {
                    if((yyvsp[(4) - (5)].expression))(yyval.expression)=(yyvsp[(4) - (5)].expression);
                    else if((yyvsp[(3) - (5)].expression))(yyval.expression)=(yyvsp[(3) - (5)].expression);
                  }

        //    printf("$$ %p\n",$$);
        //    printf("$3 %p\n",$3);
        //    printf("$4 %p\n",$4);
            printf("block-->{ stmt }\n");

            hide(scope);

            scope--;;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 1152 "parser.y"
    {
              char *newName=malloc(sizeof(char)*15);
              strcpy(newName,"_f");
              char str[12];
              int i=0;
              for(i=0;i<12;i++)
              str[i]='\0';
              sprintf(str, "%d", anonFuncCount);
              strcat(newName,str);
              anonFuncCount++;

              currentFunction=insert(newName,USERFUNC,yylineno,scope);
              currentFunction->iaddress=nextquadlabel()+2;
              currentFunction->newType=programfunc_s;
              jump_push(nextquadlabel());
              emit(jump,NULL,NULL,NULL,-1,yylineno);
              emit(funcstart,NULL,NULL,lvalue_expr(currentFunction),-1,yylineno);
              retlist * ptr=NULL;
              retPush(ptr);
              func_push(currentFunction);
              offset_push(currscopeoffset());
              enterscopespace();
              resetformalargoffset();
              //tempsymnode=currentFunction;
              //tempNodeForFunctionLocals=currentFunction;
              //printf("\n\n%d\n\n",functionLocalOffset);
              //tempNodeForFunctionLocals->localSize=-1*functionLocalOffset;//new

              ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 1180 "parser.y"
    {scope++;;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1182 "parser.y"
    {;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1182 "parser.y"
    {scope--;enterscopespace();resetfunctionlocalsoffset();;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1183 "parser.y"
    {
                      exitscopespace();
                      //if (returnPatch!=-1) patchlabel(returnPatch,nextquadlabel());
                      if(topS()!=NULL){
                        retlist * tmp=retPop();
                        while(tmp!=NULL){
                          patchlabel(tmp->label,nextquadlabel());
                           tmp=tmp->next;
                        }
                      }
                      tempNodeForFunctionLocals=func_pop();
                      emit(funcend,NULL,NULL,lvalue_expr(tempNodeForFunctionLocals),-1,yylineno);
                      patchlabel(jump_pop(),nextquadlabel());
                      printf("funcdef-->function( idlist ) block \n");
                      ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 1198 "parser.y"
    {

                      exitscopespace();
                      tempNodeForFunctionLocals->localSize=functionLocalOffset;
                      printf("\n\n%s %d\n\n",tempNodeForFunctionLocals->name,functionLocalOffset);
                      restorecurrscopeoffset(offset_pop());
                      (yyval.expression)=newexpr(programmfunc_e);
                      (yyval.expression)->sym=tempNodeForFunctionLocals;

                      ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 1210 "parser.y"
    {
                    if(scopeLookup(scope,yytext)!=NULL){
                        printf("ERROR: at line %d, %s collides with other function or variable\n",yylineno,yytext);
                    }
                    else if(checkIfLibFunc(yytext)){
                            printf("ERROR: at line %d, %s collides with library function\n",yylineno,yytext);
                    }else if(argLookup(yytext)){
                              printf("ERROR: at line %d,cant use %s as a function name\n",yylineno,yytext);
                    }
                  currentFunction=NULL;

                  currentFunction=insert(yytext,USERFUNC,yylineno,scope);

                  currentFunction->iaddress=nextquadlabel()+2;

                  currentFunction->newType=programfunc_s;
                  retlist * ptr=NULL;
                  retPush(ptr);
                  jump_push(nextquadlabel());

                  emit(jump,NULL,NULL,NULL,-1,yylineno);
                  emit(funcstart,NULL,NULL,lvalue_expr(currentFunction),-1,yylineno);

                  func_push(currentFunction);

                  offset_push(currscopeoffset());

                  enterscopespace();
                  resetformalargoffset();
                  //tempsymnode=currentFunction;
                  //tempNodeForFunctionLocals=currentFunction;
                  //tempNodeForFunctionLocals->localSize=-1*functionLocalOffset;//new
                  ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 1242 "parser.y"
    {scope++;;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 1243 "parser.y"
    {scope--;enterscopespace();resetfunctionlocalsoffset();;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1244 "parser.y"
    {
                         if(topS()!=NULL){
                           retlist * tmp=retPop();
                           while(tmp!=NULL){
                             patchlabel(tmp->label,nextquadlabel());
                              tmp=tmp->next;
                           }
                         }
                          tempNodeForFunctionLocals=func_pop();
                          emit(funcend,NULL,NULL,lvalue_expr(tempNodeForFunctionLocals),-1,yylineno);
                          patchlabel(jump_pop(),nextquadlabel());
                          exitscopespace();
                          printf("funcdef-->function ID( idlist ) block \n");
                          ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 1258 "parser.y"
    {
                          tempNodeForFunctionLocals->localSize=functionLocalOffset;
                          printf("\n\n%s\t%d\n\n",tempNodeForFunctionLocals->name,tempNodeForFunctionLocals->localSize);
                          exitscopespace();
                          restorecurrscopeoffset(offset_pop());
                          (yyval.expression)=newexpr(programmfunc_e);
                          (yyval.expression)->sym=tempNodeForFunctionLocals;
                          ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1268 "parser.y"
    {loop_push(loopcounter);
                loopcounter=0;
               ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 1273 "parser.y"
    {loopcounter=loop_pop();
             ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 1278 "parser.y"
    {if(scopeLookup(scope,yytext)!=NULL){
                printf("ERROR: invalid name in line %d\n",yylineno);
             }
             else if(checkIfLibFunc(yytext))
                printf("ERROR: collision with library function in line %d\n",yylineno);
             if(currentFunction!=NULL){ insertArguments(currentFunction,yytext)->offset=currscopeoffset();inccurrescopeoffset();}
             else {
                    insert(yytext,FORMAL,yylineno,scope);

                  }
             ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 1289 "parser.y"
    {printf("idlist--> ID cidlist\n");(yyval.expression)=malloc(sizeof(expr));;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1290 "parser.y"
    {(yyval.expression)=NULL;currentFunction=NULL;printf("idlist-->empty\n");;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 1294 "parser.y"
    {if(scopeLookup(scope,yytext)!=NULL){
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
             if(currentFunction!=NULL){ insertArguments(currentFunction,yytext)->offset=currscopeoffset();inccurrescopeoffset();}
             else insert(yytext,FORMAL,yylineno,scope);

            ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 1310 "parser.y"
    {printf("cidlist-->, ID cidlist\n");(yyval.expression)=malloc(sizeof(expr));;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 1311 "parser.y"
    {(yyval.expression)=NULL;currentFunction=NULL;printf("cidlist-->empty\n");;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 1316 "parser.y"
    {
                                    if((yyvsp[(3) - (3)].expression)->backpatch){
                                      expr* t=newexpr(boolexpr_e),*t1=newexpr(boolexpr_e),*arg=newexpr(var_e);
                                      t->type=constbool_e;
                                      t->boolConst=1;
                                      arg->type=var_e;
                                      arg->sym=newtemp();
                                      arg->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                                      strcpy(arg->strConst,arg->sym->name);
                                      backpatch((yyvsp[(3) - (3)].expression)->truelist,nextquadlabel());

                                      emit(assign,t,NULL,arg,-1,yylineno);

                                      emit(jump,NULL,NULL,NULL,nextquadlabel()+2,yylineno);
                                      t1->boolConst=0;
                                      t1->type=constbool_e;

                                      backpatch((yyvsp[(3) - (3)].expression)->falselist,nextquadlabel());
                                      emit(assign,t1,NULL,arg,-1,yylineno);


                                      assignflag=0;

                                      (yyvsp[(3) - (3)].expression)=arg;
                                    }
                                        ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 1341 "parser.y"
    {
        emit(if_eq,(yyvsp[(3) - (5)].expression),newexpr_constbool(1),NULL,nextquadlabel()+2,yylineno);
        (yyval.intValue)=nextquadlabel();
        emit(jump,NULL,NULL,NULL,0,yylineno);
        printf("ifstmt-->if(expr)stmt\n");
        ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 1349 "parser.y"
    {patchlabel((yyvsp[(1) - (2)].intValue),nextquadlabel());(yyval.expression)=(yyvsp[(2) - (2)].expression);/*it will break dikio exeis*/;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 1350 "parser.y"
    {
                                      if((yyvsp[(2) - (4)].expression)&&(yyvsp[(4) - (4)].expression)){
                                        (yyval.expression)=malloc(sizeof(expr));
                                        (yyvsp[(2) - (4)].expression)->breaklist=merge((yyvsp[(2) - (4)].expression)->breaklist,(yyvsp[(4) - (4)].expression)->breaklist);
                                        (yyvsp[(2) - (4)].expression)->continuelist=merge((yyvsp[(2) - (4)].expression)->continuelist,(yyvsp[(4) - (4)].expression)->continuelist);
                                        (yyval.expression)=(yyvsp[(2) - (4)].expression);
                                      }
                                      else{
                                      if((yyvsp[(2) - (4)].expression)){(yyval.expression)=(yyvsp[(2) - (4)].expression);}
                                      else if((yyvsp[(4) - (4)].expression)){(yyval.expression)=(yyvsp[(4) - (4)].expression);}}
                                      patchlabel((yyvsp[(1) - (4)].intValue),(yyvsp[(3) - (4)].intValue)+1);patchlabel((yyvsp[(3) - (4)].intValue),nextquadlabel());printf("ifstmt-->if(expr)stmt else stmt\n");;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1363 "parser.y"
    {(yyval.intValue)=nextquadlabel();
                emit(jump,NULL,NULL,NULL,0,yylineno);
                ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 1370 "parser.y"
    {

              emit(jump,NULL,NULL,NULL,(yyvsp[(1) - (3)].intValue),yylineno);
              patchlabel((yyvsp[(2) - (3)].intValue),nextquadlabel());
 //printf("%p\n",$3);
              if((yyvsp[(3) - (3)].expression)){
            //    printf("%p\n",$3);
                backpatch((yyvsp[(3) - (3)].expression)->breaklist,nextquadlabel());
              //  printf("a\n");
                backpatch((yyvsp[(3) - (3)].expression)->continuelist,(yyvsp[(1) - (3)].intValue));
              //  printf("a\n");
            }

          (yyval.expression)=(yyvsp[(3) - (3)].expression);
              printf("whilestmt-->while(expr)stmt\n");;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 1387 "parser.y"
    {
              (yyval.intValue)=nextquadlabel();
              ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 1392 "parser.y"
    {if((yyvsp[(2) - (2)].expression)->backpatch){
                     expr* t=newexpr(boolexpr_e),*t1=newexpr(boolexpr_e),*arg=newexpr(var_e);
                     t->type=constbool_e;
                     t->boolConst=1;
                     arg->type=var_e;
                     arg->sym=newtemp();
                     arg->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                     strcpy(arg->strConst,arg->sym->name);
                     backpatch((yyvsp[(2) - (2)].expression)->truelist,nextquadlabel());

                     emit(assign,t,NULL,arg,-1,yylineno);

                     emit(jump,NULL,NULL,NULL,nextquadlabel()+2,yylineno);
                     t1->boolConst=0;
                     t1->type=constbool_e;

                     backpatch((yyvsp[(2) - (2)].expression)->falselist,nextquadlabel());
                     emit(assign,t1,NULL,arg,-1,yylineno);


                     assignflag=0;

                     (yyvsp[(2) - (2)].expression)=arg;};}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 1414 "parser.y"
    {

            emit(if_eq,newexpr_constbool(1),NULL,(yyvsp[(2) - (4)].expression),nextquadlabel()+2,yylineno);
            (yyval.intValue)=nextquadlabel();
            emit(jump,NULL,NULL,NULL,0,yylineno);

            ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 1424 "parser.y"
    {/*printf("l %p\n",$2);*/(yyval.expression)=(yyvsp[(2) - (3)].expression);;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 1427 "parser.y"
    {++loopcounter;;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 1430 "parser.y"
    {--loopcounter;;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 1433 "parser.y"
    {if((yyvsp[(6) - (6)].expression)->backpatch){
                                  expr* t=newexpr(boolexpr_e),*t1=newexpr(boolexpr_e),*arg=newexpr(var_e);
                                  t->type=constbool_e;
                                  t->boolConst=1;
                                  arg->type=var_e;
                                  arg->sym=newtemp();
                                  arg->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                                  strcpy(arg->strConst,arg->sym->name);
                                  backpatch((yyvsp[(6) - (6)].expression)->truelist,nextquadlabel());

                                  emit(assign,t,NULL,arg,-1,yylineno);

                                  emit(jump,NULL,NULL,NULL,nextquadlabel()+2,yylineno);
                                  t1->boolConst=0;
                                  t1->type=constbool_e;

                                  backpatch((yyvsp[(6) - (6)].expression)->falselist,nextquadlabel());
                                  emit(assign,t1,NULL,arg,-1,yylineno);

                                  (yyvsp[(6) - (6)].expression)=arg;
                                  assignflag=0;


                              }
                            //  printf("here\n");
                        ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 1458 "parser.y"
    {
                                      (yyval.forStruct)=malloc(sizeof(struct forStruct));
                                      (yyval.forStruct)->test=(yyvsp[(5) - (8)].intValue);
                                      (yyval.forStruct)->enter=nextquadlabel();




                                      emit(if_eq,newexpr_constbool(1),(yyvsp[(6) - (8)].expression),NULL,0,yylineno);

                                    ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 1472 "parser.y"
    {
                                        patchlabel((yyvsp[(1) - (7)].forStruct)->enter,(yyvsp[(5) - (7)].intValue)+1);
                                      //  printf("A\n");
                                        patchlabel((yyvsp[(2) - (7)].intValue),nextquadlabel());
                                      //  printf("A\n");
                                        patchlabel((yyvsp[(5) - (7)].intValue),(yyvsp[(1) - (7)].forStruct)->test);
                                      //  printf("%p\n",$6);
                                        patchlabel((yyvsp[(7) - (7)].intValue),(yyvsp[(2) - (7)].intValue)+1);
                                        if((yyvsp[(6) - (7)].expression)){
                                          backpatch((yyvsp[(6) - (7)].expression)->breaklist,nextquadlabel());
                                          backpatch((yyvsp[(6) - (7)].expression)->continuelist,(yyvsp[(2) - (7)].intValue)+1);
                                        }
                                        printf("forstmt-->for(elist;expr;elist;) stmt\n");;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 1488 "parser.y"
    {(yyval.intValue)=nextquadlabel();emit(jump,NULL,NULL,NULL,0,yylineno);;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 1492 "parser.y"
    {if (scope==0)printf("Error use of return in scope 0 in line %d\n",yylineno);;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 1493 "parser.y"
    {if((yyvsp[(3) - (3)].expression)->backpatch){
                        expr* t=newexpr(boolexpr_e),*t1=newexpr(boolexpr_e),*arg=newexpr(var_e);
                        t->type=constbool_e;
                        t->boolConst=1;
                        arg->type=var_e;
                        arg->sym=newtemp();
                        arg->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                        strcpy(arg->strConst,arg->sym->name);
                        backpatch((yyvsp[(3) - (3)].expression)->truelist,nextquadlabel());

                        emit(assign,t,NULL,arg,-1,yylineno);

                        emit(jump,NULL,NULL,NULL,nextquadlabel()+2,yylineno);
                        t1->boolConst=0;
                        t1->type=constbool_e;

                        backpatch((yyvsp[(3) - (3)].expression)->falselist,nextquadlabel());
                        emit(assign,t1,NULL,arg,-1,yylineno);


                        assignflag=0;

                        (yyvsp[(3) - (3)].expression)=arg;};}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 1515 "parser.y"
    {
                        if(currscopespace()==functionlocal){
                                                emit(ret,(yyvsp[(3) - (5)].expression),NULL,NULL,-1,yylineno);
                                                insertRet(nextquadlabel());
                                                emit(jump,NULL,NULL,NULL,-1,yylineno);
                                             }
                                                printf("returnstmt-->return expr;\n");(yyval.expression)=malloc(sizeof(expr));;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 1522 "parser.y"
    {if (scope==0)
                        printf("Error use of return in scope 0 in line %d\n",yylineno);
                      else{
                            if(currscopespace()==functionlocal){
                              emit(ret,NULL,NULL,NULL,-1,yylineno);
                              //returnPatch=nextquadlabel();
                              insertRet(nextquadlabel());
                              emit(jump,NULL,NULL,NULL,-1,yylineno);

                              }
                        }

                        ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 1534 "parser.y"
    {(yyval.expression)=malloc(sizeof(expr));
                        printf("returnstmt-->return;\n");;}
    break;



/* Line 1455 of yacc.c  */
#line 3714 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 1539 "parser.y"


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

PrintQuads();

//generateAll();
//print_instructions();

//filePrintQuads();
//printFileInstructions();
//Write_Binary_Code();
//Print_txt_Final_Code("tsitsis.txt", stringConsts, totalStringConsts, numConsts, totalNumConsts,
//				libFuncs, totalLibFuncs, userFuncs, totalUserFuncs, instructions, currInstr);
//avm_read_binary();
return 0;
}

