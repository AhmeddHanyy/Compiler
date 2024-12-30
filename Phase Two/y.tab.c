
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
#line 2 "yacc.y"

  #include <stdlib.h>
  #include <string.h>
  #include "SymbolHier/SymbolHier.h"
  #include "Quadraples/Quadraples.h"
  int yylex(void);  
  void yyerror(const char *s);
  void semantic_errors(const char *s);
  void semantic_warns(const char *s); 
  extern FILE* yyin;                          
  extern FILE* yyout;
  FILE *semantic_file;  
  int yylineno = 1;
  int num_scopes = 0;
  SymbolHier symbolHier;
  Quadraples quad;


/* Line 189 of yacc.c  */
#line 92 "y.tab.c"

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

/* Line 214 of yacc.c  */
#line 20 "yacc.y"

    char* intValue;
    char* floatValue;
    char charValue;
    char* stringValue;
    char* boolValue;
    char* idValue;



/* Line 214 of yacc.c  */
#line 221 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 233 "y.tab.c"

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   309

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNRULES -- Number of states.  */
#define YYNSTATES  217

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      43,    44,     2,     2,    47,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    48,    42,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    45,     2,    46,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,    10,    14,    15,    19,    25,
      32,    37,    39,    41,    43,    45,    47,    49,    51,    53,
      56,    59,    61,    63,    65,    67,    69,    71,    73,    75,
      77,    79,    81,    85,    87,    91,    93,    96,    98,   102,
     104,   106,   108,   110,   112,   114,   116,   118,   122,   126,
     128,   132,   136,   138,   142,   145,   147,   149,   151,   153,
     155,   157,   159,   163,   167,   170,   172,   174,   176,   179,
     181,   184,   186,   188,   195,   198,   205,   207,   210,   212,
     219,   220,   222,   231,   233,   237,   243,   251,   254,   257,
     260,   265,   267,   274,   276,   282,   286,   290,   292,   293,
     297,   300,   302,   314,   316,   321,   325,   327,   335,   338,
     340,   345,   350
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      50,     0,    -1,    51,    52,    -1,    -1,    53,    54,    -1,
      52,    53,    54,    -1,    -1,    56,    57,    55,    -1,    56,
      57,    15,    58,    55,    -1,     8,    56,    57,    15,    58,
      55,    -1,    57,    15,    58,    55,    -1,    69,    -1,    72,
      -1,    80,    -1,    83,    -1,    85,    -1,    90,    -1,    93,
      -1,    95,    -1,    31,    55,    -1,    32,    55,    -1,    98,
      -1,    42,    -1,    92,    -1,     3,    -1,     4,    -1,     5,
      -1,     6,    -1,     7,    -1,    41,    -1,    59,    -1,    90,
      -1,    59,    17,    60,    -1,    60,    -1,    60,    16,    61,
      -1,    61,    -1,    18,    61,    -1,    62,    -1,    62,    63,
      64,    -1,    64,    -1,    19,    -1,    20,    -1,    21,    -1,
      22,    -1,    23,    -1,    24,    -1,    65,    -1,    64,    10,
      65,    -1,    64,    11,    65,    -1,    66,    -1,    65,    12,
      66,    -1,    65,    13,    66,    -1,    67,    -1,    67,    14,
      66,    -1,    11,    67,    -1,    68,    -1,    36,    -1,    37,
      -1,    39,    -1,    38,    -1,    40,    -1,    57,    -1,    43,
      59,    44,    -1,    70,    52,    71,    -1,    70,    71,    -1,
      45,    -1,    46,    -1,     1,    -1,    76,    73,    -1,    76,
      -1,    74,    73,    -1,    74,    -1,    75,    -1,    78,    43,
      58,    81,    44,    69,    -1,    79,    69,    -1,    77,    43,
      58,    81,    44,    69,    -1,    25,    -1,    26,    25,    -1,
      26,    -1,    82,    43,    58,    81,    44,    69,    -1,    -1,
      27,    -1,    84,    69,    27,    43,    58,    81,    44,    55,
      -1,    28,    -1,    87,    86,    69,    -1,    43,    56,    57,
      88,    44,    -1,    43,    56,    57,    15,    58,    89,    44,
      -1,    43,    44,    -1,    56,    57,    -1,     9,    57,    -1,
      47,    56,    57,    88,    -1,    89,    -1,    47,    56,    57,
      15,    58,    89,    -1,    92,    -1,    57,    43,    58,    91,
      44,    -1,    57,    43,    44,    -1,    47,    58,    91,    -1,
      92,    -1,    -1,    94,    58,    42,    -1,    94,    42,    -1,
      29,    -1,    96,    43,    97,    42,    58,    42,    57,    15,
      58,    44,    69,    -1,    30,    -1,    56,    57,    15,    58,
      -1,    57,    15,    58,    -1,    92,    -1,    33,    43,    57,
      44,    70,    99,    71,    -1,    99,   100,    -1,   100,    -1,
      34,    36,    48,    52,    -1,    34,    39,    48,    52,    -1,
      35,    48,    52,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    55,    55,    58,    65,    69,    74,    77,    87,   125,
     160,   200,   201,   202,   203,   204,   205,   210,   211,   212,
     215,   219,   222,   223,   229,   230,   231,   232,   233,   235,
     242,   246,   260,   282,   286,   308,   312,   331,   337,   363,
     367,   368,   369,   370,   371,   372,   376,   379,   401,   424,
     427,   449,   472,   475,   497,   517,   522,   528,   533,   538,
     543,   548,   568,   572,   573,   576,   588,   590,   602,   603,
     606,   607,   608,   611,   622,   628,   639,   643,   647,   653,
     657,   662,   668,   672,   679,   686,   695,   705,   710,   722,
     735,   745,   747,   757,   761,   784,   798,   806,   809,   811,
     833,   844,   855,   860,   870,   871,   872,   878,   883,   884,
     887,   888,   889
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "CHAR", "STRING", "BOOL",
  "CONST", "VOID", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "POWER",
  "ASSIGN", "AND", "OR", "NOT", "EQ", "NEQ", "LT", "GT", "LE", "GE", "IF",
  "ELSE", "WHILE", "DO", "RETURN", "FOR", "BREAK", "CONTINUE", "SWITCH",
  "CASE", "DEFAULT", "INTEGER_VAL", "FLOAT_VAL", "STRING_VAL", "CHAR_VAL",
  "BOOL_VAL", "IDENTIFIER", "';'", "'('", "')'", "'{'", "'}'", "','",
  "':'", "$accept", "program", "program_start_mark", "script",
  "start_line_mark", "line", "semi_colon_error", "dataType", "ID",
  "expression", "logExpression", "andLogExpression", "notLogExpression",
  "compExpression", "Comparator", "arithExpression", "term1", "term2",
  "term3", "factor", "scope", "startScope", "endScope", "ifStatement",
  "elseIfStatements", "elseIfStatement", "elseScope", "ifScope", "IF_mark",
  "ELSE_IF_mark", "ELSE_mark", "whileLoop", "after_expressions_eval",
  "WHILE_mark", "doWhile", "DO_mark", "function", "functionSig",
  "functionSigStart", "functionParams", "defaultParams", "functionCall",
  "functionCallParams", "epsilon", "returnStatement", "RETURN_mark",
  "forLoop", "FOR_mark", "forLoop1", "switchCase", "multiCase",
  "singleCase", 0
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
     295,   296,    59,    40,    41,   123,   125,    44,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    52,    52,    53,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    55,    55,    56,    56,    56,    56,    56,    57,
      58,    58,    59,    59,    60,    60,    61,    61,    62,    62,
      63,    63,    63,    63,    63,    63,    64,    64,    64,    65,
      65,    65,    66,    66,    67,    67,    68,    68,    68,    68,
      68,    68,    68,    69,    69,    70,    71,    71,    72,    72,
      73,    73,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    86,    86,    87,    87,
      88,    88,    89,    89,    90,    90,    91,    91,    92,    93,
      93,    94,    95,    96,    97,    97,    97,    98,    99,    99,
     100,   100,   100
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     2,     3,     0,     3,     5,     6,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     1,     2,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     1,
       3,     3,     1,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     2,     1,     1,     1,     2,     1,
       2,     1,     1,     6,     2,     6,     1,     2,     1,     6,
       0,     1,     8,     1,     3,     5,     7,     2,     2,     2,
       4,     1,     6,     1,     5,     3,     3,     1,     0,     3,
       2,     1,    11,     1,     4,     3,     1,     7,     2,     1,
       4,     4,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     6,     1,     6,     0,     0,    24,    25,    26,
      27,    28,     0,     0,    76,    81,    83,   101,   103,    98,
      98,     0,    29,    65,     4,     0,     0,    11,     0,    12,
      69,     0,    13,     0,    14,     0,    15,     0,    16,    17,
       0,    18,     0,    21,     5,     0,    89,    22,    19,    23,
      20,     0,    98,     0,     0,    67,    66,     0,    64,    78,
      68,    71,    72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    56,    57,    59,    58,    60,   100,     0,    61,
       0,    30,    33,    35,    37,    39,    46,    49,    52,    55,
      31,    98,     0,     0,     0,     7,    98,    95,    98,    63,
      77,    70,     0,    74,    80,    80,     0,    87,     0,    84,
      61,    54,    36,     0,    99,     0,     0,    40,    41,    42,
      43,    44,    45,     0,     0,     0,     0,     0,     0,     0,
       0,   106,     0,     0,     0,    98,    10,     0,     0,    97,
      80,     0,     0,     0,    98,    62,    32,    34,    38,    47,
      48,    50,    51,    53,     0,     0,     0,    98,     0,     8,
      98,    94,     0,     0,     0,    80,     0,     0,     0,    91,
      93,     0,   105,     0,     9,     0,     0,     0,   109,    96,
       0,    75,    79,     0,    98,     0,    85,   104,     0,     0,
       0,     6,   107,   108,    73,    98,     0,     0,    98,     0,
       6,     6,     6,    82,     0,    86,     0,    90,     0,     6,
       6,     0,    98,     0,    92,     0,   102
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,     5,    24,    48,    25,    79,    80,
      81,    82,    83,    84,   123,    85,    86,    87,    88,    89,
      27,    28,    58,    29,    60,    61,    62,    30,    31,    63,
      64,    32,   141,    33,    34,    35,    36,    69,    37,   168,
     169,    90,   138,    49,    39,    40,    41,    42,   132,    43,
     177,   178
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -156
static const yytype_int16 yypact[] =
{
    -156,     8,  -156,  -156,    19,   242,   242,  -156,  -156,  -156,
    -156,  -156,   275,   -20,  -156,  -156,  -156,  -156,  -156,    23,
      23,    -9,  -156,  -156,  -156,   -20,    12,  -156,   211,  -156,
      26,    35,  -156,    39,  -156,    24,  -156,    49,  -156,  -156,
     185,  -156,    52,  -156,  -156,   -20,  -156,  -156,  -156,  -156,
    -156,   -20,    66,   266,   126,  -156,  -156,   211,  -156,    47,
    -156,    26,  -156,    54,    24,   266,   266,    71,    97,    24,
     222,   266,  -156,  -156,  -156,  -156,  -156,  -156,   266,    63,
      34,    93,    95,  -156,   130,    15,    20,  -156,   100,  -156,
    -156,    33,   101,    74,   266,  -156,    23,  -156,    68,  -156,
    -156,  -156,   266,  -156,  -156,  -156,    76,  -156,   -20,  -156,
    -156,  -156,  -156,    -1,  -156,   266,   266,  -156,  -156,  -156,
    -156,  -156,  -156,   222,   222,   222,   222,   222,   222,   -20,
     113,  -156,    90,   266,    24,    23,  -156,   266,    91,  -156,
    -156,    92,    96,   266,     0,  -156,    95,  -156,    15,    20,
      20,  -156,  -156,  -156,   119,   266,   266,    23,    29,  -156,
      68,  -156,    99,    24,    24,  -156,   266,   275,   103,  -156,
    -156,   266,  -156,   114,  -156,   -16,   109,    10,  -156,  -156,
      24,  -156,  -156,   128,   111,   -20,  -156,  -156,   -20,   125,
     127,  -156,  -156,  -156,  -156,    23,   275,   135,     2,   124,
    -156,  -156,    27,  -156,   -20,  -156,   266,  -156,   266,    45,
      50,   159,   111,   136,  -156,    24,  -156
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -156,  -156,  -156,   -23,    -4,   177,    -2,    -8,    -3,     5,
     106,    72,   -62,  -156,  -156,    67,   -38,  -114,   116,  -156,
     -34,    55,   -50,  -156,   131,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,   -99,  -156,  -156,  -156,  -156,  -156,  -156,    -7,
    -155,    84,    37,   -67,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,    17
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -113
static const yytype_int16 yytable[] =
{
       6,    67,    26,    26,    45,    57,   142,    99,     3,   112,
      46,    55,   151,   152,   153,   166,   115,   206,    50,    -2,
     189,    22,    52,   190,   131,   124,   125,    53,  -112,   197,
     103,   139,   126,   127,    51,   109,     7,     8,     9,    10,
      11,   162,    92,   145,   175,   176,  -110,   167,    93,   167,
      95,  -111,    59,     6,   147,    54,    56,   214,    96,    98,
     108,  -112,  -112,   175,   176,    47,   183,   110,   110,    23,
     104,   105,   100,  -112,    22,   110,   114,   170,    65,  -110,
    -110,    94,    66,   129,  -111,  -111,   149,   150,   130,    38,
      38,  -110,    68,   139,   136,    91,  -111,   102,   106,   135,
       7,     8,     9,    10,    11,   144,    54,   140,    47,   -88,
     115,   116,   110,   110,   128,   137,   133,   170,   134,   143,
     110,   110,   110,   110,   110,   110,   154,   192,   155,   181,
     182,   170,   156,   159,   171,   161,   163,    70,   157,   208,
     164,   107,   160,   180,    71,   170,   194,   186,   165,   117,
     118,   119,   120,   121,   122,   174,   188,   191,   196,   185,
     172,   173,    72,    73,    74,    75,    76,    22,   202,    78,
      97,   184,   195,   200,   206,   201,   187,   209,   210,   205,
     215,   216,   198,    44,   113,   199,   111,   146,   204,   158,
     148,   207,   101,   203,   193,     0,    70,   179,     6,     0,
       0,   211,     0,    71,     0,     6,     6,     0,     0,     0,
       0,   212,    55,   213,    -6,    -6,    -6,    -6,    -6,    -6,
      -6,    72,    73,    74,    75,    76,    22,    77,    78,     0,
       0,     0,     0,    70,     0,     0,    -6,     0,    -6,    -6,
      -6,    -6,    -6,    -6,    -6,     7,     8,     9,    10,    11,
      12,    13,    -6,     0,     0,     0,    -6,    56,    72,    73,
      74,    75,    76,    22,     0,    78,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,     0,    70,     7,     8,
       9,    10,    11,    22,    71,     0,     0,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    72,    73,    74,    75,    76,    22,     0,    78
};

static const yytype_int16 yycheck[] =
{
       4,    35,     5,     6,    12,    28,   105,    57,     0,    71,
      13,     1,   126,   127,   128,    15,    17,    15,    20,     0,
      36,    41,    25,    39,    91,    10,    11,    15,     1,   184,
      64,    98,    12,    13,    43,    69,     3,     4,     5,     6,
       7,   140,    45,    44,    34,    35,     1,    47,    51,    47,
      52,     1,    26,    57,   116,    43,    46,   212,    53,    54,
      68,    34,    35,    34,    35,    42,   165,    70,    71,    45,
      65,    66,    25,    46,    41,    78,    42,   144,    43,    34,
      35,    15,    43,    91,    34,    35,   124,   125,    91,     5,
       6,    46,    43,   160,    96,    43,    46,    43,    27,    94,
       3,     4,     5,     6,     7,   108,    43,   102,    42,    43,
      17,    16,   115,   116,    14,    47,    15,   184,    44,    43,
     123,   124,   125,   126,   127,   128,   129,   177,    15,   163,
     164,   198,    42,   135,    15,    44,    44,    11,   133,    15,
      44,    44,   137,    44,    18,   212,   180,    44,   143,    19,
      20,    21,    22,    23,    24,   157,    42,    48,    47,   167,
     155,   156,    36,    37,    38,    39,    40,    41,   191,    43,
      44,   166,    44,    48,    15,    48,   171,   200,   201,    44,
      44,   215,   185,     6,    78,   188,    70,   115,   196,   134,
     123,   198,    61,   195,   177,    -1,    11,   160,   202,    -1,
      -1,   204,    -1,    18,    -1,   209,   210,    -1,    -1,    -1,
      -1,   206,     1,   208,     3,     4,     5,     6,     7,     8,
       9,    36,    37,    38,    39,    40,    41,    42,    43,    -1,
      -1,    -1,    -1,    11,    -1,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,     3,     4,     5,     6,     7,
       8,     9,    41,    -1,    -1,    -1,    45,    46,    36,    37,
      38,    39,    40,    41,    -1,    43,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    -1,    11,     3,     4,
       5,     6,     7,    41,    18,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    37,    38,    39,    40,    41,    -1,    43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    50,    51,     0,    52,    53,    53,     3,     4,     5,
       6,     7,     8,     9,    25,    27,    28,    29,    30,    31,
      32,    33,    41,    45,    54,    56,    57,    69,    70,    72,
      76,    77,    80,    82,    83,    84,    85,    87,    90,    93,
      94,    95,    96,    98,    54,    56,    57,    42,    55,    92,
      55,    43,    57,    15,    43,     1,    46,    52,    71,    26,
      73,    74,    75,    78,    79,    43,    43,    69,    43,    86,
      11,    18,    36,    37,    38,    39,    40,    42,    43,    57,
      58,    59,    60,    61,    62,    64,    65,    66,    67,    68,
      90,    43,    57,    57,    15,    55,    58,    44,    58,    71,
      25,    73,    43,    69,    58,    58,    27,    44,    56,    69,
      57,    67,    61,    59,    42,    17,    16,    19,    20,    21,
      22,    23,    24,    63,    10,    11,    12,    13,    14,    56,
      57,    92,    97,    15,    44,    58,    55,    47,    91,    92,
      58,    81,    81,    43,    57,    44,    60,    61,    64,    65,
      65,    66,    66,    66,    57,    15,    42,    58,    70,    55,
      58,    44,    81,    44,    44,    58,    15,    47,    88,    89,
      92,    15,    58,    58,    55,    34,    35,    99,   100,    91,
      44,    69,    69,    81,    58,    56,    44,    58,    42,    36,
      39,    48,    71,   100,    69,    44,    47,    89,    57,    57,
      48,    48,    52,    55,    56,    44,    15,    88,    15,    52,
      52,    57,    58,    58,    89,    44,    69
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
#line 55 "yacc.y"
    {}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 58 "yacc.y"
    {
  SymbolTable* globalTable = new SymbolTable("Global", nullptr);
  symbolHier.addSymbolTable(globalTable);
  symbolHier.updateCurrentScope(globalTable);
}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 65 "yacc.y"
    {
          quad.printQuadraples();
          quad.printQuadraplesToFile("output.txt");
        }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 69 "yacc.y"
    {
          quad.printQuadraples();
          quad.printQuadraplesToFile("output.txt");
      }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 74 "yacc.y"
    {printf("Processing line %d in the script.\n",yylineno);}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 77 "yacc.y"
    {
                SymbolTable* entryScope = symbolHier.getEntryScope((yyvsp[(2) - (3)].stringValue), (yyvsp[(1) - (3)].stringValue));
                if (entryScope) {
                  semantic_errors("Variable is already declared\n");
                } else {
                  printf("Variable %s declared\n", (yyvsp[(2) - (3)].stringValue));
                  symbolHier.addEntryToCurrentScope((yyvsp[(2) - (3)].stringValue),(yyvsp[(1) - (3)].stringValue),"-0",false,false);
                }
                
              }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 87 "yacc.y"
    {
                SymbolTable* entryScope = symbolHier.getEntryScope((yyvsp[(2) - (5)].stringValue), (yyvsp[(1) - (5)].stringValue));
                if (entryScope) {
                    semantic_errors("Variable is already declared\n");
                } else {
                  // Create an instance of SemanticChecker
                  SemanticChecker semanticChecker;

                  printf("Variable Type: %s\n", (yyvsp[(1) - (5)].stringValue));
                  printf("Expression: %s\n", (yyvsp[(4) - (5)].stringValue));

                  char* expr_value, *expr_name="";
                  vector <char*> expr_info = splitString((yyvsp[(4) - (5)].stringValue), ',');

                  expr_value = expr_info[0];
                  if (expr_info.size() > 1) expr_name = expr_info[1];

                  printf("Expression Value: %s\n", expr_value);
                  printf("Expression Name: %s\n", expr_name);

                  // Check if the types are compatible
                  if (!semanticChecker.matchTypes((yyvsp[(1) - (5)].stringValue), expr_value))
                  {
                    semantic_errors("Type mismatch between data type and expression\n");
                  }
                  else
                  {
                    symbolHier.addEntryToCurrentScope((yyvsp[(2) - (5)].stringValue), (yyvsp[(1) - (5)].stringValue), expr_value, true, false);
                    if (strcmp(expr_name, "") != 0) {
                      quad.addUnary("MOV", expr_name, true);
                    } else {
                      quad.addUnary("MOV", expr_value);
                    }
                    quad.resetEntryCount();
                  }
                }
                 
              }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 125 "yacc.y"
    {
                SymbolTable* entryScope = symbolHier.getEntryScope((yyvsp[(3) - (6)].stringValue), (yyvsp[(2) - (6)].stringValue));
                if (entryScope) {
                    semantic_errors("Variable is already declared\n");
                } else {
                    // Create an instance of SemanticChecker
                    SemanticChecker semanticChecker;

                    printf("Variable Type: %s\n", (yyvsp[(2) - (6)].stringValue));
                    printf("Expression: %s\n", (yyvsp[(5) - (6)].stringValue));

                    char* expr_value, *expr_name="";
                    vector <char*> expr_info = splitString((yyvsp[(5) - (6)].stringValue), ',');

                    expr_value = expr_info[0];
                    if (expr_info.size() > 1) expr_name = expr_info[1];

                    printf("Expression Value: %s\n", expr_value);
                    printf("Expression Name: %s\n", expr_name);

                    // Check if the types are compatible
                    if (!semanticChecker.matchTypes((yyvsp[(2) - (6)].stringValue), expr_value)) {
                        semantic_errors("Type mismatch between data type and expression\n");
                    } else {
                        symbolHier.addEntryToCurrentScope((yyvsp[(3) - (6)].stringValue), (yyvsp[(2) - (6)].stringValue), expr_value, true, true);
                        if (strcmp(expr_name, "") != 0) {
                          quad.addUnary("MOV", expr_name, true);
                        } else {
                          quad.addUnary("MOV", expr_value);
                        }
                        quad.resetEntryCount();
                      }
                }
               
       }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 160 "yacc.y"
    {
              SymbolTable* entryScope = symbolHier.getEntryScope((yyvsp[(1) - (4)].stringValue));
              if (!entryScope) {
                  semantic_errors("Variable is not declared\n");
              } 
              else {
                  SemanticChecker semanticChecker;
                  char* expr_value, *expr_name="";
                  vector <char*> expr_info = splitString((yyvsp[(3) - (4)].stringValue), ',');

                  expr_value = expr_info[0];
                  if (expr_info.size() > 1) expr_name = expr_info[1];

                  // Create an instance of SemanticChecker
                  SymbolTable* entryScope = symbolHier.getEntryScope((yyvsp[(1) - (4)].stringValue), semanticChecker.determineType(expr_value));
                  if (!entryScope) {
                      semantic_errors("Type mismatch between variable and expression\n");
                  }
                  else {
                    SymbolTableEntry* entry = entryScope->getEntry((yyvsp[(1) - (4)].stringValue));

                    // Check if the variable is a constant
                    if (entry->getIsConstant()) {
                        semantic_errors("Cannot assign to a constant variable\n");
                    } else { 
                      // Assuming compatible, update the value of the variable
                      entry->setValue(expr_value);
                      entry->setIsInitialized(true);
                      // Use quads to assign the value to the variable
                      if (strcmp(expr_name, "") != 0) {
                        quad.addUnary("MOV", expr_name, true);
                      } else {
                        quad.addUnary("MOV", expr_value);
                      }
                      quad.resetEntryCount();
                    }
                  }
              }
              
            }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 200 "yacc.y"
    {}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 201 "yacc.y"
    {}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 202 "yacc.y"
    {}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 203 "yacc.y"
    {}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 204 "yacc.y"
    {}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 205 "yacc.y"
    {
        (yyval.stringValue) = (yyvsp[(1) - (1)].stringValue);
        char* label = quad.generateTempVar();
        quad.addBinary("CALL", label);
      }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 210 "yacc.y"
    {}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 211 "yacc.y"
    {}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 212 "yacc.y"
    {
         
      }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 215 "yacc.y"
    {
      
                 
      }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 222 "yacc.y"
    {}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 223 "yacc.y"
    {
                    yyerror("Missing ';'");
                    (yyval.stringValue) = (yyvsp[(1) - (1)].stringValue);
                   }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 229 "yacc.y"
    { (yyval.stringValue) = "int";  }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 230 "yacc.y"
    { (yyval.stringValue) = "float";  }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 231 "yacc.y"
    { (yyval.stringValue) = "char"; }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 232 "yacc.y"
    { (yyval.stringValue) = "string"; }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 233 "yacc.y"
    { (yyval.stringValue) = "bool";}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 235 "yacc.y"
    { 
                  (yyval.stringValue) = (yyvsp[(1) - (1)].idValue);
                  quad.pushLabel((yyvsp[(1) - (1)].idValue));  
                }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 242 "yacc.y"
    {
                            (yyval.stringValue) = (yyvsp[(1) - (1)].stringValue);
                            printf("logExpression: %s\n", (yyvsp[(1) - (1)].stringValue));
                          }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 246 "yacc.y"
    {
                            (yyval.stringValue) = (yyvsp[(1) - (1)].stringValue);
                            printf("AAAA Function Call: %s\n", (yyvsp[(1) - (1)].stringValue));
                            char* label = quad.generateTempVar();
                            quad.addBinary("CALL", label);
                          }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 260 "yacc.y"
    {
                  char* right_expr_value, *left_expr_value;
                  vector <char*> expr_info = splitString((yyvsp[(3) - (3)].stringValue), ',');
                  right_expr_value = expr_info[0];
                  expr_info = splitString((yyvsp[(1) - (3)].stringValue), ',');
                  left_expr_value = expr_info[0];
                  // Check if the types are compatible
                  SemanticChecker semanticChecker;
                  if (!semanticChecker.matchTypes(left_expr_value, right_expr_value)) {
                    semantic_errors("Type mismatch between left and right expressions\n");
                    (yyval.stringValue) = "";
                  }
                  else if (strcmp(left_expr_value, "bool") != 0) {
                    semantic_errors("Invalid operation for non-boolean types\n");
                    (yyval.stringValue) = "";
                  }
                  else {
                    char* tempVar = quad.generateTempVar();
                    quad.addBinary("OR", tempVar);
                    (yyval.stringValue) = concatenateTwoStrings(right_expr_value, tempVar, ','); // result of addition is stored in a temporary variable
                  }
                }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 282 "yacc.y"
    {
  (yyval.stringValue) = (yyvsp[(1) - (1)].stringValue); // propagate the result of the andLogExpression
}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 286 "yacc.y"
    {
                  char* right_expr_value, *left_expr_value;
                  vector <char*> expr_info = splitString((yyvsp[(3) - (3)].stringValue), ',');
                  right_expr_value = expr_info[0];
                  expr_info = splitString((yyvsp[(1) - (3)].stringValue), ',');
                  left_expr_value = expr_info[0];
                  // Check if the types are compatible
                  SemanticChecker semanticChecker;
                  if (!semanticChecker.matchTypes(left_expr_value, right_expr_value)) {
                    semantic_errors("Type mismatch between left and right expressions\n");
                    (yyval.stringValue) = "";
                  }
                  else if (strcmp(left_expr_value, "bool") != 0) {
                    semantic_errors("Invalid operation for non-boolean\n");
                    (yyval.stringValue) = "";
                  }
                  else {
                    char* tempVar = quad.generateTempVar();
                    quad.addBinary("AND", tempVar);
                    (yyval.stringValue) = concatenateTwoStrings(right_expr_value, tempVar, ','); // result of addition is stored in a temporary variable
                  }
                }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 308 "yacc.y"
    {
  (yyval.stringValue) = (yyvsp[(1) - (1)].stringValue); // propagate the result of the notLogExpression
}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 312 "yacc.y"
    {
          char* expr_value, *expr_name;
          vector <char*> expr_info = splitString((yyvsp[(2) - (2)].stringValue), ',');
          expr_value = expr_info[0];
          expr_name = expr_info[1];

          // check if it is a float / int
          SemanticChecker semanticChecker;
          char* expr_type = semanticChecker.determineType(expr_value);
          if (strcmp(expr_type, "bool") != 0) {
            semantic_errors("Invalid operation for non-boolean types\n");
            (yyval.stringValue) = "";
          } else {
            char* tempVar = quad.generateTempVar();
            quad.addUnary("NOT", tempVar);
            quad.pushLabel(tempVar);
            (yyval.stringValue) = concatenateTwoStrings(expr_value, tempVar, ',');
          }
        }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 331 "yacc.y"
    {
        (yyval.stringValue) = (yyvsp[(1) - (1)].stringValue); 
        printf("compExpression: %s\n", (yyvsp[(1) - (1)].stringValue));
      }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 337 "yacc.y"
    {
                char* right_expr_value, *left_expr_value;
                vector <char*> expr_info = splitString((yyvsp[(3) - (3)].stringValue), ',');
                right_expr_value = expr_info[0];
                expr_info = splitString((yyvsp[(1) - (3)].stringValue), ',');
                left_expr_value = expr_info[0];

                printf("|||Left Expression: %s\n", left_expr_value);
                printf("|||Right Expression: %s\n", right_expr_value);

                // Check if the types are compatible
                SemanticChecker semanticChecker;
                if (!semanticChecker.matchTypes(left_expr_value, right_expr_value)) {
                  semantic_errors("Type mismatch between left and right expressions\n");
                  (yyval.stringValue) = "";
                }
                else if (strcmp(left_expr_value, "bool") != 0 && strcmp(left_expr_value, "int") != 0 && strcmp(left_expr_value, "float") != 0) {
                  semantic_errors("Invalid operation for non-numeric/boolean types\n");
                  (yyval.stringValue) = "";
                }
                else {
                  char* tempVar = quad.generateTempVar();
                  quad.addBinary((yyvsp[(2) - (3)].stringValue), tempVar);
                  (yyval.stringValue) = concatenateTwoStrings("bool", tempVar, ','); // result of addition is stored in a temporary variable
                }
              }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 363 "yacc.y"
    {
  (yyval.stringValue) = (yyvsp[(1) - (1)].stringValue); // propagate the result of the arithmetic expression
}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 367 "yacc.y"
    {(yyval.stringValue) = "EQ";}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 368 "yacc.y"
    {(yyval.stringValue) = "NEQ";}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 369 "yacc.y"
    {(yyval.stringValue) = "LT";}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 370 "yacc.y"
    {(yyval.stringValue) = "GT";}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 371 "yacc.y"
    {(yyval.stringValue) = "LE";}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 372 "yacc.y"
    {(yyval.stringValue) = "GE";}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 376 "yacc.y"
    {
              (yyval.stringValue) = (yyvsp[(1) - (1)].stringValue); // propagate the result of the term1
             }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 379 "yacc.y"
    {
                  char* right_expr_value, *left_expr_value;
                  vector <char*> expr_info = splitString((yyvsp[(3) - (3)].stringValue), ',');
                  right_expr_value = expr_info[0];
                  expr_info = splitString((yyvsp[(1) - (3)].stringValue), ',');
                  left_expr_value = expr_info[0];
                  // Check if the types are compatible
                  SemanticChecker semanticChecker;
                  if (!semanticChecker.matchTypes(left_expr_value, right_expr_value)) {
                    semantic_errors("Type mismatch between left and right expressions\n");
                    (yyval.stringValue) = "";
                  }
                  else if (strcmp(left_expr_value, "bool") == 0 || strcmp(left_expr_value, "char") == 0) {
                    semantic_errors("Invalid operation for boolean or character types\n");
                    (yyval.stringValue) = "";
                  }
                  else {
                    char* tempVar = quad.generateTempVar();
                    quad.addBinary("ADD", tempVar);
                    (yyval.stringValue) = concatenateTwoStrings(right_expr_value, tempVar, ','); // result of addition is stored in a temporary variable
                  }
                }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 401 "yacc.y"
    {
                  char* right_expr_value, *left_expr_value;
                  vector <char*> expr_info = splitString((yyvsp[(3) - (3)].stringValue), ',');
                  right_expr_value = expr_info[0];
                  expr_info = splitString((yyvsp[(1) - (3)].stringValue), ',');
                  left_expr_value = expr_info[0];
                  // Check if the types are compatible
                  SemanticChecker semanticChecker;
                  if (!semanticChecker.matchTypes(left_expr_value, right_expr_value)) {
                    semantic_errors("Type mismatch between left and right expressions\n");
                    (yyval.stringValue) = "";
                  }
                  else if (strcmp(left_expr_value, "bool") == 0 || strcmp(left_expr_value, "char") == 0) {
                    semantic_errors("Invalid operation for boolean or character types\n");
                    (yyval.stringValue) = "";
                  }
                  else {
                    char* tempVar = quad.generateTempVar();
                    quad.addBinary("SUB", tempVar);
                    (yyval.stringValue) = concatenateTwoStrings(right_expr_value, tempVar, ','); // result of addition is stored in a temporary variable
                  }
                }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 424 "yacc.y"
    {
          (yyval.stringValue) = (yyvsp[(1) - (1)].stringValue); // propagate the result of term2
        }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 427 "yacc.y"
    {
                  char* right_expr_value, *left_expr_value;
                  vector <char*> expr_info = splitString((yyvsp[(3) - (3)].stringValue), ',');
                  right_expr_value = expr_info[0];
                  expr_info = splitString((yyvsp[(1) - (3)].stringValue), ',');
                  left_expr_value = expr_info[0];
                  // Check if the types are compatible
                  SemanticChecker semanticChecker;
                  if (!semanticChecker.matchTypes(left_expr_value, right_expr_value)) {
                    semantic_errors("Type mismatch between left and right expressions\n");
                    (yyval.stringValue) = "";
                  }
                  else if (strcmp(left_expr_value, "bool") == 0 || strcmp(left_expr_value, "char") == 0) {
                    semantic_errors("Invalid operation for boolean or character types\n");
                    (yyval.stringValue) = "";
                  }
                  else {
                    char* tempVar = quad.generateTempVar();
                    quad.addBinary("MUL", tempVar);
                    (yyval.stringValue) = concatenateTwoStrings(right_expr_value, tempVar, ','); // result of addition is stored in a temporary variable
                  }
                }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 449 "yacc.y"
    {
                  char* right_expr_value, *left_expr_value;
                  vector <char*> expr_info = splitString((yyvsp[(3) - (3)].stringValue), ',');
                  right_expr_value = expr_info[0];
                  expr_info = splitString((yyvsp[(1) - (3)].stringValue), ',');
                  left_expr_value = expr_info[0];
                  // Check if the types are compatible
                  SemanticChecker semanticChecker;
                  if (!semanticChecker.matchTypes(left_expr_value, right_expr_value)) {
                    semantic_errors("Type mismatch between left and right expressions\n");
                    (yyval.stringValue) = "";
                  }
                  else if (strcmp(left_expr_value, "bool") == 0 || strcmp(left_expr_value, "char") == 0) {
                    semantic_errors("Invalid operation for boolean or character types\n");
                    (yyval.stringValue) = "";
                  }
                  else {
                    char* tempVar = quad.generateTempVar();
                    quad.addBinary("DIV", tempVar);
                    (yyval.stringValue) = concatenateTwoStrings(right_expr_value, tempVar, ','); // result of addition is stored in a temporary variable
                  }
                }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 472 "yacc.y"
    {
                  (yyval.stringValue) = (yyvsp[(1) - (1)].stringValue); // propagate the result of term3
                }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 475 "yacc.y"
    {
                  char* right_expr_value, *left_expr_value;
                  vector <char*> expr_info = splitString((yyvsp[(3) - (3)].stringValue), ',');
                  right_expr_value = expr_info[0];
                  expr_info = splitString((yyvsp[(1) - (3)].stringValue), ',');
                  left_expr_value = expr_info[0];
                  // Check if the types are compatible
                  SemanticChecker semanticChecker;
                  if (!semanticChecker.matchTypes(left_expr_value, right_expr_value)) {
                    semantic_errors("Type mismatch between left and right expressions\n");
                    (yyval.stringValue) = "";
                  }
                  else if (strcmp(left_expr_value, "bool") == 0 || strcmp(left_expr_value, "char") == 0) {
                    semantic_errors("Invalid operation for boolean or character types\n");
                    (yyval.stringValue) = "";
                  }
                  else {
                    char* tempVar = quad.generateTempVar();
                    quad.addBinary("POW", tempVar);
                    (yyval.stringValue) = concatenateTwoStrings(right_expr_value, tempVar, ','); // result of addition is stored in a temporary variable
                  }
                }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 497 "yacc.y"
    {
          char* expr_value, *expr_name;
          vector <char*> expr_info = splitString((yyvsp[(2) - (2)].stringValue), ',');
          expr_value = expr_info[0];
          expr_name = expr_info[1];

          // check if it is a float / int
          SemanticChecker semanticChecker;
          printf("-----Expression Value: %s\n", expr_value);
          char* expr_type = semanticChecker.determineType(expr_value);
          if (strcmp(expr_type, "float") != 0 && strcmp(expr_type, "int") != 0) {
            semantic_errors("Invalid operation for non-numeric types\n");
            (yyval.stringValue) = "";
          } else {
            char* tempVar = quad.generateTempVar();
            quad.addUnary("NEG", tempVar);
            quad.pushLabel(tempVar);
            (yyval.stringValue) = concatenateTwoStrings(expr_value, tempVar, ',');
          }
        }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 517 "yacc.y"
    { 
          (yyval.stringValue) = (yyvsp[(1) - (1)].stringValue); // propagate the result of the factor
        }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 522 "yacc.y"
    {
            // convert integer value to string
            char* expr_info = concatenateTwoStrings("int", (yyvsp[(1) - (1)].stringValue), ','); 
            (yyval.stringValue) = expr_info;
            quad.pushLabel((yyvsp[(1) - (1)].stringValue)); 
          }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 528 "yacc.y"
    {
            char* expr_info = concatenateTwoStrings("float", (yyvsp[(1) - (1)].stringValue), ','); 
            (yyval.stringValue) = expr_info;
            quad.pushLabel((yyvsp[(1) - (1)].stringValue));
          }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 533 "yacc.y"
    {
            char* expr_info = concatenateTwoStrings("char", (yyvsp[(1) - (1)].stringValue), ','); 
            (yyval.stringValue) = expr_info;
            quad.pushLabel((yyvsp[(1) - (1)].stringValue));
          }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 538 "yacc.y"
    {
            char* expr_info = concatenateTwoStrings("string", (yyvsp[(1) - (1)].stringValue), ','); 
            (yyval.stringValue) = expr_info;
            quad.pushLabel((yyvsp[(1) - (1)].stringValue));
          }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 543 "yacc.y"
    {
            char* expr_info = concatenateTwoStrings("bool", (yyvsp[(1) - (1)].stringValue), ','); 
            (yyval.stringValue) = expr_info;
            quad.pushLabel((yyvsp[(1) - (1)].stringValue));
          }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 548 "yacc.y"
    {
              SymbolTable* entryScope =  symbolHier.getEntryScope((yyvsp[(1) - (1)].stringValue));

              if (!entryScope)
              {
                semantic_errors("Variable is not declared\n");
              }
              else {
                //variable is declared and we have its scope table now lets get the entry from the table
                SymbolTableEntry* entry = entryScope->getEntry((yyvsp[(1) - (1)].stringValue));
                if(!entry->getIsInitialized())
                {
                  semantic_errors("Variable is not initiliazed\n");
                }
                entry->setIsAccessed(true);
                printf("|| entry->getValue(): %s\n", entry->getValue());
                printf("|| entry->getVariableName(): %s\n", entry->getVariableName());
                (yyval.stringValue) = concatenateTwoStrings(entry->getValue(), entry->getVariableName(), ',');
              }
            }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 568 "yacc.y"
    { (yyval.stringValue) = (yyvsp[(2) - (3)].stringValue); }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 572 "yacc.y"
    {}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 573 "yacc.y"
    {}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 576 "yacc.y"
    {
  //create new table
  SymbolTable* localTable = new SymbolTable(strdup(("Local" + to_string(num_scopes)).c_str()), symbolHier.currentScopeTable);
  num_scopes = num_scopes +1;
  //add table as a child to current
  symbolHier.currentScopeTable->addChild(localTable);
  symbolHier.addSymbolTable(localTable);
  //update current scope
  symbolHier.updateCurrentScope(localTable);                
}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 588 "yacc.y"
    {
  symbolHier.updateCurrentScope(symbolHier.currentScopeTable->parent);                   
}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 590 "yacc.y"
    {
  yyerror("Missing closing brace '}' at the end of scope.");
}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 602 "yacc.y"
    {}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 603 "yacc.y"
    {}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 606 "yacc.y"
    {}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 607 "yacc.y"
    {}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 608 "yacc.y"
    {}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 611 "yacc.y"
    {
    SemanticChecker semanticChecker;
    if (!semanticChecker.isBool((yyvsp[(3) - (6)].stringValue))) {
      semantic_errors("Condition expression must be of boolean type\n");
    } else {
      printf("ELSE IF statement ends\n");
      quad.addLine();
    }
}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 622 "yacc.y"
    {
    printf("ELSE statement ends\n");
    quad.addLine();
}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 628 "yacc.y"
    {
    SemanticChecker semanticChecker;
    if (!semanticChecker.isBool((yyvsp[(3) - (6)].stringValue))) {
        printf("Condition expression: %s\n", (yyvsp[(3) - (6)].stringValue));
        semantic_errors("Condition expression must be of boolean type\n");
    } else {
        printf("IF statement ends\n");
        quad.addLine();
    }
}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 639 "yacc.y"
    {
    printf("IF statement begins\n");
}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 643 "yacc.y"
    {
    printf("ELSE IF statement begins\n");
}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 647 "yacc.y"
    {
    printf("ELSE statement begins\n");
}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 653 "yacc.y"
    {
  quad.endLoop(); 
}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 657 "yacc.y"
    {
  quad.pushLabel("true");
  quad.addBranch("==");
}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 662 "yacc.y"
    {
  quad.addLoopStart();
}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 668 "yacc.y"
    {
  quad.endLoop(); 
}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 672 "yacc.y"
    { 
                quad.addLoopStart();
             }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 679 "yacc.y"
    {
  printf("Function ends\n");
  symbolHier.updateCurrentScope(symbolHier.currentScopeTable->parent);
}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 686 "yacc.y"
    {
if(symbolHier.currentScopeTable->lookUp((yyvsp[(3) - (5)].stringValue),(yyvsp[(2) - (5)].stringValue)))
{
  semantic_errors("Variable is already in param list\n");
}else{
  quad.popLabel();
  symbolHier.addEntryToCurrentScope((yyvsp[(3) - (5)].stringValue),(yyvsp[(2) - (5)].stringValue),(yyvsp[(2) - (5)].stringValue),true,false);
}
}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 695 "yacc.y"
    {
if(symbolHier.currentScopeTable->lookUp((yyvsp[(3) - (7)].stringValue),(yyvsp[(2) - (7)].stringValue)))
{
  semantic_errors("Variable is already in param list\n");
}
//check dataType and expression type compatible or not

                  //Assuming compatible then:
                  // symbolHier.addEntryToCurrentScope($2,$1,expression,true,false);
              }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 705 "yacc.y"
    { printf("Starting params list\n");}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 710 "yacc.y"
    {
  SymbolTable* functionTable = new SymbolTable((yyvsp[(2) - (2)].stringValue), symbolHier.currentScopeTable, (yyvsp[(1) - (2)].stringValue));
  //add table as a child to current
  symbolHier.currentScopeTable->addChild(functionTable);
  symbolHier.addFunctionTable(functionTable);
  //update current scope
  symbolHier.updateCurrentScope(functionTable);
  // Use quads to add the function label
  quad.isFunctionFlag = 1;
  quad.insertEntry(concatenateTwoStrings((yyvsp[(2) - (2)].stringValue),":"),"","","");
  quad.popLabel();
}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 722 "yacc.y"
    {
  SymbolTable* functionTable = new SymbolTable((yyvsp[(2) - (2)].stringValue), symbolHier.currentScopeTable,(char*)"void");
  //add table as a child to current
  symbolHier.currentScopeTable->addChild(functionTable);
  symbolHier.addSymbolTable(functionTable);
  //update current scope
  symbolHier.updateCurrentScope(functionTable);
  // Use quads to add the function label
  quad.isFunctionFlag = 1;
  quad.insertEntry(concatenateTwoStrings((yyvsp[(2) - (2)].stringValue),":"),"","","");
}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 735 "yacc.y"
    {
if(symbolHier.currentScopeTable->lookUp((yyvsp[(3) - (4)].stringValue),(yyvsp[(2) - (4)].stringValue)))
{
  semantic_errors("Variable is already in param list\n");
}else{
  quad.popLabel();
  symbolHier.addEntryToCurrentScope((yyvsp[(3) - (4)].stringValue),(yyvsp[(2) - (4)].stringValue),(yyvsp[(2) - (4)].stringValue),true,false);
}

                  }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 745 "yacc.y"
    {}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 747 "yacc.y"
    {
if(symbolHier.currentScopeTable->lookUp((yyvsp[(3) - (6)].stringValue),(yyvsp[(2) - (6)].stringValue)))
{
  semantic_errors("Variable is already in param list\n");
}
//check dataType and expression type compatible or not

                      //Assuming compatible then:
                      // symbolHier.addEntryToCurrentScope($2,$1,expression,true,false);
                    }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 757 "yacc.y"
    { (yyval.stringValue) = (yyvsp[(1) - (1)].stringValue); }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 761 "yacc.y"
    {
                      char* expr_value, *expr_label="";
                      vector <char*> expr_info = splitString((yyvsp[(3) - (5)].stringValue), ',');
                      expr_value = expr_info[0];
                      if (expr_info.size() > 1) expr_label = expr_info[1];
                      printf("Function Call: expr_info: %s || %s\n", expr_value, expr_label);
                      char* params = concatenateTwoStrings((yyvsp[(4) - (5)].stringValue),expr_label,',');
                      printf("Function Call: %s\n", params);
                      printf("Function Call: %s\n", (yyvsp[(4) - (5)].stringValue));
                      char* reason = nullptr;
                      SymbolTable* foundTable = symbolHier.checkFunctionExists((yyvsp[(1) - (5)].stringValue), params, reason);
                      if (!foundTable){
                        yyerror(reason);
                        printf("Function %s not found\n", (yyvsp[(1) - (5)].stringValue));
                      }
                      else {
                        quad.popLabel();
                        (yyval.stringValue) = concatenateTwoStrings(foundTable->returnType, params, ',');
                        printf("Function %s called\n", (yyvsp[(1) - (5)].stringValue));
                        vector<char*> paramsList = splitString(params, ',');
                        quad.pushLabel(concatenateList(paramsList)); 
                      }
                    }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 784 "yacc.y"
    {
                      char* reason = nullptr;
                      SymbolTable* foundTable = symbolHier.checkFunctionExists((yyvsp[(1) - (3)].stringValue), nullptr, reason);
                      if (!foundTable){
                        semantic_errors(reason);
                      }
                      else {
                        (yyval.stringValue) = foundTable->returnType;
                        printf("Function %s called\n", (yyvsp[(1) - (3)].stringValue));
                        quad.pushLabel((yyvsp[(1) - (3)].stringValue));
                      }
                    }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 798 "yacc.y"
    {
                          quad.popLabel();
                          char* expr_value, *expr_label="";   
                          vector <char*> expr_info = splitString((yyvsp[(2) - (3)].stringValue), ',');
                          expr_value = expr_info[0];
                          if (expr_info.size() > 1) expr_label = expr_info[1];
                          (yyval.stringValue) = concatenateTwoStrings((yyvsp[(3) - (3)].stringValue), expr_label, ',');
                        }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 806 "yacc.y"
    {(yyval.stringValue) = (yyvsp[(1) - (1)].stringValue);}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 809 "yacc.y"
    {(yyval.stringValue) = "";}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 811 "yacc.y"
    {
                    printf("||Return statement: %s\n", (yyvsp[(2) - (3)].stringValue));
                    char* expr_value, *expr_name="";
                    vector <char*> expr_info = splitString((yyvsp[(2) - (3)].stringValue), ',');
                    expr_value = expr_info[0];
                    if (expr_info.size() > 1) expr_name = expr_info[1];
                    SymbolTable* funcScope = symbolHier.currentScopeTable->parent;
                    if (!funcScope || funcScope->returnType == nullptr) {
                      yyerror("Return statement not allowed in this scope\n");
                    } else if (!funcScope->validateReturnType(expr_value)) {
                      yyerror("Return type does not match the function return type\n");
                    } else {
                      printf("Return statement ends\n");
                      (yyval.stringValue) = (yyvsp[(2) - (3)].stringValue);
                      if (strcmp(expr_name, "") != 0) {
                        quad.addUnary("RET", "");
                      } else {
                        quad.addUnary("RET", "");
                      }
                      quad.isFunctionFlag = 0;
                    }
                  }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 833 "yacc.y"
    {
                    if (symbolHier.currentScopeTable->returnType == nullptr) {
                      yyerror("Return statement not allowed in this scope\n");
                    } else if (!symbolHier.currentScopeTable->validateReturnType("void")) {
                      yyerror("Return type does not match the function return type\n");
                    } else {
                      printf("Return statement ends\n");
                      (yyval.stringValue) = "";
                    }
                }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 844 "yacc.y"
    {}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 855 "yacc.y"
    {
  symbolHier.updateCurrentScope(symbolHier.currentScopeTable->parent); 
}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 860 "yacc.y"
    {
  SymbolTable* localTable = new SymbolTable(strdup(("Local" + to_string(num_scopes)).c_str()), symbolHier.currentScopeTable);
  num_scopes = num_scopes +1;
  //add table as a child to current
  symbolHier.currentScopeTable->addChild(localTable);
  symbolHier.addSymbolTable(localTable);
  //update current scope
  symbolHier.updateCurrentScope(localTable);
}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 870 "yacc.y"
    {}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 871 "yacc.y"
    {}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 872 "yacc.y"
    { (yyval.stringValue) = (yyvsp[(1) - (1)].stringValue); }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 878 "yacc.y"
    {}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 883 "yacc.y"
    {}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 884 "yacc.y"
    {}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 887 "yacc.y"
    {}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 888 "yacc.y"
    {}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 889 "yacc.y"
    {}
    break;



/* Line 1455 of yacc.c  */
#line 3023 "y.tab.c"
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
#line 893 "yacc.y"


void yyerror(const char *msg){
  fprintf(yyout, "line [%d]: Error: %s\n", yylineno, msg);
}
void semantic_errors(const char *msg) {  
      if (semantic_file == NULL) {
          fprintf(stderr, "Error: Could not open semantic_errors.txt for writing\n");
          return;
      }

      fprintf(semantic_file, "line [%d]: Semantic Error: %s\n", yylineno, msg); 
}

void semantic_warns(const char *msg) {
      if (semantic_file == NULL) {
          fprintf(stderr, "Error: Could not open semantic_errors.txt for writing\n");
          return;
      }

      fprintf(semantic_file, "Semantic Warning: %s\n", msg); 
}

int main(int argc, char** argv){

  FILE *file = fopen(argv[1], "r");
  semantic_file = fopen("semantic_errors.txt", "w");

  if(file == NULL){
    yyerror("File not found!\n");
    return 1;
  }
  yyin = file;
  yyout = fopen("syntax_errors.txt", "w");

if (yyparse() == 0) {
    printf("Program parsed successfully.\n");
} else {
    printf("Program did not parse due to syntax errors.\n");
}
    
  symbolHier.printAllTables();
  fclose(yyin);
  fclose(yyout);
  return 0;
}

