/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_IGRAPH_PAJEK_YY_SCRATCH_USERS_MD724_IGRAPH_PROJECT_BUILD_IGRAPH_BUILD_SRC_IO_PARSERS_PAJEK_PARSER_H_INCLUDED
# define YY_IGRAPH_PAJEK_YY_SCRATCH_USERS_MD724_IGRAPH_PROJECT_BUILD_IGRAPH_BUILD_SRC_IO_PARSERS_PAJEK_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int igraph_pajek_yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    END = 0,
    NEWLINE = 258,
    NUM = 259,
    ALNUM = 260,
    QSTR = 261,
    NETWORKLINE = 262,
    VERTICESLINE = 263,
    ARCSLINE = 264,
    EDGESLINE = 265,
    ARCSLISTLINE = 266,
    EDGESLISTLINE = 267,
    MATRIXLINE = 268,
    ERROR = 269,
    VP_X_FACT = 270,
    VP_Y_FACT = 271,
    VP_PHI = 272,
    VP_R = 273,
    VP_Q = 274,
    VP_IC = 275,
    VP_BC = 276,
    VP_BW = 277,
    VP_LC = 278,
    VP_LA = 279,
    VP_LR = 280,
    VP_LPHI = 281,
    VP_FOS = 282,
    VP_FONT = 283,
    VP_URL = 284,
    EP_H1 = 285,
    EP_H2 = 286,
    EP_W = 287,
    EP_C = 288,
    EP_P = 289,
    EP_A = 290,
    EP_S = 291,
    EP_A1 = 292,
    EP_K1 = 293,
    EP_A2 = 294,
    EP_K2 = 295,
    EP_AP = 296,
    EP_L = 297,
    EP_LP = 298,
    EP_LR = 299,
    EP_LPHI = 300,
    EP_LC = 301,
    EP_LA = 302,
    EP_FOS = 303,
    EP_FONT = 304
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{


  igraph_integer_t intnum;
  igraph_real_t    realnum;
  struct {
    char *str;
    size_t len;
  } string;
  char *dynstr;


};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int igraph_pajek_yyparse (igraph_i_pajek_parsedata_t* context);

#endif /* !YY_IGRAPH_PAJEK_YY_SCRATCH_USERS_MD724_IGRAPH_PROJECT_BUILD_IGRAPH_BUILD_SRC_IO_PARSERS_PAJEK_PARSER_H_INCLUDED  */
