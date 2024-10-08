/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         igraph_pajek_yyparse
#define yylex           igraph_pajek_yylex
#define yyerror         igraph_pajek_yyerror
#define yydebug         igraph_pajek_yydebug
#define yynerrs         igraph_pajek_yynerrs


/* Copy the first part of user declarations.  */



/*
   IGraph library.
   Copyright (C) 2006-2012  Gabor Csardi <csardi.gabor@gmail.com>
   334 Harvard st, Cambridge, MA, 02138 USA

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc.,  51 Franklin Street, Fifth Floor, Boston, MA
   02110-1301 USA

*/

#include "igraph_attributes.h"
#include "igraph_error.h"
#include "igraph_memory.h"
#include "igraph_types.h"

#include "io/pajek-header.h"
#include "io/parsers/pajek-parser.h" /* it must come first because of YYSTYPE */
#include "io/parsers/pajek-lexer.h"
#include "io/parse_utils.h"
#include "internal/hacks.h" /* strdup */

#include <stdio.h>
#include <string.h>
#include <math.h>

int igraph_pajek_yyerror(YYLTYPE* locp,
                         igraph_i_pajek_parsedata_t *context,
                         const char *s);

static igraph_error_t add_string_vertex_attribute(const char *name,
                                               const char *value,
                                               size_t len,
                                               igraph_i_pajek_parsedata_t *context);
static igraph_error_t add_string_edge_attribute(const char *name,
                                             const char *value,
                                             size_t len,
                                             igraph_i_pajek_parsedata_t *context);
static igraph_error_t add_numeric_vertex_attribute(const char *name,
                                                igraph_real_t value,
                                                igraph_i_pajek_parsedata_t *context);
static igraph_error_t add_numeric_edge_attribute(const char *name,
                                              igraph_real_t value,
                                              igraph_i_pajek_parsedata_t *context);
static igraph_error_t add_numeric_attribute(igraph_trie_t *names,
                                         igraph_vector_ptr_t *attrs,
                                         igraph_integer_t count,
                                         const char *attrname,
                                         igraph_integer_t vid,
                                         igraph_real_t number);
static igraph_error_t add_string_attribute(igraph_trie_t *names,
                                        igraph_vector_ptr_t *attrs,
                                        igraph_integer_t count,
                                        const char *attrname,
                                        igraph_integer_t vid,
                                        const char *str,
                                        igraph_integer_t str_len);

static igraph_error_t add_bipartite_type(igraph_i_pajek_parsedata_t *context);
static igraph_error_t check_bipartite(igraph_i_pajek_parsedata_t *context);

static igraph_error_t make_dynstr(const char *src, size_t len, char **res);
static igraph_bool_t is_standard_vattr(const char *attrname);
static igraph_bool_t is_standard_eattr(const char *attrname);
static igraph_error_t deconflict_attrname(char **attrname);

#define scanner context->scanner




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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "pajek-parser.h".  */
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

/* Copy the second part of user declarations.  */



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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   215

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  178

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

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
      45,    46,    47,    48,    49
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   188,   188,   199,   199,   201,   201,   203,   205,   216,
     235,   235,   237,   238,   238,   248,   267,   272,   273,   277,
     283,   283,   287,   287,   290,   291,   294,   297,   300,   303,
     306,   309,   312,   315,   318,   323,   326,   329,   332,   335,
     338,   353,   353,   353,   353,   353,   353,   355,   356,   358,
     358,   360,   360,   365,   366,   368,   368,   370,   370,   375,
     375,   379,   379,   382,   383,   386,   389,   392,   395,   398,
     401,   404,   407,   410,   413,   416,   419,   422,   427,   430,
     433,   436,   439,   442,   445,   460,   462,   462,   464,   466,
     466,   468,   470,   475,   477,   477,   479,   481,   481,   483,
     485,   492,   494,   499,   499,   501,   503,   503,   505,   525,
     533,   541,   545,   547,   549,   551
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined", "\"end of line\"",
  "\"number\"", "\"word\"", "\"quoted string\"", "\"*Network line\"",
  "\"*Vertices line\"", "\"*Arcs line\"", "\"*Edges line\"",
  "\"*Arcslist line\"", "\"*Edgeslist line\"", "\"*Matrix line\"", "ERROR",
  "VP_X_FACT", "VP_Y_FACT", "VP_PHI", "VP_R", "VP_Q", "VP_IC", "VP_BC",
  "VP_BW", "VP_LC", "VP_LA", "VP_LR", "VP_LPHI", "VP_FOS", "VP_FONT",
  "VP_URL", "EP_H1", "EP_H2", "EP_W", "EP_C", "EP_P", "EP_A", "EP_S",
  "EP_A1", "EP_K1", "EP_A2", "EP_K2", "EP_AP", "EP_L", "EP_LP", "EP_LR",
  "EP_LPHI", "EP_LC", "EP_LA", "EP_FOS", "EP_FONT", "$accept", "input",
  "final_newlines", "nethead", "vertices", "verticeshead", "vertdefs",
  "vertexline", "$@1", "vertex", "vertexid", "vertexcoords", "shape",
  "vertparams", "vertparam", "vpword", "edgeblock", "arcs", "arcsdefs",
  "arcsline", "$@2", "edges", "edgesdefs", "edgesline", "$@3", "weight",
  "edgeparams", "edgeparam", "epword", "arcslist", "arcslistlines",
  "arclistline", "arctolist", "arclistfrom", "arclistto", "edgeslist",
  "edgelistlines", "edgelistline", "edgetolist", "edgelistfrom",
  "edgelistto", "adjmatrix", "matrixline", "adjmatrixlines",
  "adjmatrixline", "adjmatrixnumbers", "adjmatrixentry", "integer",
  "number", "parname", "parstrval", "word", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
# endif

#define YYPACT_NINF -95

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-95)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       2,   -95,    20,     6,   -95,    18,   -95,    26,   -95,    18,
      47,   -95,   -95,    29,     1,    14,    34,    39,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,    40,    18,   -95,   -95,   -95,
      42,   -95,    44,   -95,   -95,   -95,   -95,    51,   -95,    18,
     -95,    18,   -95,    18,    18,    57,   -95,     7,    18,   -95,
      18,    18,   -95,    18,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,    52,    57,   -95,   -95,   -95,   -95,    57,   -95,   -95,
     -95,    32,    36,   -95,   -95,     7,    57,    57,    57,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,    57,   -95,   -95,
     -95,   186,   -95,    92,   139,   -95,    57,    57,    57,    57,
      57,     7,     7,    57,     7,    57,    57,    57,    57,     7,
       7,   -95,   -95,     7,   -95,   -95,    57,    57,    57,     7,
       7,     7,    57,    57,    57,    57,    57,    57,     7,    57,
      57,    57,     7,    57,    57,     7,   -95,   -95,     7,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     6,     0,     0,     1,     0,    41,     0,   109,     8,
       3,    10,     9,     3,     0,     0,     0,     0,   102,     2,
      42,    43,    44,    45,    46,     0,     7,     4,    49,   110,
       0,    55,     0,    86,    94,   103,    11,    13,    15,    47,
      49,    53,    55,    85,    93,   101,    12,     0,     0,    50,
      48,     0,    56,    54,    91,    87,    89,    99,    95,    97,
     104,     0,   106,   108,   114,   113,   115,    17,    16,    51,
      57,     0,     0,   105,   107,    20,     0,    59,    59,    88,
      92,    90,    96,   100,    98,    22,    21,    18,    61,    60,
      61,     0,    19,     0,     0,    14,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    23,    24,     0,   111,    52,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    62,    63,     0,    58,
      25,    26,    31,    32,    33,    37,   112,    38,    29,    39,
      34,    27,    28,    30,    35,    36,    40,    66,    67,    65,
      82,    79,    78,    64,    68,    70,    69,    71,    72,    80,
      73,    74,    75,    81,    76,    77,    83,    84
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -95,   -95,    53,   -95,   -95,   -95,   -95,   -95,   -95,   -20,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,    25,   -95,
     -95,   -95,    27,   -95,   -95,   -11,   -22,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,     8,   -95,    -2,   -14,   -19,
     -94,   -45
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    19,     3,     6,     7,    26,    36,    47,    48,
      67,    75,    85,    91,   111,   112,    10,    20,    39,    49,
      77,    21,    41,    52,    78,    88,    93,   136,   137,    22,
      43,    55,    71,    56,    81,    23,    44,    58,    72,    59,
      84,    24,    25,    45,    60,    61,    62,    38,    63,   138,
     145,   146
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      30,    32,    68,     9,    28,    29,    37,    12,   147,     1,
     149,    64,    65,    66,     5,   154,   155,    31,    29,   156,
       4,    51,     8,    54,    57,   160,   161,   162,    69,    11,
      86,    70,    13,    51,   169,    79,     8,    33,   173,    82,
       8,   176,    34,    35,   177,    40,   114,    42,   114,   114,
      13,    80,    83,    76,    46,    73,    14,    15,    16,    17,
      18,    29,    87,    89,    89,    50,    27,    90,    94,    53,
      74,     0,   113,    92,     0,     0,     0,     0,     0,     0,
       0,     0,   140,   141,   142,   143,   144,     0,     0,   148,
       0,   150,   151,   152,   153,   115,    64,    65,    66,     0,
       0,     0,   157,   158,   159,     0,     0,     0,   163,   164,
     165,   166,   167,   168,     0,   170,   171,   172,     0,   174,
     175,     0,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   139,    64,    65,    66,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,    95,
      64,    65,    66,     0,     0,     0,     0,     0,     0,     0,
       0,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110
};

static const yytype_int16 yycheck[] =
{
      14,    15,    47,     5,     3,     4,    26,     9,   102,     7,
     104,     4,     5,     6,     8,   109,   110,     3,     4,   113,
       0,    41,     4,    43,    44,   119,   120,   121,    48,     3,
      75,    51,     3,    53,   128,     3,     4,     3,   132,     3,
       4,   135,     3,     3,   138,     3,    91,     3,    93,    94,
       3,    71,    72,    67,     3,     3,     9,    10,    11,    12,
      13,     4,    76,    77,    78,    40,    13,    78,    90,    42,
      62,    -1,    91,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,   100,    -1,    -1,   103,
      -1,   105,   106,   107,   108,     3,     4,     5,     6,    -1,
      -1,    -1,   116,   117,   118,    -1,    -1,    -1,   122,   123,
     124,   125,   126,   127,    -1,   129,   130,   131,    -1,   133,
     134,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    51,    53,     0,     8,    54,    55,     4,    97,
      66,     3,    97,     3,     9,    10,    11,    12,    13,    52,
      67,    71,    79,    85,    91,    92,    56,    52,     3,     4,
      98,     3,    98,     3,     3,     3,    57,    59,    97,    68,
       3,    72,     3,    80,    86,    93,     3,    58,    59,    69,
      68,    59,    73,    72,    59,    81,    83,    59,    87,    89,
      94,    95,    96,    98,     4,     5,     6,    60,   101,    59,
      59,    82,    88,     3,    95,    61,    98,    70,    74,     3,
      59,    84,     3,    59,    90,    62,   101,    98,    75,    98,
      75,    63,    98,    76,    76,     3,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    64,    65,    99,   101,     3,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    77,    78,    99,     3,
      98,    98,    98,    98,    98,   100,   101,   100,    98,   100,
      98,    98,    98,    98,   100,   100,   100,    98,    98,    98,
     100,   100,   100,    98,    98,    98,    98,    98,    98,   100,
      98,    98,    98,   100,    98,    98,   100,   100
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    53,    54,    55,    55,
      56,    56,    57,    58,    57,    59,    60,    61,    61,    61,
      62,    62,    63,    63,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    65,    65,    65,    65,    65,
      65,    66,    66,    66,    66,    66,    66,    67,    67,    68,
      68,    70,    69,    71,    71,    72,    72,    74,    73,    75,
      75,    76,    76,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    78,    78,
      78,    78,    78,    78,    78,    79,    80,    80,    81,    82,
      82,    83,    84,    85,    86,    86,    87,    88,    88,    89,
      90,    91,    92,    93,    93,    94,    95,    95,    96,    97,
      98,    99,   100,   101,   101,   101
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     0,     2,     0,     1,     3,     2,     3,
       0,     2,     2,     0,     7,     1,     1,     0,     2,     3,
       0,     1,     0,     2,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     0,     2,     2,     2,     2,     2,     3,     4,     0,
       2,     0,     6,     3,     4,     0,     2,     0,     6,     0,
       1,     0,     2,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     3,     0,     2,     3,     0,
       2,     1,     1,     3,     0,     2,     3,     0,     2,     1,
       1,     3,     1,     0,     2,     2,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1
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
      yyerror (&yylloc, context, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, context); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, igraph_i_pajek_parsedata_t* context)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (context);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, igraph_i_pajek_parsedata_t* context)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, context);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, igraph_i_pajek_parsedata_t* context)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , context);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, context); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, igraph_i_pajek_parsedata_t* context)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (context);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 99: /* parname  */

      { free(((*yyvaluep).dynstr)); }

        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (igraph_i_pajek_parsedata_t* context)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yychar = yylex (&yylval, &yylloc, scanner);
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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

    {
  if (context->vcount2 > 0) { check_bipartite(context); }
  if (! context->eof) {
    /* In Pajek files, an empty line after *Vertices signifies the end of the network data.
     * If there is more data after one or more empty lines, we warn the user, as this
     * may indicate file corruption, for example a stray empty lines before *Edges. */
    IGRAPH_WARNINGF("Empty line encountered, ignoring rest of file after line %d.", (yylsp[0]).first_line);
  }
  YYACCEPT; /* stop parsing even if there is more data in the file. */
 }

    break;

  case 8:

    {
  context->vcount=(yyvsp[0].intnum);
  context->vcount2=0;
  if (context->vcount < 0) {
    IGRAPH_YY_ERRORF("Invalid vertex count in Pajek file (%" IGRAPH_PRId ").", IGRAPH_EINVAL, context->vcount);
  }
  if (context->vcount > IGRAPH_PAJEK_MAX_VERTEX_COUNT) {
    IGRAPH_YY_ERRORF("Vertex count too large in Pajek file (%" IGRAPH_PRId ").", IGRAPH_EINVAL, context->vcount);
  }
  IGRAPH_YY_CHECK(igraph_bitset_resize(context->seen, context->vcount));
            }

    break;

  case 9:

    {
  context->vcount=(yyvsp[-1].intnum);
  context->vcount2=(yyvsp[0].intnum);
  if (context->vcount < 0) {
    IGRAPH_YY_ERRORF("Invalid vertex count in Pajek file (%" IGRAPH_PRId ").", IGRAPH_EINVAL, context->vcount);
  }
  if (context->vcount > IGRAPH_PAJEK_MAX_VERTEX_COUNT) {
    IGRAPH_YY_ERRORF("Vertex count too large in Pajek file (%" IGRAPH_PRId ").", IGRAPH_EINVAL, context->vcount);
  }
  if (context->vcount2 < 0) {
    IGRAPH_YY_ERRORF("Invalid two-mode vertex count in Pajek file (%" IGRAPH_PRId ").", IGRAPH_EINVAL, context->vcount2);
  }
  if (context->vcount2 > IGRAPH_PAJEK_MAX_VERTEX_COUNT) {
    IGRAPH_YY_ERRORF("2-mode vertex count too large in Pajek file (%" IGRAPH_PRId ").", IGRAPH_EINVAL, context->vcount2);
  }
  IGRAPH_YY_CHECK(add_bipartite_type(context));
  IGRAPH_YY_CHECK(igraph_bitset_resize(context->seen, context->vcount));
}

    break;

  case 13:

    { context->actvertex=(yyvsp[0].intnum); }

    break;

  case 14:

    {
              igraph_integer_t v = (yyvsp[-6].intnum)-1; /* zero-based vertex ID */
              if (IGRAPH_BIT_TEST(*context->seen, v)) {
                IGRAPH_WARNINGF("Vertex ID %" IGRAPH_PRId " appears twice in Pajek file. Duplicate attributes will be overwritten.", v+1);
              } else {
                IGRAPH_BIT_SET(*context->seen, v);
              }
            }

    break;

  case 15:

    {
  igraph_integer_t v = (yyvsp[0].intnum);
  /* Per feedback from Pajek's authors, negative signs should be ignored for vertex IDs.
   * See https://nascol.discourse.group/t/pajek-arcslist-edgelist-format/44/2
   * This applies to all of *Edges, *Arcs, *Edgeslist, *Arcslist and *Vertices section.
   * IGRAPH_INTEGER_MIN cannot be negated on typical platforms so we keep it as-is.
   */
  if (v < 0 && v > IGRAPH_INTEGER_MIN) {
    v = -v;
  }
  if (v < 1 || v > context->vcount) {
      IGRAPH_YY_ERRORF(
                  "Invalid vertex ID (%" IGRAPH_PRId ") in Pajek file. "
                  "The number of vertices is %" IGRAPH_PRId ".",
                  IGRAPH_EINVAL, v, context->vcount);
  }
  (yyval.intnum) = v;
}

    break;

  case 16:

    {
  IGRAPH_YY_CHECK(add_string_vertex_attribute("id", (yyvsp[0].string).str, (yyvsp[0].string).len, context));
  IGRAPH_YY_CHECK(add_string_vertex_attribute("name", (yyvsp[0].string).str, (yyvsp[0].string).len, context));
}

    break;

  case 18:

    {
  IGRAPH_YY_CHECK(add_numeric_vertex_attribute("x", (yyvsp[-1].realnum), context));
  IGRAPH_YY_CHECK(add_numeric_vertex_attribute("y", (yyvsp[0].realnum), context));
            }

    break;

  case 19:

    {
  IGRAPH_YY_CHECK(add_numeric_vertex_attribute("x", (yyvsp[-2].realnum), context));
  IGRAPH_YY_CHECK(add_numeric_vertex_attribute("y", (yyvsp[-1].realnum), context));
  IGRAPH_YY_CHECK(add_numeric_vertex_attribute("z", (yyvsp[0].realnum), context));
            }

    break;

  case 21:

    {
  IGRAPH_YY_CHECK(add_string_vertex_attribute("shape", (yyvsp[0].string).str, (yyvsp[0].string).len, context));
}

    break;

  case 25:

    {
         IGRAPH_YY_CHECK(add_numeric_vertex_attribute("xfact", (yyvsp[0].realnum), context));
       }

    break;

  case 26:

    {
         IGRAPH_YY_CHECK(add_numeric_vertex_attribute("yfact", (yyvsp[0].realnum), context));
       }

    break;

  case 27:

    {
         IGRAPH_YY_CHECK(add_numeric_vertex_attribute("labeldist", (yyvsp[0].realnum), context));
     }

    break;

  case 28:

    {
         IGRAPH_YY_CHECK(add_numeric_vertex_attribute("labeldegree2", (yyvsp[0].realnum), context));
     }

    break;

  case 29:

    {
         IGRAPH_YY_CHECK(add_numeric_vertex_attribute("framewidth", (yyvsp[0].realnum), context));
     }

    break;

  case 30:

    {
         IGRAPH_YY_CHECK(add_numeric_vertex_attribute("fontsize", (yyvsp[0].realnum), context));
     }

    break;

  case 31:

    {
         IGRAPH_YY_CHECK(add_numeric_vertex_attribute("rotation", (yyvsp[0].realnum), context));
     }

    break;

  case 32:

    {
         IGRAPH_YY_CHECK(add_numeric_vertex_attribute("radius", (yyvsp[0].realnum), context));
     }

    break;

  case 33:

    {
         IGRAPH_YY_CHECK(add_numeric_vertex_attribute("diamondratio", (yyvsp[0].realnum), context));
     }

    break;

  case 34:

    {
         IGRAPH_YY_CHECK(add_numeric_vertex_attribute("labeldegree", (yyvsp[0].realnum), context));
     }

    break;

  case 35:

    {
         IGRAPH_YY_CHECK(add_string_vertex_attribute("font", (yyvsp[0].string).str, (yyvsp[0].string).len, context));
     }

    break;

  case 36:

    {
         IGRAPH_YY_CHECK(add_string_vertex_attribute("url", (yyvsp[0].string).str, (yyvsp[0].string).len, context));
     }

    break;

  case 37:

    {
         IGRAPH_YY_CHECK(add_string_vertex_attribute("color", (yyvsp[0].string).str, (yyvsp[0].string).len, context));
     }

    break;

  case 38:

    {
         IGRAPH_YY_CHECK(add_string_vertex_attribute("framecolor", (yyvsp[0].string).str, (yyvsp[0].string).len, context));
     }

    break;

  case 39:

    {
         IGRAPH_YY_CHECK(add_string_vertex_attribute("labelcolor", (yyvsp[0].string).str, (yyvsp[0].string).len, context));
     }

    break;

  case 40:

    {
         IGRAPH_FINALLY(igraph_free, (yyvsp[-1].dynstr));
         if (is_standard_vattr((yyvsp[-1].dynstr))) {
          IGRAPH_YY_CHECK(deconflict_attrname(&(yyvsp[-1].dynstr)));
          /* update address on finally stack */
          IGRAPH_FINALLY_CLEAN(1);
          IGRAPH_FINALLY(igraph_free, (yyvsp[-1].dynstr));
         }
         IGRAPH_YY_CHECK(add_string_vertex_attribute(
           (yyvsp[-1].dynstr), (yyvsp[0].string).str, (yyvsp[0].string).len, context));
         IGRAPH_FREE((yyvsp[-1].dynstr));
         IGRAPH_FINALLY_CLEAN(1);
     }

    break;

  case 47:

    { context->directed=true; }

    break;

  case 48:

    { context->directed=true; }

    break;

  case 51:

    { context->actedge++; }

    break;

  case 52:

    {
  IGRAPH_YY_CHECK(igraph_vector_int_push_back(context->vector, (yyvsp[-5].intnum)-1));
  IGRAPH_YY_CHECK(igraph_vector_int_push_back(context->vector, (yyvsp[-4].intnum)-1)); }

    break;

  case 53:

    { context->directed=0; }

    break;

  case 54:

    { context->directed=0; }

    break;

  case 57:

    { context->actedge++; }

    break;

  case 58:

    {
  IGRAPH_YY_CHECK(igraph_vector_int_push_back(context->vector, (yyvsp[-5].intnum)-1));
  IGRAPH_YY_CHECK(igraph_vector_int_push_back(context->vector, (yyvsp[-4].intnum)-1)); }

    break;

  case 60:

    {
  IGRAPH_YY_CHECK(add_numeric_edge_attribute("weight", (yyvsp[0].realnum), context));
}

    break;

  case 64:

    {
       IGRAPH_YY_CHECK(add_numeric_edge_attribute("arrowsize", (yyvsp[0].realnum), context));
   }

    break;

  case 65:

    {
       IGRAPH_YY_CHECK(add_numeric_edge_attribute("edgewidth", (yyvsp[0].realnum), context));
   }

    break;

  case 66:

    {
       IGRAPH_YY_CHECK(add_numeric_edge_attribute("hook1", (yyvsp[0].realnum), context));
   }

    break;

  case 67:

    {
       IGRAPH_YY_CHECK(add_numeric_edge_attribute("hook2", (yyvsp[0].realnum), context));
   }

    break;

  case 68:

    {
       IGRAPH_YY_CHECK(add_numeric_edge_attribute("angle1", (yyvsp[0].realnum), context));
   }

    break;

  case 69:

    {
       IGRAPH_YY_CHECK(add_numeric_edge_attribute("angle2", (yyvsp[0].realnum), context));
   }

    break;

  case 70:

    {
       IGRAPH_YY_CHECK(add_numeric_edge_attribute("velocity1", (yyvsp[0].realnum), context));
   }

    break;

  case 71:

    {
       IGRAPH_YY_CHECK(add_numeric_edge_attribute("velocity2", (yyvsp[0].realnum), context));
   }

    break;

  case 72:

    {
       IGRAPH_YY_CHECK(add_numeric_edge_attribute("arrowpos", (yyvsp[0].realnum), context));
   }

    break;

  case 73:

    {
       IGRAPH_YY_CHECK(add_numeric_edge_attribute("labelpos", (yyvsp[0].realnum), context));
   }

    break;

  case 74:

    {
       IGRAPH_YY_CHECK(add_numeric_edge_attribute("labelangle", (yyvsp[0].realnum), context));
   }

    break;

  case 75:

    {
       IGRAPH_YY_CHECK(add_numeric_edge_attribute("labelangle2", (yyvsp[0].realnum), context));
   }

    break;

  case 76:

    {
       IGRAPH_YY_CHECK(add_numeric_edge_attribute("labeldegree", (yyvsp[0].realnum), context));
   }

    break;

  case 77:

    {
       IGRAPH_YY_CHECK(add_numeric_edge_attribute("fontsize", (yyvsp[0].realnum), context));
   }

    break;

  case 78:

    {
      IGRAPH_YY_CHECK(add_string_edge_attribute("arrowtype", (yyvsp[0].string).str, (yyvsp[0].string).len, context));
    }

    break;

  case 79:

    {
      IGRAPH_YY_CHECK(add_string_edge_attribute("linepattern", (yyvsp[0].string).str, (yyvsp[0].string).len, context));
    }

    break;

  case 80:

    {
      IGRAPH_YY_CHECK(add_string_edge_attribute("label", (yyvsp[0].string).str, (yyvsp[0].string).len, context));
    }

    break;

  case 81:

    {
      IGRAPH_YY_CHECK(add_string_edge_attribute("labelcolor", (yyvsp[0].string).str, (yyvsp[0].string).len, context));
    }

    break;

  case 82:

    {
      IGRAPH_YY_CHECK(add_string_edge_attribute("color", (yyvsp[0].string).str, (yyvsp[0].string).len, context));
    }

    break;

  case 83:

    {
      IGRAPH_YY_CHECK(add_string_edge_attribute("font", (yyvsp[0].string).str, (yyvsp[0].string).len, context));
    }

    break;

  case 84:

    {
        IGRAPH_FINALLY(igraph_free, (yyvsp[-1].dynstr));
        if (is_standard_eattr((yyvsp[-1].dynstr))) {
          IGRAPH_YY_CHECK(deconflict_attrname(&(yyvsp[-1].dynstr)));
          /* update address on finally stack */
          IGRAPH_FINALLY_CLEAN(1);
          IGRAPH_FINALLY(igraph_free, (yyvsp[-1].dynstr));
        }
        IGRAPH_YY_CHECK(add_string_edge_attribute(
           (yyvsp[-1].dynstr), (yyvsp[0].string).str, (yyvsp[0].string).len, context));
        IGRAPH_FREE((yyvsp[-1].dynstr));
        IGRAPH_FINALLY_CLEAN(1);
     }

    break;

  case 85:

    { context->directed=true; }

    break;

  case 91:

    { context->actfrom=(yyvsp[0].intnum)-1; }

    break;

  case 92:

    {
  IGRAPH_YY_CHECK(igraph_vector_int_push_back(context->vector, context->actfrom));
  IGRAPH_YY_CHECK(igraph_vector_int_push_back(context->vector, (yyvsp[0].intnum)-1));
}

    break;

  case 93:

    { context->directed=0; }

    break;

  case 99:

    { context->actfrom=(yyvsp[0].intnum)-1; }

    break;

  case 100:

    {
  IGRAPH_YY_CHECK(igraph_vector_int_push_back(context->vector, context->actfrom));
  IGRAPH_YY_CHECK(igraph_vector_int_push_back(context->vector, (yyvsp[0].intnum)-1));
}

    break;

  case 102:

    { context->actfrom=0;
                         context->actto=0;
                         context->directed=(context->vcount2==0);
                       }

    break;

  case 105:

    { context->actfrom++; context->actto=0; }

    break;

  case 108:

    {
  if ((yyvsp[0].realnum) != 0) {
    if (context->vcount2==0) {
      context->actedge++;
      IGRAPH_YY_CHECK(add_numeric_edge_attribute("weight", (yyvsp[0].realnum), context));
      IGRAPH_YY_CHECK(igraph_vector_int_push_back(context->vector, context->actfrom));
      IGRAPH_YY_CHECK(igraph_vector_int_push_back(context->vector, context->actto));
    } else if (context->vcount2 + context->actto < context->vcount) {
      context->actedge++;
      IGRAPH_YY_CHECK(add_numeric_edge_attribute("weight", (yyvsp[0].realnum), context));
      IGRAPH_YY_CHECK(igraph_vector_int_push_back(context->vector, context->actfrom));
      IGRAPH_YY_CHECK(igraph_vector_int_push_back(context->vector,
                              context->vcount2+context->actto));
    }
  }
  context->actto++;
}

    break;

  case 109:

    {
  igraph_integer_t val;
  IGRAPH_YY_CHECK(igraph_i_parse_integer(igraph_pajek_yyget_text(scanner),
                                         igraph_pajek_yyget_leng(scanner),
                                         &val));
  (yyval.intnum)=val;
}

    break;

  case 110:

    {
  igraph_real_t val;
  IGRAPH_YY_CHECK(igraph_i_parse_real(igraph_pajek_yyget_text(scanner),
                                      igraph_pajek_yyget_leng(scanner),
                                      &val));
  (yyval.realnum)=val;
}

    break;

  case 111:

    {
  IGRAPH_YY_CHECK(make_dynstr((yyvsp[0].string).str, (yyvsp[0].string).len, &(yyval.dynstr)));
}

    break;

  case 112:

    { (yyval.string)=(yyvsp[0].string); }

    break;

  case 113:

    { (yyval.string).str=igraph_pajek_yyget_text(scanner);
              (yyval.string).len=igraph_pajek_yyget_leng(scanner); }

    break;

  case 114:

    { (yyval.string).str=igraph_pajek_yyget_text(scanner);
              (yyval.string).len=igraph_pajek_yyget_leng(scanner); }

    break;

  case 115:

    { (yyval.string).str=igraph_pajek_yyget_text(scanner)+1;
               (yyval.string).len=igraph_pajek_yyget_leng(scanner)-2; }

    break;



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
  *++yylsp = yyloc;

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
      yyerror (&yylloc, context, YY_("syntax error"));
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
        yyerror (&yylloc, context, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc, context);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, context);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
  yyerror (&yylloc, context, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, context);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, context);
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



int igraph_pajek_yyerror(YYLTYPE* locp,
                         igraph_i_pajek_parsedata_t *context,
                         const char *s) {
  snprintf(context->errmsg, sizeof(context->errmsg)/sizeof(char)-1,
           "Parse error in Pajek file, line %i (%s)",
           locp->first_line, s);
  return 0;
}

/* TODO: NA's */

static igraph_error_t add_numeric_attribute(igraph_trie_t *names,
                                            igraph_vector_ptr_t *attrs,
                                            igraph_integer_t count,
                                            const char *attrname,
                                            igraph_integer_t elem_id,
                                            igraph_real_t number) {
  igraph_integer_t attrsize = igraph_trie_size(names);
  igraph_integer_t id;
  igraph_vector_t *na;
  igraph_attribute_record_t *rec;

  IGRAPH_CHECK(igraph_trie_get(names, attrname, &id));
  if (id == attrsize) {
    /* add a new attribute */
    rec = IGRAPH_CALLOC(1, igraph_attribute_record_t);
    CHECK_OOM_RP(rec);
    IGRAPH_FINALLY(igraph_free, rec);

    na = IGRAPH_CALLOC(1, igraph_vector_t);
    CHECK_OOM_RP(na);
    IGRAPH_FINALLY(igraph_free, na);
    IGRAPH_VECTOR_INIT_FINALLY(na, count);

    rec->name = strdup(attrname);
    CHECK_OOM_RP(rec->name);
    IGRAPH_FINALLY(igraph_free, (void *) rec->name);

    rec->type = IGRAPH_ATTRIBUTE_NUMERIC;
    rec->value = na;

    IGRAPH_CHECK(igraph_vector_ptr_push_back(attrs, rec));
    IGRAPH_FINALLY_CLEAN(4); /* ownership of rec transferred to attrs */
  }

  rec = VECTOR(*attrs)[id];
  na = (igraph_vector_t *) rec->value;
  if (igraph_vector_size(na) == elem_id) {
    IGRAPH_CHECK(igraph_vector_push_back(na, number));
  } else if (igraph_vector_size(na) < elem_id) {
    igraph_integer_t origsize=igraph_vector_size(na);
    IGRAPH_CHECK(igraph_vector_resize(na, elem_id+1));
    for (;origsize<count; origsize++) {
      VECTOR(*na)[origsize] = IGRAPH_NAN;
    }
    VECTOR(*na)[elem_id] = number;
  } else {
    VECTOR(*na)[elem_id] = number;
  }

  return IGRAPH_SUCCESS;
}

/* TODO: NA's */

static igraph_error_t make_dynstr(const char *src, size_t len, char **res) {
  *res = strndup(src, len);
  CHECK_OOM_RP(*res);
  return IGRAPH_SUCCESS;
}

static igraph_error_t add_string_attribute(igraph_trie_t *names,
                                           igraph_vector_ptr_t *attrs,
                                           igraph_integer_t count,
                                           const char *attrname,
                                           igraph_integer_t elem_id,
                                           const char *str,
                                           igraph_integer_t str_len) {
  igraph_integer_t attrsize=igraph_trie_size(names);
  igraph_integer_t id;
  igraph_strvector_t *na;
  igraph_attribute_record_t *rec;

  if (attrname[0] == '\0') {
    /* This is relevant only for custom attributes, which are always of string type.
       No need to add the same check for numerical attributes. */
    IGRAPH_ERROR("\"\" is not allowed as a parameter name in Pajek files.", IGRAPH_PARSEERROR);
  }

  IGRAPH_CHECK(igraph_trie_get(names, attrname, &id));
  if (id == attrsize) {

#ifdef FUZZING_BUILD_MODE_UNSAFE_FOR_PRODUCTION
    /* There are 21 standard vertex attributes and 21 standard edge attributes.
     * We refuse to allow more to reduce memory usage when fuzzing. */
    if (attrsize > 21) {
      IGRAPH_ERROR("Too many attributes in Pajek file.", IGRAPH_PARSEERROR);
    }
#endif

    /* add a new attribute */
    rec = IGRAPH_CALLOC(1, igraph_attribute_record_t);
    CHECK_OOM_RP(rec);
    IGRAPH_FINALLY(igraph_free, rec);

    na = IGRAPH_CALLOC(1, igraph_strvector_t);
    CHECK_OOM_RP(na);
    IGRAPH_FINALLY(igraph_free, na);
    IGRAPH_STRVECTOR_INIT_FINALLY(na, count);

    rec->name = strdup(attrname);
    CHECK_OOM_RP(rec->name);
    IGRAPH_FINALLY(igraph_free, (char *) rec->name);

    rec->type = IGRAPH_ATTRIBUTE_STRING;
    rec->value = na;

    IGRAPH_CHECK(igraph_vector_ptr_push_back(attrs, rec));
    IGRAPH_FINALLY_CLEAN(4); /* ownership of rec transferred to attrs */
  }

  rec = VECTOR(*attrs)[id];
  na = (igraph_strvector_t *) rec->value;
  if (igraph_strvector_size(na) <= elem_id) {
    IGRAPH_CHECK(igraph_strvector_resize(na, elem_id+1));
  }
  IGRAPH_CHECK(igraph_strvector_set_len(na, elem_id, str, str_len));

  return IGRAPH_SUCCESS;
}

static igraph_error_t add_string_vertex_attribute(const char *name,
                                                  const char *value,
                                                  size_t len,
                                                  igraph_i_pajek_parsedata_t *context) {

  return add_string_attribute(context->vertex_attribute_names,
                              context->vertex_attributes,
                              context->vcount,
                              name, context->actvertex-1,
                              value, len);
}

static igraph_error_t add_string_edge_attribute(const char *name,
                                                const char *value,
                                                size_t len,
                                                igraph_i_pajek_parsedata_t *context) {

  return add_string_attribute(context->edge_attribute_names,
                              context->edge_attributes,
                              context->actedge,
                              name, context->actedge-1,
                              value, len);
}

static igraph_error_t add_numeric_vertex_attribute(const char *name,
                                                   igraph_real_t value,
                                                   igraph_i_pajek_parsedata_t *context) {

  return add_numeric_attribute(context->vertex_attribute_names,
                               context->vertex_attributes,
                               context->vcount,
                               name, context->actvertex-1,
                               value);
}

static igraph_error_t add_numeric_edge_attribute(const char *name,
                                                 igraph_real_t value,
                                                 igraph_i_pajek_parsedata_t *context) {

  return add_numeric_attribute(context->edge_attribute_names,
                               context->edge_attributes,
                               context->actedge,
                               name, context->actedge-1,
                               value);
}

static igraph_error_t add_bipartite_type(igraph_i_pajek_parsedata_t *context) {

  const char *attrname="type";
  igraph_trie_t *names=context->vertex_attribute_names;
  igraph_vector_ptr_t *attrs=context->vertex_attributes;
  igraph_integer_t n=context->vcount, n1=context->vcount2;
  igraph_integer_t attrid, attrsize = igraph_trie_size(names);
  igraph_attribute_record_t *rec;
  igraph_vector_bool_t *na;

  if (n1 > n) {
    IGRAPH_ERROR("Invalid number of vertices in bipartite Pajek file.",
                 IGRAPH_PARSEERROR);
  }

  IGRAPH_CHECK(igraph_trie_get(names, attrname, &attrid));

  /* It should not be possible for the "type" attribute to be already
   * present at this point. */
  IGRAPH_ASSERT(attrid == attrsize);

  /* add a new attribute */
  rec = IGRAPH_CALLOC(1, igraph_attribute_record_t);
  CHECK_OOM_RP(rec);
  IGRAPH_FINALLY(igraph_free, rec);

  na = IGRAPH_CALLOC(1, igraph_vector_bool_t);
  CHECK_OOM_RP(na);
  IGRAPH_FINALLY(igraph_free, na);
  IGRAPH_VECTOR_BOOL_INIT_FINALLY(na, n);

  rec->name = strdup(attrname);
  CHECK_OOM_RP(rec->name);
  IGRAPH_FINALLY(igraph_free, (char *) rec->name);

  rec->type = IGRAPH_ATTRIBUTE_BOOLEAN;
  rec->value = na;

  IGRAPH_CHECK(igraph_vector_ptr_push_back(attrs, rec));
  IGRAPH_FINALLY_CLEAN(4); /* ownership of 'rec' transferred to 'attrs' */

  for (igraph_integer_t i=0; i<n1; i++) {
    VECTOR(*na)[i] = false;
  }
  for (igraph_integer_t i=n1; i<n; i++) {
    VECTOR(*na)[i] = true;
  }

  return IGRAPH_SUCCESS;
}

static igraph_error_t check_bipartite(igraph_i_pajek_parsedata_t *context) {
  const igraph_vector_int_t *edges=context->vector;
  igraph_integer_t n1=context->vcount2;
  igraph_integer_t ne=igraph_vector_int_size(edges);

  for (igraph_integer_t i=0; i<ne; i+=2) {
    igraph_integer_t v1 = VECTOR(*edges)[i];
    igraph_integer_t v2 = VECTOR(*edges)[i+1];
    if ( (v1 < n1 && v2 < n1) || (v1 > n1 && v2 > n1) ) {
      IGRAPH_WARNING("Invalid edge in bipartite graph.");
    }
  }

  return IGRAPH_SUCCESS;
}

/* Check if attrname is a standard vertex attribute name used by igraph
   for Pajek data. All of these must be listed here to prevent overwriting
   standard attributes, or crashes due to incompatible attribute types. */
static igraph_bool_t is_standard_vattr(const char *attrname) {
  const char *names[] = {
    /* vertex names: */
    "id", /* TODO: remove for 0.11 */ "name",
    /* other vertex attributes: */
    "type", "x", "y", "z",
    /* vertex parameters: */
    "xfact", "yfact",
    "labeldist", "labeldegree2", "framewidth",
    "fontsize", "rotation", "radius",
    "diamondratio", "labeldegree",
    "font", "url", "color", "framecolor",
    "labelcolor"
  };
  for (size_t i=0; i < sizeof(names) / sizeof(names[0]); i++) {
    if (strcmp(attrname, names[i]) == 0) {
      return true;
    }
  }
  return false;
}

/* Check if attrname is a standard edge attribute name used by igraph
   for Pajek data. All of these must be listed here to prevent overwriting
   standard attributes, or crashes due to incompatible attribute types. */
static igraph_bool_t is_standard_eattr(const char *attrname) {
  const char *names[] = {
    /* other edge attributes: */
    "weight",
    /* edge parameters: */
    "arrowsize", "edgewidth", "hook1", "hook2",
    "angle1", "angle2", "velocity1", "velocity2",
    "arrowpos", "labelpos", "labelangle",
    "labelangle2", "labeldegree", "fontsize", "font",
    "arrowtype", "linepattern", "label", "labelcolor",
    "color"
  };
  for (size_t i=0; i < sizeof(names) / sizeof(names[0]); i++) {
    if (strcmp(attrname, names[i]) == 0) {
      return true;
    }
  }
  return false;
}

/* Add a _ character at the end of an attribute name to avoid conflict
 * with standard Pajek attributes. */
static igraph_error_t deconflict_attrname(char **attrname) {
  size_t len = strlen(*attrname);
  char *tmp = IGRAPH_REALLOC(*attrname, len+2, char);
  CHECK_OOM_RP(tmp);
  tmp[len] = '_';
  tmp[len+1] = '\0';
  *attrname = tmp;
  return IGRAPH_SUCCESS;
}
