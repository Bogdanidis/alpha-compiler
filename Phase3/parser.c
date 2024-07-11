/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

#include "quad.h"
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
int currscope(){return scope;}

#line 93 "parser.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.h".  */
#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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
/* Tokens.  */
#define IF 258
#define ELSE 259
#define WHILE 260
#define FOR 261
#define FUNCTION 262
#define RETURN 263
#define BREAK 264
#define CONTINUE 265
#define LOCAL 266
#define TRUE 267
#define FALSE 268
#define NIL 269
#define AND 270
#define NOT 271
#define OR 272
#define ASSIGNMENT 273
#define PLUS 274
#define MINUS 275
#define MULT 276
#define DIV 277
#define MODULO 278
#define EQUAL 279
#define NOT_EQUAL 280
#define INCREMENT 281
#define DECREMENT 282
#define GREATER 283
#define LESS 284
#define GREATER_EQUAL 285
#define LESS_EQUAL 286
#define NUMBER 287
#define REAL_NUMBER 288
#define ID 289
#define STRING 290
#define LEFT_PARENTHESIS 291
#define RIGHT_PARENTHESIS 292
#define LEFT_SQUARE_BRACKET 293
#define RIGHT_SQUARE_BRACKET 294
#define LEFT_CURLY_BRACKET 295
#define RIGHT_CURLY_BRACKET 296
#define SEMICOLON 297
#define COMMA 298
#define COLON 299
#define DOUBLE_COLONS 300
#define DOT 301
#define DOUBLE_DOT 302
#define ONE_LINE_COMMENT 303
#define MULTI_LINE_COMMENT 304
#define OTHER 305
#define UMINUS 306
#define DOTS 307

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 137 "parser.y" /* yacc.c:355  */

   char*  stringValue;
   int    intValue;
   double realValue;
   struct expr* expression;
   struct call* call;
   struct forStruct *forStruct;

#line 246 "parser.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 261 "parser.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

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
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  221

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   146,   146,   150,   164,   168,   189,   190,   193,   196,
     199,   199,   214,   214,   227,   228,   231,   237,   239,   239,
     280,   280,   319,   332,   337,   342,   347,   352,   357,   357,
     461,   461,   563,   571,   581,   590,   599,   605,   610,   610,
     663,   664,   675,   693,   712,   730,   749,   755,   760,   761,
     762,   765,   768,   769,   770,   771,   772,   773,   776,   842,
     864,   871,   874,   877,   883,   889,   893,   896,   908,   917,
     920,   925,   934,   934,   944,   971,   976,  1003,  1009,  1021,
    1035,  1041,  1045,  1050,  1056,  1057,  1057,  1082,  1106,  1108,
    1108,  1109,  1082,  1131,  1162,  1163,  1164,  1131,  1185,  1190,
    1195,  1195,  1207,  1211,  1211,  1228,  1233,  1233,  1266,  1267,
    1280,  1287,  1304,  1309,  1309,  1341,  1344,  1347,  1350,  1350,
    1389,  1405,  1409,  1410,  1409,  1439,  1439
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
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
  "$@23", "forstmt", "N", "returnstmt", "$@24", "$@25", "$@26", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
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

#define YYPACT_NINF -201

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-201)))

#define YYTABLE_NINF -126

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-126)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
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

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
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

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
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


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 146 "parser.y" /* yacc.c:1646  */
    {printf(" program --> statements \n");}
#line 1559 "parser.c" /* yacc.c:1646  */
    break;

  case 3:
#line 150 "parser.y" /* yacc.c:1646  */
    {
                              //  printf("%p %p %p\n",$$,$1,$2);
                                if((yyvsp[-1].expression)&&(yyvsp[0].expression)){

                                  (yyvsp[-1].expression)->breaklist=merge((yyvsp[-1].expression)->breaklist,(yyvsp[0].expression)->breaklist);
                                  (yyvsp[-1].expression)->continuelist=merge((yyvsp[-1].expression)->continuelist,(yyvsp[0].expression)->continuelist);
                              //    printf("$1 %p \n",$1);
                                }
                                if((yyvsp[-1].expression)){
                                  (yyval.expression)=(yyvsp[-1].expression);
                                }else if((yyvsp[0].expression)){(yyval.expression)=(yyvsp[0].expression);}
                            //    printf("$$ %p \n",$$);

                                printf("statements --> stmt statements\n");}
#line 1578 "parser.c" /* yacc.c:1646  */
    break;

  case 4:
#line 164 "parser.y" /* yacc.c:1646  */
    {(yyval.expression)=NULL;printf("statements --> empty\n");}
#line 1584 "parser.c" /* yacc.c:1646  */
    break;

  case 5:
#line 168 "parser.y" /* yacc.c:1646  */
    {
                            if((yyvsp[-1].expression)->backpatch&&!assignflag){
                              expr* t=newexpr(boolexpr_e),*t1=newexpr(boolexpr_e),*arg=newexpr(var_e);
                              t->type=constbool_e;
                              t->boolConst=1;
                              arg->type=var_e;
                              arg->sym=newtemp();
                              arg->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                              strcpy(arg->strConst,arg->sym->name);
                              backpatch((yyvsp[-1].expression)->truelist,nextquadlabel());
                              emit(assign,arg,NULL,t,-1,nextquadlabel());
                              emit(jump,NULL,NULL,NULL,nextquadlabel()+2,nextquadlabel());
                              t1->boolConst=0;
                              t1->type=constbool_e;
                              backpatch((yyvsp[-1].expression)->falselist,nextquadlabel());
                              emit(assign,arg,NULL,t1,-1,nextquadlabel());
                              assignflag=0;

                            }

                            (yyval.expression)=(yyvsp[-1].expression);resetTempVar();printf("stmt-->expr;\n");}
#line 1610 "parser.c" /* yacc.c:1646  */
    break;

  case 6:
#line 189 "parser.y" /* yacc.c:1646  */
    {(yyval.expression)=(yyvsp[0].expression);printf("stmt-->ifstmt\n");}
#line 1616 "parser.c" /* yacc.c:1646  */
    break;

  case 7:
#line 190 "parser.y" /* yacc.c:1646  */
    {
            (yyval.expression)=NULL;
            printf("stmt-->whilestmt\n");}
#line 1624 "parser.c" /* yacc.c:1646  */
    break;

  case 8:
#line 193 "parser.y" /* yacc.c:1646  */
    {
              (yyval.expression)=NULL;
              printf("stmt-->forstmt\n");}
#line 1632 "parser.c" /* yacc.c:1646  */
    break;

  case 9:
#line 196 "parser.y" /* yacc.c:1646  */
    {
              (yyval.expression)=NULL;
              printf("stmt-->return \n");}
#line 1640 "parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 199 "parser.y" /* yacc.c:1646  */
    {if (scope==0)printf("ERROR: use of break in scope 0 in line %d\n",yylineno);}
#line 1646 "parser.c" /* yacc.c:1646  */
    break;

  case 11:
#line 199 "parser.y" /* yacc.c:1646  */
    {
            if(loopcounter>0){

                  (yyval.expression)=malloc(sizeof(expr));
                //  printf("%p\n",$$);
                  (yyval.expression)->breaklist=makelist(nextquadlabel(),(yyval.expression)->breaklist);


                  emit(jump,NULL,NULL,NULL,-1,nextquadlabel());

                  }
                  else
                  printf("ERROR: Use of break outside a loop in line %d\n",yylineno);
                   printf("stmt-->break;\n");
                   }
#line 1666 "parser.c" /* yacc.c:1646  */
    break;

  case 12:
#line 214 "parser.y" /* yacc.c:1646  */
    {if (scope==0)printf("ERROR: use of continue in scope 0 in line %d\n",yylineno);}
#line 1672 "parser.c" /* yacc.c:1646  */
    break;

  case 13:
#line 214 "parser.y" /* yacc.c:1646  */
    {
                if(loopcounter>0){

                    (yyval.expression)=malloc(sizeof(expr));
                //    printf("%p\n",$$);
                    (yyval.expression)->continuelist=makelist(nextquadlabel(),  (yyval.expression)->continuelist);
                    emit(jump,NULL,NULL,NULL,-1,nextquadlabel());

                      }
                      else
                      printf("ERROR: Use of continue outside a loop in line %d\n",yylineno);
                printf("stmt-->continue;\n");
                }
#line 1690 "parser.c" /* yacc.c:1646  */
    break;

  case 14:
#line 227 "parser.y" /* yacc.c:1646  */
    {(yyval.expression)=(yyvsp[0].expression);printf("stmt-->block\n");}
#line 1696 "parser.c" /* yacc.c:1646  */
    break;

  case 15:
#line 228 "parser.y" /* yacc.c:1646  */
    {
              (yyval.expression)=NULL;
              printf("stmt-->funcdef\n");}
#line 1704 "parser.c" /* yacc.c:1646  */
    break;

  case 16:
#line 231 "parser.y" /* yacc.c:1646  */
    {(yyval.expression)=NULL;resetTempVar();printf("stmt-->;\n");}
#line 1710 "parser.c" /* yacc.c:1646  */
    break;

  case 17:
#line 237 "parser.y" /* yacc.c:1646  */
    {(yyval.expression)=(yyvsp[0].expression);assignflag=1;printf("expr-->assignexpr\n");}
#line 1716 "parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 239 "parser.y" /* yacc.c:1646  */
    {
                      if(!(yyvsp[-1].expression)->isBoolean&&(yyvsp[-1].expression)->isEmitable){
                          if(!(yyvsp[-1].expression)->passedByNot){
                            (yyvsp[-1].expression)->truelist=makelist(nextquadlabel(),(yyvsp[-1].expression)->truelist);
                            (yyvsp[-1].expression)->falselist=makelist(nextquadlabel()+1,(yyvsp[-1].expression)->falselist);
                            emit(if_eq,newexpr_constbool(1),(yyvsp[-1].expression),NULL,-1,nextquadlabel());
                            emit(jump,NULL,NULL,NULL,-1,nextquadlabel());
                            (yyvsp[-1].expression)->isEmitable=0;
                          }else
                                (yyvsp[-1].expression)->passedByNot=0;

                      }
                  }
#line 1734 "parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 251 "parser.y" /* yacc.c:1646  */
    {
                                    (yyval.expression)->backpatch=1;

                                    backpatch((yyvsp[-4].expression)->falselist,(yyvsp[-1].intValue));



                                      if(!(yyvsp[0].expression)->isBoolean){
                                          if(!(yyvsp[0].expression)->passedByNot){
                                            (yyvsp[0].expression)->truelist=makelist(nextquadlabel(),(yyvsp[0].expression)->truelist);
                                            (yyvsp[0].expression)->falselist=makelist(nextquadlabel()+1,(yyvsp[0].expression)->falselist);
                                            emit(if_eq,newexpr_constbool(1),(yyvsp[0].expression),NULL,-1,nextquadlabel());
                                            emit(jump,NULL,NULL,NULL,-1,nextquadlabel());
                                            (yyvsp[0].expression)->isEmitable=0;
                                          }else
                                                (yyvsp[0].expression)->passedByNot=0;

                                      }

                                      if(!(yyvsp[-4].expression)->isEmitable&&!(yyvsp[0].expression)->isEmitable){
                                          (yyval.expression)->isEmitable=0;
                                      }

                                      (yyval.expression)->truelist=merge((yyvsp[-4].expression)->truelist,(yyvsp[0].expression)->truelist);
                                      (yyval.expression)->falselist=(yyvsp[0].expression)->falselist;
                                      (yyval.expression)->passedByNot=0;

                                    printf("expr-->expr or expr\n");}
#line 1767 "parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 280 "parser.y" /* yacc.c:1646  */
    {

                    if(!(yyvsp[-1].expression)->isBoolean&&(yyvsp[-1].expression)->isEmitable){
                        if(!((yyvsp[-1].expression)->passedByNot)){
                          (yyvsp[-1].expression)->truelist=makelist(nextquadlabel(),(yyvsp[-1].expression)->truelist);
                          (yyvsp[-1].expression)->falselist=makelist(nextquadlabel()+1,(yyvsp[-1].expression)->falselist);
                          emit(if_eq,newexpr_constbool(1),(yyvsp[-1].expression),NULL,-1,nextquadlabel());
                          emit(jump,NULL,NULL,NULL,-1,nextquadlabel());
                          (yyvsp[-1].expression)->isEmitable=0;
                        }else
                              (yyvsp[-1].expression)->passedByNot=0;

                    }

                    }
#line 1787 "parser.c" /* yacc.c:1646  */
    break;

  case 21:
#line 294 "parser.y" /* yacc.c:1646  */
    {

                                    (yyval.expression)->backpatch=1;

                                    backpatch((yyvsp[-4].expression)->truelist,(yyvsp[-1].intValue));
                                     if(!(yyvsp[0].expression)->isBoolean){
                                         if(!(yyvsp[0].expression)->passedByNot){
                                           (yyvsp[0].expression)->truelist=makelist(nextquadlabel(),(yyvsp[0].expression)->truelist);
                                           (yyvsp[0].expression)->falselist=makelist(nextquadlabel()+1,(yyvsp[0].expression)->falselist);
                                           emit(if_eq,newexpr_constbool(1),(yyvsp[0].expression),NULL,-1,nextquadlabel());
                                           emit(jump,NULL,NULL,NULL,-1,nextquadlabel());
                                           (yyvsp[0].expression)->isEmitable=0;
                                         }else
                                               (yyvsp[0].expression)->passedByNot=0;

                                     }
                                     if(!(yyvsp[-4].expression)->isEmitable&&!(yyvsp[0].expression)->isEmitable){
                                         (yyval.expression)->isEmitable=0;
                                     }

                                    (yyval.expression)->truelist=(yyvsp[0].expression)->truelist;
                                    (yyval.expression)->falselist=merge((yyvsp[-4].expression)->falselist,(yyvsp[0].expression)->falselist);

                                    printf("expr-->expr and expr\n");}
#line 1816 "parser.c" /* yacc.c:1646  */
    break;

  case 22:
#line 319 "parser.y" /* yacc.c:1646  */
    {
                                    (yyvsp[0].expression)->truelist=makelist(nextquadlabel(),(yyvsp[0].expression)->truelist);
                                    (yyvsp[0].expression)->falselist=makelist(nextquadlabel()+1,(yyvsp[0].expression)->falselist);
                                    emit(if_eq,newexpr_constbool(1),(yyvsp[0].expression),NULL,-1,nextquadlabel());
                                    emit(jump,NULL,NULL,NULL,-1,nextquadlabel());
                                    swapLists((yyvsp[0].expression)->truelist,(yyvsp[0].expression)->falselist);
                                    (yyval.expression)=(yyvsp[0].expression);
                                    (yyval.expression)->passedByNot=1;
                                    (yyval.expression)->isEmitable=0;
                                    (yyval.expression)->backpatch=1;

                                    printf("expr--> !expr\n");}
#line 1833 "parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 332 "parser.y" /* yacc.c:1646  */
    {
                                      (yyval.expression)=newexpr(arithexpr_e);
                                      (yyval.expression)->sym=newtemp();
                                      emit(add,(yyvsp[-2].expression),(yyvsp[0].expression),(yyval.expression),-1,nextquadlabel());
                                      printf("expr-->expr + expr\n");}
#line 1843 "parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 337 "parser.y" /* yacc.c:1646  */
    {
                                      (yyval.expression)=newexpr(arithexpr_e);
                                      (yyval.expression)->sym=newtemp();
                                      emit(sub,(yyvsp[-2].expression),(yyvsp[0].expression),(yyval.expression),-1,nextquadlabel());
                                      printf("expr-->expr - expr\n");}
#line 1853 "parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 342 "parser.y" /* yacc.c:1646  */
    {
                                      (yyval.expression)=newexpr(arithexpr_e);
                                      (yyval.expression)->sym=newtemp();
                                      emit(mul,(yyvsp[-2].expression),(yyvsp[0].expression),(yyval.expression),-1,nextquadlabel());
                                      printf("expr-->expr * expr\n");}
#line 1863 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 347 "parser.y" /* yacc.c:1646  */
    {
                                      (yyval.expression)=newexpr(arithexpr_e);
                                      (yyval.expression)->sym=newtemp();
                                      emit(divv,(yyvsp[-2].expression),(yyvsp[0].expression),(yyval.expression),-1,nextquadlabel());
                                      printf("expr-->expr / expr\n");}
#line 1873 "parser.c" /* yacc.c:1646  */
    break;

  case 27:
#line 352 "parser.y" /* yacc.c:1646  */
    {
                                      (yyval.expression)=newexpr(arithexpr_e);
                                      (yyval.expression)->sym=newtemp();
                                      emit(mod,(yyvsp[-2].expression),(yyvsp[0].expression),(yyval.expression),-1,nextquadlabel());
                                      printf("expr-->expr % expr\n");}
#line 1883 "parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 357 "parser.y" /* yacc.c:1646  */
    {    if((yyvsp[-1].expression)->backpatch&&!assignflag){
              expr* t=newexpr(boolexpr_e),*t1=newexpr(boolexpr_e),*arg=newexpr(var_e);
              t->type=constbool_e;
              t->boolConst=1;
              arg->type=var_e;
              arg->sym=newtemp();
              arg->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
              strcpy(arg->strConst,arg->sym->name);
              backpatch((yyvsp[-1].expression)->truelist,nextquadlabel());
              emit(assign,arg,NULL,t,-1,nextquadlabel());
              emit(jump,NULL,NULL,NULL,nextquadlabel()+2,nextquadlabel());
              t1->boolConst=0;
              t1->type=constbool_e;
              backpatch((yyvsp[-1].expression)->falselist,nextquadlabel());
              emit(assign,arg,NULL,t1,-1,nextquadlabel());
              assignflag=0;

            }}
#line 1906 "parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 374 "parser.y" /* yacc.c:1646  */
    {

                                    if((yyvsp[-3].expression)->passedByNot){

                                      expr* t=newexpr(boolexpr_e),*t1=newexpr(boolexpr_e),*arg=newexpr(var_e);
                                      t->type=constbool_e;
                                      t->boolConst=1;
                                      arg->type=var_e;
                                      arg->sym=newtemp();
                                      arg->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                                      strcpy(arg->strConst,arg->sym->name);
                                      backpatch((yyvsp[-3].expression)->truelist,nextquadlabel());
                                      emit(assign,arg,NULL,t,-1,nextquadlabel());
                                      emit(jump,NULL,NULL,NULL,nextquadlabel()+2,nextquadlabel());

                                      t1->boolConst=0;
                                      t1->type=constbool_e;

                                      backpatch((yyvsp[-3].expression)->falselist,nextquadlabel());
                                      emit(assign,arg,NULL,t1,-1,nextquadlabel());

                                      (yyvsp[-3].expression)->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                                      strcpy((yyvsp[-3].expression)->strConst,arg->sym->name);

                                      assignflag=0;

                                      (yyvsp[-3].expression)->truelist=NULL;
                                      (yyvsp[-3].expression)->falselist=NULL;
                                    }

                                    if((yyvsp[0].expression)->passedByNot){
                                      expr* t=newexpr(boolexpr_e),*t1=newexpr(boolexpr_e),*arg=newexpr(var_e);
                                      t->type=constbool_e;
                                      t->boolConst=1;
                                      arg->type=var_e;
                                      arg->sym=newtemp();
                                      arg->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                                      strcpy(arg->strConst,arg->sym->name);

                                      backpatch((yyvsp[0].expression)->truelist,nextquadlabel());
                                      emit(assign,arg,NULL,t,-1,nextquadlabel());
                                      emit(jump,NULL,NULL,NULL,nextquadlabel()+2,nextquadlabel());

                                      t1->boolConst=0;
                                      t1->type=constbool_e;

                                      backpatch((yyvsp[0].expression)->falselist,nextquadlabel());
                                      emit(assign,arg,NULL,t1,-1,nextquadlabel());


                                      (yyvsp[0].expression)->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                                      strcpy((yyvsp[0].expression)->strConst,arg->sym->name);

                                      assignflag=0;

                                      (yyvsp[0].expression)->truelist=NULL;
                                      (yyvsp[0].expression)->falselist=NULL;
                                    }
                                    if((yyvsp[0].expression)->backpatch&&!assignflag){
                                          expr* t=newexpr(boolexpr_e),*t1=newexpr(boolexpr_e),*arg=newexpr(var_e);
                                          t->type=constbool_e;
                                          t->boolConst=1;
                                          arg->type=var_e;
                                          arg->sym=newtemp();
                                          arg->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                                          strcpy(arg->strConst,arg->sym->name);
                                          backpatch((yyvsp[0].expression)->truelist,nextquadlabel());
                                          emit(assign,arg,NULL,t,-1,nextquadlabel());
                                          emit(jump,NULL,NULL,NULL,nextquadlabel()+2,nextquadlabel());
                                          t1->boolConst=0;
                                          t1->type=constbool_e;
                                          backpatch((yyvsp[0].expression)->falselist,nextquadlabel());
                                          emit(assign,arg,NULL,t1,-1,nextquadlabel());
                                          assignflag=0;
                                    }


                                    (yyval.expression)->isBoolean=1;
                                    (yyval.expression)->backpatch=1;
                                    (yyval.expression)->truelist=makelist(nextquadlabel(),(yyval.expression)->truelist);
                                    (yyval.expression)->falselist=makelist(nextquadlabel()+1,(yyval.expression)->falselist);

                                    emit(if_eq,(yyvsp[-3].expression),(yyvsp[0].expression),NULL,0,currQuad);

                                    emit(jump,NULL,NULL,NULL,-1,currQuad);

                                    printf("expr-->expr == expr\n");}
#line 1998 "parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 461 "parser.y" /* yacc.c:1646  */
    {    if((yyvsp[-1].expression)->backpatch&&!assignflag){
                                expr* t=newexpr(boolexpr_e),*t1=newexpr(boolexpr_e),*arg=newexpr(var_e);
                                t->type=constbool_e;
                                t->boolConst=1;
                                arg->type=var_e;
                                arg->sym=newtemp();
                                arg->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                                strcpy(arg->strConst,arg->sym->name);
                                backpatch((yyvsp[-1].expression)->truelist,nextquadlabel());
                                emit(assign,arg,NULL,t,-1,nextquadlabel());
                                emit(jump,NULL,NULL,NULL,nextquadlabel()+2,nextquadlabel());
                                t1->boolConst=0;
                                t1->type=constbool_e;
                                backpatch((yyvsp[-1].expression)->falselist,nextquadlabel());
                                emit(assign,arg,NULL,t1,-1,nextquadlabel());
                                assignflag=0;
                        }
                        }
#line 2021 "parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 479 "parser.y" /* yacc.c:1646  */
    {


                                    if((yyvsp[-3].expression)->passedByNot){

                                      expr* t=newexpr(boolexpr_e),*t1=newexpr(boolexpr_e),*arg=newexpr(var_e);
                                      t->type=constbool_e;
                                      t->boolConst=1;
                                      arg->type=var_e;
                                      arg->sym=newtemp();
                                      arg->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                                      strcpy(arg->strConst,arg->sym->name);
                                      backpatch((yyvsp[-3].expression)->truelist,nextquadlabel());
                                      emit(assign,arg,NULL,t,-1,nextquadlabel());
                                      emit(jump,NULL,NULL,NULL,nextquadlabel()+2,nextquadlabel());

                                      t1->boolConst=0;
                                      t1->type=constbool_e;

                                      backpatch((yyvsp[-3].expression)->falselist,nextquadlabel());
                                      emit(assign,arg,NULL,t1,-1,nextquadlabel());

                                      (yyvsp[-3].expression)->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                                      strcpy((yyvsp[-3].expression)->strConst,arg->sym->name);

                                      assignflag=0;

                                      (yyvsp[-3].expression)->truelist=NULL;
                                      (yyvsp[-3].expression)->falselist=NULL;
                                    }

                                    if((yyvsp[0].expression)->passedByNot){
                                      expr* t=newexpr(boolexpr_e),*t1=newexpr(boolexpr_e),*arg=newexpr(var_e);
                                      t->type=constbool_e;
                                      t->boolConst=1;
                                      arg->type=var_e;
                                      arg->sym=newtemp();
                                      arg->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                                      strcpy(arg->strConst,arg->sym->name);

                                      backpatch((yyvsp[0].expression)->truelist,nextquadlabel());
                                      emit(assign,arg,NULL,t,-1,nextquadlabel());
                                      emit(jump,NULL,NULL,NULL,nextquadlabel()+2,nextquadlabel());

                                      t1->boolConst=0;
                                      t1->type=constbool_e;

                                      backpatch((yyvsp[0].expression)->falselist,nextquadlabel());
                                      emit(assign,arg,NULL,t1,-1,nextquadlabel());

                                      (yyvsp[0].expression)->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                                      strcpy((yyvsp[0].expression)->strConst,arg->sym->name);

                                      assignflag=0;

                                      (yyvsp[0].expression)->truelist=NULL;
                                      (yyvsp[0].expression)->falselist=NULL;
                                    }
                                    if((yyvsp[0].expression)->backpatch&&!assignflag){
                                          expr* t=newexpr(boolexpr_e),*t1=newexpr(boolexpr_e),*arg=newexpr(var_e);
                                          t->type=constbool_e;
                                          t->boolConst=1;
                                          arg->type=var_e;
                                          arg->sym=newtemp();
                                          arg->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                                          strcpy(arg->strConst,arg->sym->name);
                                          backpatch((yyvsp[0].expression)->truelist,nextquadlabel());
                                          emit(assign,arg,NULL,t,-1,nextquadlabel());
                                          emit(jump,NULL,NULL,NULL,nextquadlabel()+2,nextquadlabel());
                                          t1->boolConst=0;
                                          t1->type=constbool_e;
                                          backpatch((yyvsp[0].expression)->falselist,nextquadlabel());
                                          emit(assign,arg,NULL,t1,-1,nextquadlabel());
                                          assignflag=0;
                                    }

                                    (yyval.expression)->isBoolean=1;
                                    (yyval.expression)->backpatch=1;
                                    (yyval.expression)->truelist=makelist(nextquadlabel(),(yyval.expression)->truelist);
                                    (yyval.expression)->falselist=makelist(nextquadlabel()+1,(yyval.expression)->falselist);
                                    emit(if_noteq,(yyvsp[-3].expression),(yyvsp[0].expression),NULL,0,currQuad);
                                    emit(jump,NULL,NULL,NULL,-1,currQuad);
                                    printf("expr-->expr != expr\n");}
#line 2109 "parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 563 "parser.y" /* yacc.c:1646  */
    {
                                    (yyval.expression)->isBoolean=1;
                                    (yyval.expression)->backpatch=1;
                                    (yyval.expression)->truelist=makelist(nextquadlabel(),(yyval.expression)->truelist);
                                    (yyval.expression)->falselist=makelist(nextquadlabel()+1,(yyval.expression)->falselist);
                                    emit(if_greater,(yyvsp[-2].expression),(yyvsp[0].expression),NULL,0,currQuad);
                                    emit(jump,NULL,NULL,NULL,-1,currQuad);
                                    printf("expr-->expr > expr\n");}
#line 2122 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 571 "parser.y" /* yacc.c:1646  */
    {
                                    (yyval.expression)->isBoolean=1;
                                    (yyval.expression)->backpatch=1;
                                    (yyval.expression)->truelist=makelist(nextquadlabel(),(yyval.expression)->truelist);
                                    (yyval.expression)->falselist=makelist(nextquadlabel()+1,(yyval.expression)->falselist);
                                    emit(if_less,(yyvsp[-2].expression),(yyvsp[0].expression),NULL,-1,currQuad);
                                    emit(jump,NULL,NULL,NULL,-1,currQuad);


                                    printf("expr-->expr < expr\n");}
#line 2137 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 581 "parser.y" /* yacc.c:1646  */
    {
                                    (yyval.expression)->isBoolean=1;
                                    (yyval.expression)->backpatch=1;
                                    (yyval.expression)->truelist=makelist(nextquadlabel(),(yyval.expression)->truelist);
                                    (yyval.expression)->falselist=makelist(nextquadlabel()+1,(yyval.expression)->falselist);
                                    emit(if_geatereq,(yyvsp[-2].expression),(yyvsp[0].expression),NULL,-1,currQuad);
                                    emit(jump,NULL,NULL,NULL,-1,currQuad);
                                    printf("expr-->expr >= expr\n");}
#line 2150 "parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 590 "parser.y" /* yacc.c:1646  */
    {
                                    (yyval.expression)->isBoolean=1;
                                    (yyval.expression)->backpatch=1;
                                    (yyval.expression)->truelist=makelist(nextquadlabel(),(yyval.expression)->truelist);
                                    (yyval.expression)->falselist=makelist(nextquadlabel()+1,(yyval.expression)->falselist);
                                    emit(if_lesseq,(yyvsp[-2].expression),(yyvsp[0].expression),NULL,-1,currQuad);
                                    emit(jump,NULL,NULL,NULL,-1,currQuad);
                                    printf("expr-->expr <= expr\n");}
#line 2163 "parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 599 "parser.y" /* yacc.c:1646  */
    {
                                    (yyval.expression)=(yyvsp[0].expression);

                                    printf("expr-->term\n");}
#line 2172 "parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 605 "parser.y" /* yacc.c:1646  */
    {(yyval.intValue)=nextquadlabel();}
#line 2178 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 610 "parser.y" /* yacc.c:1646  */
    {
              if (!arrayFlag)
                  if (isFunction(yylval.stringValue))
                    printf("ERROR: In Line %d  Can not assign any value to %s cause its a function\n",yylineno, yylval.stringValue);

              arrayFlag=0;
}
#line 2190 "parser.c" /* yacc.c:1646  */
    break;

  case 39:
#line 617 "parser.y" /* yacc.c:1646  */
    {
                                      expr* tmp_expr=(yyvsp[0].expression);
                                      if((yyvsp[-3].expression)->type==tableitem_e){
                                          emit(tablesetelem,(yyvsp[-3].expression)->index,(yyvsp[0].expression),(yyvsp[-3].expression),-1,nextquadlabel());
                                          (yyval.expression)=emit_iftableitem((yyvsp[-3].expression));
                                          (yyval.expression)->type=assignexpr_e;
                                      }else{
                                      if((yyvsp[0].expression)->backpatch){
                                          expr* t=newexpr(boolexpr_e),*t1=newexpr(boolexpr_e),*arg=newexpr(var_e);
                                          t->type=constbool_e;
                                          t->boolConst=1;
                                          arg->type=var_e;
                                          arg->sym=newtemp();
                                          arg->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                                          strcpy(arg->strConst,arg->sym->name);

                                          backpatch((yyvsp[0].expression)->truelist,nextquadlabel());
                                          emit(assign,arg,NULL,t,-1,nextquadlabel());
                                          emit(jump,NULL,NULL,NULL,nextquadlabel()+2,nextquadlabel());

                                          t1->boolConst=0;
                                          t1->type=constbool_e;

                                          backpatch((yyvsp[0].expression)->falselist,nextquadlabel());
                                          emit(assign,arg,NULL,t1,-1,nextquadlabel());
                                          tmp_expr=arg;

                                          assignflag=0;
                                        }

                                          (yyval.expression)=(yyvsp[0].expression);

                                            emit(assign,tmp_expr,NULL,(yyvsp[-3].expression),-1,nextquadlabel());
                                            (yyval.expression)=newexpr(assignexpr_e);
                                            (yyval.expression)->sym=newtemp();
                                            (yyval.expression)->strConst=malloc(sizeof(strlen((yyval.expression)->sym->name))+1);
                                            strcpy((yyval.expression)->strConst,(yyval.expression)->sym->name);
                                            (yyval.expression)->type=var_e;
                                            emit(assign,(yyvsp[-3].expression),NULL,(yyval.expression),-1,nextquadlabel());

                                      }

                                  printf("assignexpr-->lvalue = expr\n");}
#line 2238 "parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 663 "parser.y" /* yacc.c:1646  */
    {(yyval.expression)=(yyvsp[-1].expression);printf("term-->(expr)\n");}
#line 2244 "parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 664 "parser.y" /* yacc.c:1646  */
    {

                  if(check_arithmetic((yyvsp[0].expression))){
                      (yyval.expression)=newexpr(arithexpr_e);
                      (yyval.expression)->sym=newtemp();
                      emit(uminus,(yyvsp[0].expression),NULL,(yyval.expression),-1,nextquadlabel());
                      }


                  printf("term--> -expr\n");}
#line 2259 "parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 675 "parser.y" /* yacc.c:1646  */
    {

               if(check_arithmetic((yyvsp[0].expression))){
                    if((yyvsp[0].expression)->type==tableitem_e){
                      (yyval.expression)=emit_iftableitem((yyvsp[0].expression));
                      emit(add,(yyval.expression),newexpr_constint(1),(yyval.expression),-1,nextquadlabel());
                      emit(tablesetelem,(yyvsp[0].expression)->index,(yyval.expression),(yyvsp[0].expression),-1,nextquadlabel());
                    }else{
                      emit(add,newexpr_constint(1),(yyvsp[0].expression),(yyvsp[0].expression),-1,nextquadlabel());
                      (yyval.expression)=newexpr(arithexpr_e);
                      (yyval.expression)->sym=newtemp();
                      emit(assign,(yyvsp[0].expression),NULL,(yyval.expression),-1,nextquadlabel());
                    }
                }

                printf("term--> ++lvalue\n");
              if (isFunction(yylval.stringValue))
                printf("ERROR: In Line %d  Can not increment  %s,its a function\n",yylineno, yylval.stringValue); }
#line 2282 "parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 693 "parser.y" /* yacc.c:1646  */
    {

                if(check_arithmetic((yyvsp[-1].expression))){
                (yyval.expression)=newexpr(var_e);
                (yyval.expression)->sym=newtemp();
                if((yyvsp[-1].expression)->type==tableitem_e){
                    expr* val=emit_iftableitem((yyvsp[-1].expression));
                    emit(assign,val,NULL,(yyval.expression),-1,nextquadlabel());
                    emit(add,val,newexpr_constint(1),val,-1,nextquadlabel());
                    emit(tablesetelem,(yyvsp[-1].expression)->index,val,(yyvsp[-1].expression),-1,nextquadlabel());
                }else{
                    emit(assign,(yyvsp[-1].expression),NULL,(yyval.expression),-1,nextquadlabel());
                    emit(add,(yyvsp[-1].expression),newexpr_constint(1),(yyvsp[-1].expression),-1,nextquadlabel());
                }
                }

                printf("term--> lvalue++\n");
          if (isFunction(yylval.stringValue))
            printf("ERROR: In Line %d  Can not increment  %s,its a function\n",yylineno, yylval.stringValue); }
#line 2306 "parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 712 "parser.y" /* yacc.c:1646  */
    {

                  if(check_arithmetic((yyvsp[0].expression))){
                      if((yyvsp[0].expression)->type==tableitem_e){
                        (yyval.expression)=emit_iftableitem((yyvsp[0].expression));
                        emit(sub,(yyval.expression),newexpr_constint(1),(yyval.expression),-1,nextquadlabel());
                        emit(tablesetelem,(yyvsp[0].expression)->index,(yyval.expression),(yyvsp[0].expression),-1,nextquadlabel());
                      }else{
                        emit(sub,(yyvsp[0].expression),newexpr_constint(1),(yyvsp[0].expression),-1,nextquadlabel());
                        (yyval.expression)=newexpr(arithexpr_e);
                        (yyval.expression)->sym=newtemp();
                        emit(assign,(yyvsp[0].expression),NULL,(yyval.expression),-1,nextquadlabel());
                      }
                  }

                    printf("term--> --lvalue\n");
          if (isFunction(yylval.stringValue))
            printf("ERROR: In Line %d  Can not decrement  %s,its a function\n",yylineno, yylval.stringValue); }
#line 2329 "parser.c" /* yacc.c:1646  */
    break;

  case 45:
#line 730 "parser.y" /* yacc.c:1646  */
    {

                  if(check_arithmetic((yyvsp[-1].expression))){
                  (yyval.expression)=newexpr(var_e);
                  (yyval.expression)->sym=newtemp();
                  if((yyvsp[-1].expression)->type==tableitem_e){
                      expr* val=emit_iftableitem((yyvsp[-1].expression));
                      emit(assign,val,NULL,(yyval.expression),-1,nextquadlabel());
                      emit(sub,val,newexpr_constint(1),val,-1,nextquadlabel());
                      emit(tablesetelem,(yyvsp[-1].expression)->index,val,(yyvsp[-1].expression),-1,nextquadlabel());
                  }else{
                      emit(assign,(yyvsp[-1].expression),NULL,(yyval.expression),-1,nextquadlabel());
                      emit(sub,(yyvsp[-1].expression),newexpr_constint(1),(yyvsp[-1].expression),-1,nextquadlabel());
                  }
                  }

                    printf("term--> lvalue--\n");
                  if (isFunction(yylval.stringValue))
                    printf("ERROR: In Line %d  Can not decrement  %s,its a function\n",yylineno, yylval.stringValue); }
#line 2353 "parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 749 "parser.y" /* yacc.c:1646  */
    {
                (yyval.expression)=(yyvsp[0].expression);
              //  printf("%p\n",$1);
                printf("term--> primary\n");}
#line 2362 "parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 755 "parser.y" /* yacc.c:1646  */
    {

                    (yyval.expression)=emit_iftableitem((yyvsp[0].expression));

                    printf("primary--> lvalue\n");}
#line 2372 "parser.c" /* yacc.c:1646  */
    break;

  case 48:
#line 760 "parser.y" /* yacc.c:1646  */
    {(yyval.expression)=(yyvsp[0].expression);printf("primary--> call\n");}
#line 2378 "parser.c" /* yacc.c:1646  */
    break;

  case 49:
#line 761 "parser.y" /* yacc.c:1646  */
    {(yyval.expression)=(yyvsp[0].expression);printf("primary--> objectdef\n");}
#line 2384 "parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 762 "parser.y" /* yacc.c:1646  */
    {
                (yyval.expression)=(yyvsp[-1].expression);
                printf("primary--> ( funcdef )\n");}
#line 2392 "parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 765 "parser.y" /* yacc.c:1646  */
    {(yyval.expression)=(yyvsp[0].expression);printf("primary--> const\n");}
#line 2398 "parser.c" /* yacc.c:1646  */
    break;

  case 52:
#line 768 "parser.y" /* yacc.c:1646  */
    {(yyval.expression)=newexpr_constint(yylval.intValue);printf("const--> NUMBER\n");}
#line 2404 "parser.c" /* yacc.c:1646  */
    break;

  case 53:
#line 769 "parser.y" /* yacc.c:1646  */
    {(yyval.expression)=newexpr_constdouble(yylval.realValue);printf("const--> REAL_NUMBER\n");}
#line 2410 "parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 770 "parser.y" /* yacc.c:1646  */
    {(yyval.expression)=newexpr_conststring(yylval.stringValue);printf("const--> STRING\n");}
#line 2416 "parser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 771 "parser.y" /* yacc.c:1646  */
    {(yyval.expression)=newexpr_constbool(1);printf("const--> TRUE\n");}
#line 2422 "parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 772 "parser.y" /* yacc.c:1646  */
    {(yyval.expression)=newexpr_constbool(0);printf("const--> FALSE\n");}
#line 2428 "parser.c" /* yacc.c:1646  */
    break;

  case 57:
#line 773 "parser.y" /* yacc.c:1646  */
    {(yyval.expression)=newexpr(nil_e);printf("const--> NIL\n");}
#line 2434 "parser.c" /* yacc.c:1646  */
    break;

  case 58:
#line 776 "parser.y" /* yacc.c:1646  */
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
                    }
#line 2503 "parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 842 "parser.y" /* yacc.c:1646  */
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
          					}
#line 2528 "parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 864 "parser.y" /* yacc.c:1646  */
    {printf("lvalue-->:: ID\n");
              node* tempNode=scopeLookup(0,yytext);
                if(tempNode== NULL){
                  printf("ERROR: In Line %d  There is no global var with the name %s\n",yylineno, yytext);
                }else (yyval.expression)=lvalue_expr(tempNode);

              }
#line 2540 "parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 871 "parser.y" /* yacc.c:1646  */
    {printf("lvalue--> member\n");}
#line 2546 "parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 874 "parser.y" /* yacc.c:1646  */
    {
                    (yyval.expression)=member_item((yyvsp[-2].expression),yylval.stringValue);//ID.name
                    printf("member--> lvalue . ID\n");}
#line 2554 "parser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 877 "parser.y" /* yacc.c:1646  */
    {
                    (yyvsp[-3].expression) =emit_iftableitem((yyvsp[-3].expression));
                    (yyval.expression)=newexpr(tableitem_e);
                    (yyval.expression)->sym=(yyvsp[-3].expression)->sym;
                    (yyval.expression)->index=(yyvsp[-1].expression);
                    arrayFlag = 1;printf("member--> lvalue [ expr ] ID\n");}
#line 2565 "parser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 883 "parser.y" /* yacc.c:1646  */
    {(yyval.expression)=(yyvsp[-2].expression);
                          if ((yyval.expression)) {
                          (yyval.expression)->type=tableitem_e;
                          (yyval.expression)->index=newexpr_conststring(yylval.stringValue);
                          }
                          printf("member--> call . ID\n");}
#line 2576 "parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 889 "parser.y" /* yacc.c:1646  */
    {(yyval.expression)=(yyvsp[-3].expression);arrayFlag = 1;printf("member--> call [ expr ]\n");(yyval.expression)=malloc(sizeof(expr));}
#line 2582 "parser.c" /* yacc.c:1646  */
    break;

  case 66:
#line 893 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.expression)=make_call((yyvsp[-3].expression),(yyvsp[-1].expression));//$1
                  printf("call--> call ( elist ) \n");}
#line 2590 "parser.c" /* yacc.c:1646  */
    break;

  case 67:
#line 896 "parser.y" /* yacc.c:1646  */
    {
                  if((yyvsp[0].call)->method){
                      expr* self=(yyvsp[-1].expression);
                      (yyvsp[-1].expression)=emit_iftableitem(member_item(self,(yyvsp[0].call)->name));
                      expr* temp=(yyvsp[0].call)->elist;
                      while(temp->next) temp=temp->next;
                      temp->next=self;

                  }

                  (yyval.expression)=make_call((yyvsp[-1].expression),(yyvsp[0].call)->elist);
                  printf("call--> lvalue callsuffix\n");}
#line 2607 "parser.c" /* yacc.c:1646  */
    break;

  case 68:
#line 908 "parser.y" /* yacc.c:1646  */
    {

                  expr* func =(yyvsp[-4].expression);
                  func->sym=(yyvsp[-4].expression)->sym;
                  (yyval.expression)=make_call(func,(yyvsp[-1].expression));

                  printf("call--> ( funcdef ) ( elist )\n");}
#line 2619 "parser.c" /* yacc.c:1646  */
    break;

  case 69:
#line 917 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.call)=(yyvsp[0].call);
                  printf("callsuffix--> normcall \n");}
#line 2627 "parser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 920 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.call)=(yyvsp[0].call);
                  printf("callsuffix--> methodcall \n");}
#line 2635 "parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 925 "parser.y" /* yacc.c:1646  */
    {
                    (yyval.call)=malloc(sizeof(struct call));
                    (yyval.call)->elist=(yyvsp[-1].expression);
                    (yyval.call)->method=0;
                    (yyval.call)->name=NULL;

                    printf("normcall-->( elist )\n");}
#line 2647 "parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 934 "parser.y" /* yacc.c:1646  */
    {
                tempName=yylval.stringValue;
                }
#line 2655 "parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 936 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.call)=malloc(sizeof(struct call));
                  (yyval.call)->elist=(yyvsp[-1].expression);//$4
                  (yyval.call)->method=1;
                  (yyval.call)->name=tempName;
                  printf("methodcall--> .. ID( elist )\n");}
#line 2666 "parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 944 "parser.y" /* yacc.c:1646  */
    {
                  if((yyvsp[-1].expression)->backpatch){
                     expr* t=newexpr(boolexpr_e),*t1=newexpr(boolexpr_e),*arg=newexpr(var_e);
                     t->type=constbool_e;
                     t->boolConst=1;
                     arg->type=var_e;
                     arg->sym=newtemp();
                     arg->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                     strcpy(arg->strConst,arg->sym->name);
                     backpatch((yyvsp[-1].expression)->truelist,nextquadlabel());

                     emit(assign,arg,NULL,t,-1,nextquadlabel());

                     emit(jump,NULL,NULL,NULL,nextquadlabel()+2,nextquadlabel());
                     t1->boolConst=0;
                     t1->type=constbool_e;

                     backpatch((yyvsp[-1].expression)->falselist,nextquadlabel());
                     emit(assign,arg,NULL,t1,-1,nextquadlabel());


                     assignflag=0;

                     (yyvsp[-1].expression)=arg;}
                (yyval.expression)=(yyvsp[-1].expression);
                (yyval.expression)->next=(yyvsp[0].expression);
                printf("elist-->expr cexprs\n");}
#line 2698 "parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 971 "parser.y" /* yacc.c:1646  */
    {
                (yyval.expression)=NULL;
                printf("elist-->empty\n");}
#line 2706 "parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 976 "parser.y" /* yacc.c:1646  */
    {
                if((yyvsp[-1].expression)->backpatch){
                     expr* t=newexpr(boolexpr_e),*t1=newexpr(boolexpr_e),*arg=newexpr(var_e);
                     t->type=constbool_e;
                     t->boolConst=1;
                     arg->type=var_e;
                     arg->sym=newtemp();
                     arg->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                     strcpy(arg->strConst,arg->sym->name);
                     backpatch((yyvsp[-1].expression)->truelist,nextquadlabel());

                     emit(assign,arg,NULL,t,-1,nextquadlabel());

                     emit(jump,NULL,NULL,NULL,nextquadlabel()+2,nextquadlabel());
                     t1->boolConst=0;
                     t1->type=constbool_e;

                     backpatch((yyvsp[-1].expression)->falselist,nextquadlabel());
                     emit(assign,arg,NULL,t1,-1,nextquadlabel());


                     assignflag=0;

                     (yyvsp[-1].expression)=arg;}
                  (yyval.expression)=(yyvsp[-1].expression);
                  (yyval.expression)->next=(yyvsp[0].expression);
                  printf("cexprs--> , expr cexprs\n");}
#line 2738 "parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 1003 "parser.y" /* yacc.c:1646  */
    {
                 (yyval.expression)=NULL;
                  printf("cexprs-->empty\n");}
#line 2746 "parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 1009 "parser.y" /* yacc.c:1646  */
    {

                expr* t=newexpr(newtable_e);
                t->sym =newtemp();
                emit(tablecreate,NULL,NULL,t,-1,nextquadlabel());
                int i=0;
                while((yyvsp[-1].expression)){
                    emit(tablesetelem,newexpr_constint(i++),(yyvsp[-1].expression),t,-1,nextquadlabel());
                    (yyvsp[-1].expression)=(yyvsp[-1].expression)->next;
                }
                (yyval.expression)=t;
                printf("objectdef-->[ elist ]\n");}
#line 2763 "parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 1021 "parser.y" /* yacc.c:1646  */
    {

                expr* t=newexpr(newtable_e);
                t->sym =newtemp();
                emit(tablecreate,NULL,NULL,t,-1,nextquadlabel());
                while((yyvsp[-1].expression)){
                    emit(tablesetelem,(yyvsp[-1].expression)->index,(yyvsp[-1].expression)->value,t,-1,nextquadlabel());
                    (yyvsp[-1].expression)=(yyvsp[-1].expression)->next;
                }
                (yyval.expression)=t;

                printf("objectdef-->[ indexed ]\n");}
#line 2780 "parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 1035 "parser.y" /* yacc.c:1646  */
    {
                (yyval.expression)=(yyvsp[-1].expression);
                (yyval.expression)->next=(yyvsp[0].expression);
                printf("indexed-->indexedelem clindexedelem\n");}
#line 2789 "parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 1041 "parser.y" /* yacc.c:1646  */
    {
                    (yyval.expression)=(yyvsp[-1].expression);
                    (yyval.expression)->next=(yyvsp[0].expression);
                    printf("clindexedelem-->, indexedelem clindexedelem\n");}
#line 2798 "parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1045 "parser.y" /* yacc.c:1646  */
    {
                (yyval.expression)=NULL;
                printf("clindexedelem-->empty\n");}
#line 2806 "parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1050 "parser.y" /* yacc.c:1646  */
    {
                (yyval.expression)=(yyvsp[-1].expression);
                (yyval.expression)->value=(yyvsp[-1].expression);
                printf("indexedelem-->{expr : expr }\n");}
#line 2815 "parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 1056 "parser.y" /* yacc.c:1646  */
    {(yyval.expression)=malloc(sizeof(expr));printf("block-->{}\n");}
#line 2821 "parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 1057 "parser.y" /* yacc.c:1646  */
    {scope++;}
#line 2827 "parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1057 "parser.y" /* yacc.c:1646  */
    {
            //    printf("$$ %p\n",$$);
            //    printf("$3 %p\n",$3);
            //    printf("$4 %p\n",$4);
                (yyval.expression)=malloc(sizeof(expr));
            if((yyvsp[-2].expression)&&(yyvsp[-1].expression)){
          //    printf("%p %p\n",$3->breaklist,$4->breaklist);
              (yyval.expression)->breaklist=merge((yyvsp[-2].expression)->breaklist,(yyvsp[-1].expression)->breaklist);
              (yyval.expression)->continuelist=merge((yyvsp[-2].expression)->continuelist,(yyvsp[-1].expression)->continuelist);
          //    printf("d %p \n",$$);
            }else {
                    if((yyvsp[-1].expression))(yyval.expression)=(yyvsp[-1].expression);
                    else if((yyvsp[-2].expression))(yyval.expression)=(yyvsp[-2].expression);
                  }

        //    printf("$$ %p\n",$$);
        //    printf("$3 %p\n",$3);
        //    printf("$4 %p\n",$4);
            printf("block-->{ stmt }\n");

            hide(scope);

            scope--;}
#line 2855 "parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1082 "parser.y" /* yacc.c:1646  */
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
              currentFunction->iaddress=nextquadlabel();
              currentFunction->newType=programfunc_s;
              jump_push(nextquadlabel());
              emit(jump,NULL,NULL,NULL,-1,nextquadlabel());
              emit(funcstart,NULL,NULL,lvalue_expr(currentFunction),-1,currQuad);
              retlist * ptr=NULL;
              retPush(ptr);
              func_push(currentFunction);
              offset_push(currscopeoffset());
              enterscopespace();
              resetformalargoffset();
              tempsymnode=currentFunction;
              }
#line 2885 "parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1106 "parser.y" /* yacc.c:1646  */
    {scope++;}
#line 2891 "parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1108 "parser.y" /* yacc.c:1646  */
    {}
#line 2897 "parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1108 "parser.y" /* yacc.c:1646  */
    {scope--;enterscopespace();resetfunctionlocalsoffset();}
#line 2903 "parser.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1109 "parser.y" /* yacc.c:1646  */
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
                      emit(funcend,NULL,NULL,lvalue_expr(func_pop()),-1,currQuad);
                      patchlabel(jump_pop(),nextquadlabel());
                      printf("funcdef-->function( idlist ) block \n");}
#line 2921 "parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1122 "parser.y" /* yacc.c:1646  */
    {

                      exitscopespace();
                      restorecurrscopeoffset(offset_pop());
                      (yyval.expression)=newexpr(programmfunc_e);
                      (yyval.expression)->sym=tempsymnode;
                      }
#line 2933 "parser.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1131 "parser.y" /* yacc.c:1646  */
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

                  currentFunction->iaddress=nextquadlabel();

                  currentFunction->newType=programfunc_s;
                  retlist * ptr=NULL;
                  retPush(ptr);
                  jump_push(nextquadlabel());

                  emit(jump,NULL,NULL,NULL,-1,nextquadlabel());
                  emit(funcstart,NULL,NULL,lvalue_expr(currentFunction),-1,currQuad);

                  func_push(currentFunction);

                  offset_push(currscopeoffset());

                  enterscopespace();
                  resetformalargoffset();
                  tempsymnode=currentFunction;

                  }
#line 2970 "parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1162 "parser.y" /* yacc.c:1646  */
    {scope++;}
#line 2976 "parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1163 "parser.y" /* yacc.c:1646  */
    {scope--;enterscopespace();resetfunctionlocalsoffset();}
#line 2982 "parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1164 "parser.y" /* yacc.c:1646  */
    {
                         if(topS()!=NULL){
                           retlist * tmp=retPop();
                           while(tmp!=NULL){
                             patchlabel(tmp->label,nextquadlabel());
                              tmp=tmp->next;
                           }
                         }
                          emit(funcend,NULL,NULL,lvalue_expr(func_pop()),-1,currQuad);
                          patchlabel(jump_pop(),nextquadlabel());
                          exitscopespace();
                          printf("funcdef-->function ID( idlist ) block \n");
                          }
#line 3000 "parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1177 "parser.y" /* yacc.c:1646  */
    {
                          exitscopespace();
                          restorecurrscopeoffset(offset_pop());
                          (yyval.expression)=newexpr(programmfunc_e);
                          (yyval.expression)->sym=tempsymnode;
                          }
#line 3011 "parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1185 "parser.y" /* yacc.c:1646  */
    {loop_push(loopcounter);
                loopcounter=0;
               }
#line 3019 "parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1190 "parser.y" /* yacc.c:1646  */
    {loopcounter=loop_pop();
             }
#line 3026 "parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1195 "parser.y" /* yacc.c:1646  */
    {if(scopeLookup(scope,yytext)!=NULL){
                printf("ERROR: invalid name in line %d\n",yylineno);
             }
             else if(checkIfLibFunc(yytext))
                printf("ERROR: collision with library function in line %d\n",yylineno);
             if(currentFunction!=NULL){ insertArguments(currentFunction,yytext)->offset=currscopeoffset();inccurrescopeoffset();}
             else {
                    insert(yytext,FORMAL,yylineno,scope);

                  }
             }
#line 3042 "parser.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1206 "parser.y" /* yacc.c:1646  */
    {printf("idlist--> ID cidlist\n");(yyval.expression)=malloc(sizeof(expr));}
#line 3048 "parser.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1207 "parser.y" /* yacc.c:1646  */
    {(yyval.expression)=NULL;currentFunction=NULL;printf("idlist-->empty\n");}
#line 3054 "parser.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1211 "parser.y" /* yacc.c:1646  */
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

            }
#line 3075 "parser.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1227 "parser.y" /* yacc.c:1646  */
    {printf("cidlist-->, ID cidlist\n");(yyval.expression)=malloc(sizeof(expr));}
#line 3081 "parser.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1228 "parser.y" /* yacc.c:1646  */
    {(yyval.expression)=NULL;currentFunction=NULL;printf("cidlist-->empty\n");}
#line 3087 "parser.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1233 "parser.y" /* yacc.c:1646  */
    {
                                    if((yyvsp[0].expression)->backpatch){
                                      expr* t=newexpr(boolexpr_e),*t1=newexpr(boolexpr_e),*arg=newexpr(var_e);
                                      t->type=constbool_e;
                                      t->boolConst=1;
                                      arg->type=var_e;
                                      arg->sym=newtemp();
                                      arg->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                                      strcpy(arg->strConst,arg->sym->name);
                                      backpatch((yyvsp[0].expression)->truelist,nextquadlabel());

                                      emit(assign,arg,NULL,t,-1,nextquadlabel());

                                      emit(jump,NULL,NULL,NULL,nextquadlabel()+2,nextquadlabel());
                                      t1->boolConst=0;
                                      t1->type=constbool_e;

                                      backpatch((yyvsp[0].expression)->falselist,nextquadlabel());
                                      emit(assign,arg,NULL,t1,-1,nextquadlabel());


                                      assignflag=0;

                                      (yyvsp[0].expression)=arg;
                                    }
                                        }
#line 3118 "parser.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1258 "parser.y" /* yacc.c:1646  */
    {
        emit(if_eq,(yyvsp[-2].expression),newexpr_constbool(1),NULL,nextquadlabel()+2,currQuad);
        (yyval.intValue)=nextquadlabel();
        emit(jump,NULL,NULL,NULL,0,currQuad);
        printf("ifstmt-->if(expr)stmt\n");
        }
#line 3129 "parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1266 "parser.y" /* yacc.c:1646  */
    {patchlabel((yyvsp[-1].intValue),nextquadlabel());(yyval.expression)=(yyvsp[0].expression);/*it will break dikio exeis*/}
#line 3135 "parser.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1267 "parser.y" /* yacc.c:1646  */
    {
                                      if((yyvsp[-2].expression)&&(yyvsp[0].expression)){
                                        (yyval.expression)=malloc(sizeof(expr));
                                        (yyvsp[-2].expression)->breaklist=merge((yyvsp[-2].expression)->breaklist,(yyvsp[0].expression)->breaklist);
                                        (yyvsp[-2].expression)->continuelist=merge((yyvsp[-2].expression)->continuelist,(yyvsp[0].expression)->continuelist);
                                        (yyval.expression)=(yyvsp[-2].expression);
                                      }
                                      else{
                                      if((yyvsp[-2].expression)){(yyval.expression)=(yyvsp[-2].expression);}
                                      else if((yyvsp[0].expression)){(yyval.expression)=(yyvsp[0].expression);}}
                                      patchlabel((yyvsp[-3].intValue),(yyvsp[-1].intValue)+1);patchlabel((yyvsp[-1].intValue),nextquadlabel());printf("ifstmt-->if(expr)stmt else stmt\n");}
#line 3151 "parser.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1280 "parser.y" /* yacc.c:1646  */
    {(yyval.intValue)=nextquadlabel();
                emit(jump,NULL,NULL,NULL,0,nextquadlabel());
                }
#line 3159 "parser.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1287 "parser.y" /* yacc.c:1646  */
    {

              emit(jump,NULL,NULL,NULL,(yyvsp[-2].intValue),nextquadlabel());
              patchlabel((yyvsp[-1].intValue),nextquadlabel());
 //printf("%p\n",$3);
              if((yyvsp[0].expression)){
            //    printf("%p\n",$3);
                backpatch((yyvsp[0].expression)->breaklist,nextquadlabel());
              //  printf("a\n");
                backpatch((yyvsp[0].expression)->continuelist,(yyvsp[-2].intValue));
              //  printf("a\n");
            }

          (yyval.expression)=(yyvsp[0].expression);
              printf("whilestmt-->while(expr)stmt\n");}
#line 3179 "parser.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1304 "parser.y" /* yacc.c:1646  */
    {
              (yyval.intValue)=nextquadlabel();
              }
#line 3187 "parser.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1309 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[0].expression)->backpatch){
                     expr* t=newexpr(boolexpr_e),*t1=newexpr(boolexpr_e),*arg=newexpr(var_e);
                     t->type=constbool_e;
                     t->boolConst=1;
                     arg->type=var_e;
                     arg->sym=newtemp();
                     arg->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                     strcpy(arg->strConst,arg->sym->name);
                     backpatch((yyvsp[0].expression)->truelist,nextquadlabel());

                     emit(assign,arg,NULL,t,-1,nextquadlabel());

                     emit(jump,NULL,NULL,NULL,nextquadlabel()+2,nextquadlabel());
                     t1->boolConst=0;
                     t1->type=constbool_e;

                     backpatch((yyvsp[0].expression)->falselist,nextquadlabel());
                     emit(assign,arg,NULL,t1,-1,nextquadlabel());


                     assignflag=0;

                     (yyvsp[0].expression)=arg;}}
#line 3215 "parser.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1331 "parser.y" /* yacc.c:1646  */
    {

            emit(if_eq,(yyvsp[-2].expression),newexpr_constbool(1),NULL,nextquadlabel()+2,nextquadlabel());
            (yyval.intValue)=nextquadlabel();
            emit(jump,NULL,NULL,NULL,0,nextquadlabel());

            }
#line 3227 "parser.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1341 "parser.y" /* yacc.c:1646  */
    {/*printf("l %p\n",$2);*/(yyval.expression)=(yyvsp[-1].expression);}
#line 3233 "parser.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1344 "parser.y" /* yacc.c:1646  */
    {++loopcounter;}
#line 3239 "parser.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1347 "parser.y" /* yacc.c:1646  */
    {--loopcounter;}
#line 3245 "parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1350 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[0].expression)->backpatch){
                                  expr* t=newexpr(boolexpr_e),*t1=newexpr(boolexpr_e),*arg=newexpr(var_e);
                                  t->type=constbool_e;
                                  t->boolConst=1;
                                  arg->type=var_e;
                                  arg->sym=newtemp();
                                  arg->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                                  strcpy(arg->strConst,arg->sym->name);
                                  backpatch((yyvsp[0].expression)->truelist,nextquadlabel());

                                  emit(assign,arg,NULL,t,-1,nextquadlabel());

                                  emit(jump,NULL,NULL,NULL,nextquadlabel()+2,nextquadlabel());
                                  t1->boolConst=0;
                                  t1->type=constbool_e;

                                  backpatch((yyvsp[0].expression)->falselist,nextquadlabel());
                                  emit(assign,arg,NULL,t1,-1,nextquadlabel());

                                  (yyvsp[0].expression)=arg;
                                  assignflag=0;


                              }
                            //  printf("here\n");
                        }
#line 3276 "parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1375 "parser.y" /* yacc.c:1646  */
    {
                                      (yyval.forStruct)=malloc(sizeof(struct forStruct));
                                      (yyval.forStruct)->test=(yyvsp[-3].intValue);
                                      (yyval.forStruct)->enter=nextquadlabel();




                                      emit(if_eq,(yyvsp[-2].expression),newexpr_constbool(1),NULL,0,nextquadlabel());

                                    }
#line 3292 "parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1389 "parser.y" /* yacc.c:1646  */
    {
                                        patchlabel((yyvsp[-6].forStruct)->enter,(yyvsp[-2].intValue)+1);
                                      //  printf("A\n");
                                        patchlabel((yyvsp[-5].intValue),nextquadlabel());
                                      //  printf("A\n");
                                        patchlabel((yyvsp[-2].intValue),(yyvsp[-6].forStruct)->test);
                                      //  printf("%p\n",$6);
                                        patchlabel((yyvsp[0].intValue),(yyvsp[-5].intValue)+1);
                                        if((yyvsp[-1].expression)){
                                          backpatch((yyvsp[-1].expression)->breaklist,nextquadlabel());
                                          backpatch((yyvsp[-1].expression)->continuelist,(yyvsp[-5].intValue)+1);
                                        }
                                        printf("forstmt-->for(elist;expr;elist;) stmt\n");}
#line 3310 "parser.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1405 "parser.y" /* yacc.c:1646  */
    {(yyval.intValue)=nextquadlabel();emit(jump,NULL,NULL,NULL,0,nextquadlabel());}
#line 3316 "parser.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1409 "parser.y" /* yacc.c:1646  */
    {if (scope==0)printf("Error use of return in scope 0 in line %d\n",yylineno);}
#line 3322 "parser.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1410 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[0].expression)->backpatch){
                        expr* t=newexpr(boolexpr_e),*t1=newexpr(boolexpr_e),*arg=newexpr(var_e);
                        t->type=constbool_e;
                        t->boolConst=1;
                        arg->type=var_e;
                        arg->sym=newtemp();
                        arg->strConst=malloc(sizeof(strlen(arg->sym->name))+1);
                        strcpy(arg->strConst,arg->sym->name);
                        backpatch((yyvsp[0].expression)->truelist,nextquadlabel());

                        emit(assign,arg,NULL,t,-1,nextquadlabel());

                        emit(jump,NULL,NULL,NULL,nextquadlabel()+2,nextquadlabel());
                        t1->boolConst=0;
                        t1->type=constbool_e;

                        backpatch((yyvsp[0].expression)->falselist,nextquadlabel());
                        emit(assign,arg,NULL,t1,-1,nextquadlabel());


                        assignflag=0;

                        (yyvsp[0].expression)=arg;}}
#line 3350 "parser.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1432 "parser.y" /* yacc.c:1646  */
    {
                        if(currscopespace()==functionlocal){
                                                emit(ret,(yyvsp[-2].expression),NULL,NULL,-1,nextquadlabel());
                                                insertRet(nextquadlabel());
                                                emit(jump,NULL,NULL,NULL,-1,nextquadlabel());
                                             }
                                                printf("returnstmt-->return expr;\n");(yyval.expression)=malloc(sizeof(expr));}
#line 3362 "parser.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1439 "parser.y" /* yacc.c:1646  */
    {if (scope==0)
                        printf("Error use of return in scope 0 in line %d\n",yylineno);
                      else{
                            if(currscopespace()==functionlocal){
                              emit(ret,NULL,NULL,NULL,-1,nextquadlabel());
                              //returnPatch=nextquadlabel();
                              insertRet(nextquadlabel());
                              emit(jump,NULL,NULL,NULL,-1,nextquadlabel());

                              }
                        }

                        }
#line 3380 "parser.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1451 "parser.y" /* yacc.c:1646  */
    {(yyval.expression)=malloc(sizeof(expr));
                        printf("returnstmt-->return;\n");}
#line 3387 "parser.c" /* yacc.c:1646  */
    break;


#line 3391 "parser.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 1456 "parser.y" /* yacc.c:1906  */


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
filePrintQuads();
return 0;
}
