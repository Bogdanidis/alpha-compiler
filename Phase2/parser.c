
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


/* Line 189 of yacc.c  */
#line 92 "parser.tab.c"

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
     NOT = 270,
     AND = 271,
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
     MOD = 307,
     DOTS = 308
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 89 "parser.y"

   char*  stringValue;
   int    intValue;
   double realValue;



/* Line 214 of yacc.c  */
#line 189 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 201 "parser.tab.c"

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
#define YYFINAL  68
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   513

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNRULES -- Number of states.  */
#define YYNSTATES  188

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,    10,    12,    14,    16,    18,
      19,    23,    24,    28,    30,    32,    34,    36,    40,    44,
      48,    52,    56,    60,    64,    68,    72,    76,    80,    84,
      88,    90,    91,    96,   100,   103,   106,   109,   112,   115,
     118,   120,   122,   124,   126,   130,   132,   134,   136,   138,
     140,   142,   144,   146,   149,   152,   154,   158,   163,   167,
     172,   177,   180,   187,   189,   191,   195,   201,   204,   205,
     209,   210,   214,   218,   221,   225,   226,   232,   235,   236,
     242,   243,   244,   245,   254,   255,   256,   257,   267,   268,
     272,   273,   274,   279,   280,   286,   294,   300,   310,   311,
     316,   317
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      55,     0,    -1,    56,    55,    -1,    -1,    59,    42,    -1,
      90,    -1,    91,    -1,    92,    -1,    93,    -1,    -1,     9,
      57,    42,    -1,    -1,    10,    58,    42,    -1,    77,    -1,
      79,    -1,    42,    -1,    60,    -1,    59,    16,    59,    -1,
      59,    17,    59,    -1,    59,    19,    59,    -1,    59,    20,
      59,    -1,    59,    21,    59,    -1,    59,    22,    59,    -1,
      59,    52,    59,    -1,    59,    24,    59,    -1,    59,    25,
      59,    -1,    59,    28,    59,    -1,    59,    29,    59,    -1,
      59,    30,    59,    -1,    59,    31,    59,    -1,    62,    -1,
      -1,    65,    61,    18,    59,    -1,    36,    59,    37,    -1,
      20,    59,    -1,    15,    59,    -1,    26,    65,    -1,    65,
      26,    -1,    27,    65,    -1,    65,    27,    -1,    63,    -1,
      65,    -1,    67,    -1,    73,    -1,    36,    79,    37,    -1,
      64,    -1,    32,    -1,    33,    -1,    35,    -1,    12,    -1,
      13,    -1,    14,    -1,    34,    -1,    11,    34,    -1,    45,
      34,    -1,    66,    -1,    65,    46,    34,    -1,    65,    38,
      59,    39,    -1,    67,    46,    34,    -1,    67,    38,    59,
      39,    -1,    67,    36,    71,    37,    -1,    65,    68,    -1,
      36,    79,    37,    36,    71,    37,    -1,    69,    -1,    70,
      -1,    36,    71,    37,    -1,    47,    34,    36,    71,    37,
      -1,    59,    72,    -1,    -1,    43,    59,    72,    -1,    -1,
      38,    71,    39,    -1,    38,    74,    39,    -1,    76,    75,
      -1,    43,    76,    75,    -1,    -1,    40,    59,    44,    59,
      41,    -1,    40,    41,    -1,    -1,    40,    78,    56,    55,
      41,    -1,    -1,    -1,    -1,     7,    80,    36,    81,    86,
      37,    82,    77,    -1,    -1,    -1,    -1,     7,    34,    83,
      36,    84,    86,    37,    85,    77,    -1,    -1,    34,    87,
      88,    -1,    -1,    -1,    43,    34,    89,    88,    -1,    -1,
       3,    36,    59,    37,    56,    -1,     3,    36,    59,    37,
      56,     4,    56,    -1,     5,    36,    59,    37,    56,    -1,
       6,    36,    71,    42,    59,    42,    71,    37,    56,    -1,
      -1,     8,    94,    59,    42,    -1,    -1,     8,    95,    42,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    96,    96,    97,   101,   102,   103,   104,   105,   106,
     106,   107,   107,   108,   109,   110,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   130,   130,   141,   142,   143,   144,   147,   150,   153,
     156,   160,   161,   162,   163,   164,   167,   168,   169,   170,
     171,   172,   175,   205,   215,   221,   224,   225,   226,   227,
     231,   232,   233,   236,   237,   240,   243,   246,   247,   250,
     251,   255,   256,   259,   262,   263,   266,   269,   270,   270,
     276,   286,   288,   276,   291,   301,   302,   291,   306,   306,
     315,   319,   319,   335,   338,   339,   342,   345,   348,   348,
     349,   349
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "WHILE", "FOR", "FUNCTION",
  "RETURN", "BREAK", "CONTINUE", "LOCAL", "TRUE", "FALSE", "NIL", "NOT",
  "AND", "OR", "ASSIGNMENT", "PLUS", "MINUS", "MULT", "DIV", "MODULO",
  "EQUAL", "NOT_EQUAL", "INCREMENT", "DECREMENT", "GREATER", "LESS",
  "GREATER_EQUAL", "LESS_EQUAL", "NUMBER", "REAL_NUMBER", "ID", "STRING",
  "LEFT_PARENTHESIS", "RIGHT_PARENTHESIS", "LEFT_SQUARE_BRACKET",
  "RIGHT_SQUARE_BRACKET", "LEFT_CURLY_BRACKET", "RIGHT_CURLY_BRACKET",
  "SEMICOLON", "COMMA", "COLON", "DOUBLE_COLONS", "DOT", "DOUBLE_DOT",
  "ONE_LINE_COMMENT", "MULTI_LINE_COMMENT", "OTHER", "UMINUS", "MOD",
  "DOTS", "$accept", "program", "stmt", "$@1", "$@2", "expr", "assignexpr",
  "$@3", "term", "primary", "const", "lvalue", "member", "call",
  "callsuffix", "normcall", "methodcall", "elist", "cexprs", "objectdef",
  "indexed", "clindexedelem", "indexedelem", "block", "$@4", "funcdef",
  "$@5", "$@6", "$@7", "$@8", "$@9", "$@10", "idlist", "$@11", "cidlist",
  "$@12", "ifstmt", "whilestmt", "forstmt", "returnstmt", "$@13", "$@14", 0
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
     305,   306,   307,   308
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    55,    56,    56,    56,    56,    56,    57,
      56,    58,    56,    56,    56,    56,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    61,    60,    62,    62,    62,    62,    62,    62,    62,
      62,    63,    63,    63,    63,    63,    64,    64,    64,    64,
      64,    64,    65,    65,    65,    65,    66,    66,    66,    66,
      67,    67,    67,    68,    68,    69,    70,    71,    71,    72,
      72,    73,    73,    74,    75,    75,    76,    77,    78,    77,
      80,    81,    82,    79,    83,    84,    85,    79,    87,    86,
      86,    89,    88,    88,    90,    90,    91,    92,    94,    93,
      95,    93
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     2,     1,     1,     1,     1,     0,
       3,     0,     3,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     0,     4,     3,     2,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     3,     4,     3,     4,
       4,     2,     6,     1,     1,     3,     5,     2,     0,     3,
       0,     3,     3,     2,     3,     0,     5,     2,     0,     5,
       0,     0,     0,     8,     0,     0,     0,     9,     0,     3,
       0,     0,     4,     0,     5,     7,     5,     9,     0,     4,
       0,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     0,    80,    98,     9,    11,     0,    49,
      50,    51,     0,     0,     0,     0,    46,    47,    52,    48,
       0,    68,    78,    15,     0,     0,     3,     0,    16,    30,
      40,    45,    41,    55,    42,    43,    13,    14,     5,     6,
       7,     8,     0,     0,    68,    84,     0,     0,     0,     0,
       0,    53,    35,    34,     0,    36,     0,    38,     0,     0,
       0,    70,     0,     0,    75,    77,     0,    54,     1,     2,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     0,    37,    39,    68,     0,     0,     0,
       0,    61,    63,    64,    68,     0,     0,     0,     0,     0,
       0,    81,     0,   101,    10,    12,     0,    33,    44,     0,
       0,    67,    71,    72,     0,    73,     3,    17,    18,    19,
      20,    21,    22,    24,    25,    26,    27,    28,    29,    23,
       0,     0,    56,     0,     0,     0,     0,    58,     0,     0,
       0,    85,    90,    99,     0,    68,     0,    70,    75,     0,
      65,    57,    68,    32,    60,    59,    94,    96,     0,    90,
      88,     0,     0,     0,    69,    74,    79,     0,    68,     0,
      93,    82,    62,    76,    66,     0,    86,     0,    89,     0,
       0,     0,    91,    83,    97,    87,    93,    92
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    25,    26,    49,    50,    27,    28,    90,    29,    30,
      31,    32,    33,    34,    91,    92,    93,    62,   111,    35,
      63,   115,    64,    36,    66,    37,    46,   142,   179,   100,
     159,   181,   161,   170,   178,   186,    38,    39,    40,    41,
      47,    48
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -139
static const yytype_int16 yypact[] =
{
     138,   -24,   -16,    -3,   -13,    -5,  -139,  -139,     0,  -139,
    -139,  -139,   468,   468,     6,     6,  -139,  -139,  -139,  -139,
     174,   433,     4,  -139,    13,    38,   138,    -6,  -139,  -139,
    -139,  -139,    73,  -139,    49,  -139,  -139,  -139,  -139,  -139,
    -139,  -139,   468,   468,   468,  -139,    36,   468,     7,     8,
      28,  -139,   390,   390,    66,    42,    49,    42,   201,    44,
     468,   220,    40,    45,    47,  -139,   138,  -139,  -139,  -139,
     468,   468,   468,   468,   468,   468,   468,   468,   468,   468,
     468,   468,  -139,   468,  -139,  -139,   468,   468,    58,    60,
      78,  -139,  -139,  -139,   468,   468,    63,   240,   259,    70,
      72,  -139,   278,  -139,  -139,  -139,    80,  -139,    87,   297,
     468,  -139,  -139,  -139,    81,  -139,   138,    34,    34,     5,
       5,  -139,  -139,   406,   406,    85,    85,    85,    85,  -139,
      88,   315,  -139,    91,   468,    92,   331,  -139,   138,   138,
     468,  -139,    90,  -139,    87,   468,   468,   220,    47,    89,
    -139,  -139,   468,   390,  -139,  -139,  -139,  -139,   356,    90,
    -139,    94,    95,   372,  -139,  -139,  -139,    98,   468,    99,
      96,  -139,  -139,  -139,  -139,   101,  -139,   108,  -139,   114,
     138,   114,  -139,  -139,  -139,  -139,    96,  -139
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -139,   -23,   -62,  -139,  -139,   -12,  -139,  -139,  -139,  -139,
    -139,    -8,  -139,    14,  -139,  -139,  -139,   -42,    10,  -139,
    -139,    11,    41,  -138,  -139,   -15,  -139,  -139,  -139,  -139,
    -139,  -139,     1,  -139,   -25,  -139,  -139,  -139,  -139,  -139,
    -139,  -139
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -101
static const yytype_int16 yytable[] =
{
      52,    53,    99,    69,   116,    59,    55,    57,    58,    61,
      70,    71,    42,    72,    73,    74,    75,     8,    76,    77,
      43,    45,    78,    79,    80,    81,    74,    75,    56,    56,
      97,    98,    61,    44,    51,   102,    82,  -100,    68,   106,
      18,   183,    54,   185,   130,    65,    83,    67,   109,   103,
     104,    24,   135,    72,    73,    74,    75,    83,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     105,   129,   101,     4,    61,   131,   156,   157,    86,   112,
      87,   108,    61,   136,   113,    94,    83,    95,    88,    89,
     114,   -31,   132,   149,   133,    96,   134,   137,   147,    84,
      85,    70,    71,   162,    72,    73,    74,    75,   141,    86,
     167,    87,   140,  -101,  -101,  -101,  -101,   144,   184,    88,
      89,    60,   153,   145,   160,   150,   175,   152,   158,   154,
     166,   171,   172,    61,   163,   174,   176,    83,   180,   177,
      61,     1,   182,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    22,   148,    61,   164,    13,   165,
     169,   187,     0,     0,    14,    15,     0,     0,     0,     0,
      16,    17,    18,    19,    20,     0,    21,     0,    22,     0,
      23,     4,     0,    24,     0,     8,     9,    10,    11,    12,
       0,     0,     0,     0,    13,     0,     0,     0,     0,     0,
      14,    15,     0,     0,     0,     0,    16,    17,    18,    19,
      20,     0,    21,     0,     0,     0,     0,    70,    71,    24,
      72,    73,    74,    75,     0,    76,    77,     0,     0,    78,
      79,    80,    81,     0,     0,     0,    70,    71,   107,    72,
      73,    74,    75,     0,    76,    77,     0,     0,    78,    79,
      80,    81,     0,    83,     0,     0,    70,    71,     0,    72,
      73,    74,    75,   110,    76,    77,     0,     0,    78,    79,
      80,    81,    83,     0,     0,    70,    71,   138,    72,    73,
      74,    75,     0,    76,    77,     0,     0,    78,    79,    80,
      81,     0,    83,     0,    70,    71,   139,    72,    73,    74,
      75,     0,    76,    77,     0,     0,    78,    79,    80,    81,
       0,    83,     0,    70,    71,     0,    72,    73,    74,    75,
     143,    76,    77,     0,     0,    78,    79,    80,    81,     0,
      83,    70,    71,     0,    72,    73,    74,    75,     0,    76,
      77,   146,     0,    78,    79,    80,    81,    70,    71,    83,
      72,    73,    74,    75,   151,    76,    77,     0,     0,    78,
      79,    80,    81,     0,     0,     0,     0,    83,     0,     0,
     155,     0,    70,    71,     0,    72,    73,    74,    75,     0,
      76,    77,     0,    83,    78,    79,    80,    81,    70,    71,
       0,    72,    73,    74,    75,     0,    76,    77,   168,     0,
      78,    79,    80,    81,     0,     0,    70,    71,    83,    72,
      73,    74,    75,   173,    76,    77,     0,     0,    78,    79,
      80,    81,    70,    71,    83,    72,    73,    74,    75,     0,
    -101,  -101,     0,     0,    78,    79,    80,    81,     0,     0,
       0,     0,    83,     0,     8,     9,    10,    11,    12,     0,
       0,     0,     0,    13,     0,     0,     0,     0,    83,    14,
      15,     0,     0,     0,     0,    16,    17,    18,    19,    20,
       0,    21,     0,    60,     0,     0,     0,     0,    24,     8,
       9,    10,    11,    12,     0,     0,     0,     0,    13,     0,
       0,     0,     0,     0,    14,    15,     0,     0,     0,     0,
      16,    17,    18,    19,    20,     0,    21,     0,     0,     0,
       0,     0,     0,    24
};

static const yytype_int16 yycheck[] =
{
      12,    13,    44,    26,    66,    20,    14,    15,    20,    21,
      16,    17,    36,    19,    20,    21,    22,    11,    24,    25,
      36,    34,    28,    29,    30,    31,    21,    22,    14,    15,
      42,    43,    44,    36,    34,    47,    42,    42,     0,    54,
      34,   179,    36,   181,    86,    41,    52,    34,    60,    42,
      42,    45,    94,    19,    20,    21,    22,    52,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      42,    83,    36,     7,    86,    87,   138,   139,    36,    39,
      38,    37,    94,    95,    39,    36,    52,    38,    46,    47,
      43,    18,    34,   116,    34,    46,    18,    34,   110,    26,
      27,    16,    17,   145,    19,    20,    21,    22,    36,    36,
     152,    38,    42,    28,    29,    30,    31,    37,   180,    46,
      47,    40,   134,    36,    34,    37,   168,    36,   140,    37,
      41,    37,    37,   145,   146,    37,    37,    52,    37,    43,
     152,     3,    34,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    40,   114,   168,   147,    20,   148,
     159,   186,    -1,    -1,    26,    27,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    -1,    38,    -1,    40,    -1,
      42,     7,    -1,    45,    -1,    11,    12,    13,    14,    15,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    -1,    38,    -1,    -1,    -1,    -1,    16,    17,    45,
      19,    20,    21,    22,    -1,    24,    25,    -1,    -1,    28,
      29,    30,    31,    -1,    -1,    -1,    16,    17,    37,    19,
      20,    21,    22,    -1,    24,    25,    -1,    -1,    28,    29,
      30,    31,    -1,    52,    -1,    -1,    16,    17,    -1,    19,
      20,    21,    22,    43,    24,    25,    -1,    -1,    28,    29,
      30,    31,    52,    -1,    -1,    16,    17,    37,    19,    20,
      21,    22,    -1,    24,    25,    -1,    -1,    28,    29,    30,
      31,    -1,    52,    -1,    16,    17,    37,    19,    20,    21,
      22,    -1,    24,    25,    -1,    -1,    28,    29,    30,    31,
      -1,    52,    -1,    16,    17,    -1,    19,    20,    21,    22,
      42,    24,    25,    -1,    -1,    28,    29,    30,    31,    -1,
      52,    16,    17,    -1,    19,    20,    21,    22,    -1,    24,
      25,    44,    -1,    28,    29,    30,    31,    16,    17,    52,
      19,    20,    21,    22,    39,    24,    25,    -1,    -1,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      39,    -1,    16,    17,    -1,    19,    20,    21,    22,    -1,
      24,    25,    -1,    52,    28,    29,    30,    31,    16,    17,
      -1,    19,    20,    21,    22,    -1,    24,    25,    42,    -1,
      28,    29,    30,    31,    -1,    -1,    16,    17,    52,    19,
      20,    21,    22,    41,    24,    25,    -1,    -1,    28,    29,
      30,    31,    16,    17,    52,    19,    20,    21,    22,    -1,
      24,    25,    -1,    -1,    28,    29,    30,    31,    -1,    -1,
      -1,    -1,    52,    -1,    11,    12,    13,    14,    15,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    52,    26,
      27,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      -1,    38,    -1,    40,    -1,    -1,    -1,    -1,    45,    11,
      12,    13,    14,    15,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    45
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    20,    26,    27,    32,    33,    34,    35,
      36,    38,    40,    42,    45,    55,    56,    59,    60,    62,
      63,    64,    65,    66,    67,    73,    77,    79,    90,    91,
      92,    93,    36,    36,    36,    34,    80,    94,    95,    57,
      58,    34,    59,    59,    36,    65,    67,    65,    59,    79,
      40,    59,    71,    74,    76,    41,    78,    34,     0,    55,
      16,    17,    19,    20,    21,    22,    24,    25,    28,    29,
      30,    31,    42,    52,    26,    27,    36,    38,    46,    47,
      61,    68,    69,    70,    36,    38,    46,    59,    59,    71,
      83,    36,    59,    42,    42,    42,    79,    37,    37,    59,
      43,    72,    39,    39,    43,    75,    56,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      71,    59,    34,    34,    18,    71,    59,    34,    37,    37,
      42,    36,    81,    42,    37,    36,    44,    59,    76,    55,
      37,    39,    36,    59,    37,    39,    56,    56,    59,    84,
      34,    86,    71,    59,    72,    75,    41,    71,    42,    86,
      87,    37,    37,    41,    37,    71,    37,    43,    88,    82,
      37,    85,    34,    77,    56,    77,    89,    88
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
#line 96 "parser.y"
    {;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 97 "parser.y"
    {;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 101 "parser.y"
    {printf("stmt-->expr;\n");;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 102 "parser.y"
    {printf("stmt-->ifstmt\n");;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 103 "parser.y"
    {printf("stmt-->whilestmt\n");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 104 "parser.y"
    {printf("stmt-->forstmt\n");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 105 "parser.y"
    {printf("stmt-->return \n");;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 106 "parser.y"
    {if (scope==0)printf("Error: use of break in scope 0 in line %d\n",yylineno);;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 106 "parser.y"
    {printf("stmt-->break;\n");;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 107 "parser.y"
    {if (scope==0)printf("Error: use of continue in scope 0 in line %d\n",yylineno);;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 107 "parser.y"
    {printf("stmt-->continue;\n");;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 108 "parser.y"
    {printf("stmt-->block\n");;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 109 "parser.y"
    {printf("stmt-->funcdef\n");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 110 "parser.y"
    {printf("stmt-->;\n");;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 113 "parser.y"
    {printf("expr-->assignexpr\n");;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 114 "parser.y"
    {printf("expr-->expr and expr\n");;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 115 "parser.y"
    {printf("expr-->expr or expr\n");;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 116 "parser.y"
    {printf("expr-->expr + expr\n");;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 117 "parser.y"
    {printf("expr-->expr - expr\n");;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 118 "parser.y"
    {printf("expr-->expr * expr\n");;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 119 "parser.y"
    {printf("expr-->expr / expr\n");;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 120 "parser.y"
    {printf("expr-->expr % expr\n");;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 121 "parser.y"
    {printf("expr-->expr == expr\n");;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 122 "parser.y"
    {printf("expr-->expr != expr\n");;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 123 "parser.y"
    {printf("expr-->expr > expr\n");;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 124 "parser.y"
    {printf("expr-->expr < expr\n");;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 125 "parser.y"
    {printf("expr-->expr >= expr\n");;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 126 "parser.y"
    {printf("expr-->expr <= expr\n");;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 127 "parser.y"
    {printf("expr-->term\n");;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 130 "parser.y"
    {
              if (!arrayFlag)
                  if (isFunction(yylval.stringValue))
                    printf("ERROR: In Line %d  Can not assign any value to %s cause its a function\n",yylineno, yylval.stringValue);

              arrayFlag=0;
;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 137 "parser.y"
    {printf("assignexpr-->lvalue = expr\n");;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 141 "parser.y"
    {printf("term-->(expr)\n");;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 142 "parser.y"
    {printf("term--> -expr\n");;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 143 "parser.y"
    {printf("term--> !expr\n");;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 144 "parser.y"
    {printf("term--> ++lvalue\n");
            if (isFunction(yylval.stringValue))
              printf("ERROR: In Line %d  Can not increment  %s,its a function\n",yylineno, yylval.stringValue); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 147 "parser.y"
    {printf("term--> lvalue++\n");
        if (isFunction(yylval.stringValue))
          printf("ERROR: In Line %d  Can not increment  %s,its a function\n",yylineno, yylval.stringValue); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 150 "parser.y"
    {printf("term--> --lvalue\n");
        if (isFunction(yylval.stringValue))
          printf("ERROR: In Line %d  Can not decrement  %s,its a function\n",yylineno, yylval.stringValue); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 153 "parser.y"
    {printf("term--> lvalue--\n");
        if (isFunction(yylval.stringValue))
          printf("ERROR: In Line %d  Can not decrement  %s,its a function\n",yylineno, yylval.stringValue); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 156 "parser.y"
    {printf("term--> primary\n");;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 160 "parser.y"
    {printf("primary--> lvalue\n");;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 161 "parser.y"
    {printf("primary--> call\n");;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 162 "parser.y"
    {printf("primary--> objectdef\n");;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 163 "parser.y"
    {printf("primary--> ( funcdef )\n");;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 164 "parser.y"
    {printf("primary--> const\n");;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 167 "parser.y"
    {printf("const--> NUMBER\n");;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 168 "parser.y"
    {printf("const--> REAL_NUMBER\n");;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 169 "parser.y"
    {printf("const--> STRING\n");;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 170 "parser.y"
    {printf("const--> TRUE\n");;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 171 "parser.y"
    {printf("const--> FALSE\n");;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 172 "parser.y"
    {printf("const--> NIL\n");;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 175 "parser.y"
    {
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
              ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 205 "parser.y"
    {printf("lvalue--> local ID\n");
              node* tempNode=scopeLookup(scope,yytext);
              if (tempNode==NULL&&!checkIfLibFunc(yytext)){
                  if (scope==0)insert(strdup(yytext),GLOBAL, yylineno, scope);
                  else insert(strdup(yytext),LOCL, yylineno, scope);
              }else {
                if (checkIfLibFunc(yytext)){
                printf("ERROR: In Line %d  %s Shadows a Library Function!\n",yylineno, yytext); }
              }
  					;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 215 "parser.y"
    {printf("lvalue-->:: ID\n");
                if(scopeLookup(0, yytext)== NULL){
                  printf("ERROR: In Line %d  There is no global var with the name %s\n",yylineno, yytext);//yylval.stringValue;

                }
              ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 221 "parser.y"
    {printf("lvalue--> member\n");;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 224 "parser.y"
    {printf("member--> lvalue . ID\n");;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 225 "parser.y"
    {arrayFlag = 1;printf("member--> lvalue [ expr ] ID\n");;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 226 "parser.y"
    {printf("member--> call . ID\n");;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 227 "parser.y"
    {arrayFlag = 1;printf("member--> call [ expr ]\n");;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 231 "parser.y"
    {printf("call--> call ( elist ) \n");;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 232 "parser.y"
    {printf("call--> lvalue callsuffix\n");;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 233 "parser.y"
    {printf("call--> ( funcdef ) ( elist )\n");;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 236 "parser.y"
    {printf("callsuffix--> normcall \n");;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 237 "parser.y"
    {printf("callsuffix--> methodcall \n");;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 240 "parser.y"
    {printf("normcall-->( elist )\n");;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 243 "parser.y"
    {printf("methodcall--> .. ID( elist )\n");;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 246 "parser.y"
    {printf("elist-->expr cexprs\n");;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 247 "parser.y"
    {printf("elist-->empty\n");;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 250 "parser.y"
    {printf("cexprs--> , expr cexprs\n");;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 251 "parser.y"
    {printf("cexprs-->empty\n");;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 255 "parser.y"
    {printf("objectdef-->[ elist ]\n");;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 256 "parser.y"
    {printf("objectdef-->[ indexed ]\n");;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 259 "parser.y"
    {printf("indexed-->indexedelem clindexedelem\n");;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 262 "parser.y"
    {printf("clindexedelem-->, indexedelem clindexedelem\n");;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 263 "parser.y"
    {printf("clindexedelem-->empty\n");;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 266 "parser.y"
    {printf("indexedelem-->{expr ; expr }\n");;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 269 "parser.y"
    {printf("block-->{}\n");;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 270 "parser.y"
    {scope++;;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 270 "parser.y"
    {
            printf("block-->{ stmt }\n");
            hide(scope);
            scope--;;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 276 "parser.y"
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
                  currentFunction=insert(newName,USERFUNC,yylineno,scope);;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 286 "parser.y"
    {scope++;;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 288 "parser.y"
    {scope--;;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 288 "parser.y"
    {printf("funcdef-->function( idlist ) block \n");;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 291 "parser.y"
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
                      currentFunction=insert(yytext,USERFUNC,yylineno,scope); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 301 "parser.y"
    {scope++;;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 302 "parser.y"
    {scope--;;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 302 "parser.y"
    {printf("funcdef-->function ID( idlist ) block \n");;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 306 "parser.y"
    {if(scopeLookup(scope,yytext)!=NULL){
                printf("ERROR: invalid name in line %d\n",yylineno);
             }
             else if(checkIfLibFunc(yytext))
                printf("ERROR: collision with library function in line %d\n",yylineno);
             if(currentFunction!=NULL) insertArguments(currentFunction,yytext);
             else {insert(yytext,FORMAL,yylineno,scope);}
             ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 314 "parser.y"
    {printf("idlist--> ID cidlist\n");;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 315 "parser.y"
    {currentFunction=NULL;printf("idlist-->empty\n");;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 319 "parser.y"
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
             if(currentFunction!=NULL) insertArguments(currentFunction,yytext);
             else insert(yytext,FORMAL,yylineno,scope);
            ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 334 "parser.y"
    {printf("cidlist-->, ID cidlist\n");;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 335 "parser.y"
    {currentFunction=NULL;printf("cidlist-->empty\n");;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 338 "parser.y"
    {printf("ifstmt-->if(expr)stmt\n");;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 339 "parser.y"
    {printf("ifstmt-->if(expr)stmt else stmt\n");;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 342 "parser.y"
    {printf("whilestmt-->while(expr)stmt\n");;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 345 "parser.y"
    {printf("forstmt-->for(elist;expr;) stmt\n");;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 348 "parser.y"
    {if (scope==0)printf("Error use of return in scope 0 in line %d\n",yylineno);;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 348 "parser.y"
    {printf("returnstmt-->return expr;\n");;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 349 "parser.y"
    {if (scope==0)printf("Error use of return in scope 0 in line %d\n",yylineno);;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 349 "parser.y"
    {printf("returnstmt-->return;\n");;}
    break;



/* Line 1455 of yacc.c  */
#line 2438 "parser.tab.c"
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
#line 352 "parser.y"


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

