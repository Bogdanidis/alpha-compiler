/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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
#line 140 "parser.y" /* yacc.c:1909  */

   char*  stringValue;
   int    intValue;
   double realValue;
   struct expr* expression;
   struct call* call;
   struct forStruct *forStruct;

#line 167 "parser.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */
