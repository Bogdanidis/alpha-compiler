
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 139 "parser.y"

   char*  stringValue;
   int    intValue;
   double realValue;
   struct expr* expression;
   struct call* call;
   struct forStruct *forStruct;



/* Line 1676 of yacc.c  */
#line 115 "parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


