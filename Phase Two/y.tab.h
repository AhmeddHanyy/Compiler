
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
     INT = 258,
     FLOAT = 259,
     CHAR = 260,
     STRING = 261,
     BOOL = 262,
     CONST = 263,
     VOID = 264,
     PLUS = 265,
     MINUS = 266,
     MULTIPLY = 267,
     DIVIDE = 268,
     POWER = 269,
     ASSIGN = 270,
     AND = 271,
     OR = 272,
     NOT = 273,
     EQ = 274,
     NEQ = 275,
     LT = 276,
     GT = 277,
     LE = 278,
     GE = 279,
     IF = 280,
     ELSE = 281,
     WHILE = 282,
     DO = 283,
     RETURN = 284,
     FOR = 285,
     BREAK = 286,
     CONTINUE = 287,
     SWITCH = 288,
     CASE = 289,
     DEFAULT = 290,
     INTEGER_VAL = 291,
     FLOAT_VAL = 292,
     STRING_VAL = 293,
     CHAR_VAL = 294,
     BOOL_VAL = 295,
     IDENTIFIER = 296
   };
#endif
/* Tokens.  */
#define INT 258
#define FLOAT 259
#define CHAR 260
#define STRING 261
#define BOOL 262
#define CONST 263
#define VOID 264
#define PLUS 265
#define MINUS 266
#define MULTIPLY 267
#define DIVIDE 268
#define POWER 269
#define ASSIGN 270
#define AND 271
#define OR 272
#define NOT 273
#define EQ 274
#define NEQ 275
#define LT 276
#define GT 277
#define LE 278
#define GE 279
#define IF 280
#define ELSE 281
#define WHILE 282
#define DO 283
#define RETURN 284
#define FOR 285
#define BREAK 286
#define CONTINUE 287
#define SWITCH 288
#define CASE 289
#define DEFAULT 290
#define INTEGER_VAL 291
#define FLOAT_VAL 292
#define STRING_VAL 293
#define CHAR_VAL 294
#define BOOL_VAL 295
#define IDENTIFIER 296




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 17 "yacc.y"

    char* intValue;
    char* floatValue;
    char charValue;
    char* stringValue;
    char* boolValue;
    char* idValue;



/* Line 1676 of yacc.c  */
#line 145 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


