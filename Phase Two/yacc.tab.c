
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
  int yylex(void);  
  void yyerror(const char *s);  
  extern FILE* yyin;                          
  extern FILE* yyout;  
  int yylineno = 1;
  int num_scopes = 0;
  SymbolHier symbolHier;


/* Line 189 of yacc.c  */
#line 87 "yacc.tab.c"

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



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 15 "yacc.y"

    char* intValue;
    char* floatValue;
    char charValue;
    char* stringValue;
    char* boolValue;
    char* idValue;



/* Line 214 of yacc.c  */
#line 175 "yacc.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 187 "yacc.tab.c"

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
#define YYLAST   249

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  102
/* YYNRULES -- Number of states.  */
#define YYNSTATES  207

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
      77,    81,    83,    87,    89,    92,    94,    98,   100,   102,
     104,   106,   108,   110,   112,   114,   118,   122,   124,   128,
     132,   134,   138,   141,   143,   145,   147,   149,   153,   157,
     160,   162,   164,   166,   169,   175,   177,   180,   182,   188,
     190,   197,   199,   202,   205,   213,   223,   228,   236,   246,
     251,   256,   258,   265,   267,   273,   277,   281,   283,   284,
     288,   291,   293,   305,   307,   312,   316,   318,   326,   329,
     331,   336,   341
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      50,     0,    -1,    51,    52,    -1,    -1,    53,    54,    -1,
      52,    53,    54,    -1,    -1,    55,    56,    42,    -1,    55,
      56,    15,    57,    42,    -1,     8,    55,    56,    15,    57,
      42,    -1,    56,    15,    57,    42,    -1,    68,    -1,    71,
      -1,    76,    -1,    78,    -1,    80,    -1,    84,    -1,    87,
      -1,    89,    -1,    31,    42,    -1,    32,    42,    -1,    92,
      -1,     3,    -1,     4,    -1,     5,    -1,     6,    -1,     7,
      -1,    41,    -1,    58,    -1,    84,    -1,    58,    17,    59,
      -1,    59,    -1,    59,    16,    60,    -1,    60,    -1,    18,
      60,    -1,    61,    -1,    61,    62,    63,    -1,    63,    -1,
      19,    -1,    20,    -1,    21,    -1,    22,    -1,    23,    -1,
      24,    -1,    64,    -1,    63,    10,    64,    -1,    63,    11,
      64,    -1,    65,    -1,    64,    12,    65,    -1,    64,    13,
      65,    -1,    66,    -1,    66,    14,    65,    -1,    11,    66,
      -1,    67,    -1,    36,    -1,    37,    -1,    56,    -1,    43,
      58,    44,    -1,    69,    52,    70,    -1,    69,    70,    -1,
      45,    -1,    46,    -1,    72,    -1,    72,    74,    -1,    73,
      43,    57,    44,    68,    -1,    25,    -1,    75,    68,    -1,
      26,    -1,    77,    43,    57,    44,    68,    -1,    27,    -1,
      79,    68,    27,    43,    57,    44,    -1,    28,    -1,    81,
      68,    -1,    81,    42,    -1,    55,    56,    43,    55,    56,
      82,    44,    -1,    55,    56,    43,    55,    56,    15,    57,
      83,    44,    -1,    55,    56,    43,    44,    -1,     9,    56,
      43,    55,    56,    82,    44,    -1,     9,    56,    43,    55,
      56,    15,    57,    83,    44,    -1,     9,    56,    43,    44,
      -1,    47,    55,    56,    82,    -1,    83,    -1,    47,    55,
      56,    15,    57,    83,    -1,    86,    -1,    56,    43,    57,
      85,    44,    -1,    56,    43,    44,    -1,    47,    57,    85,
      -1,    86,    -1,    -1,    88,    57,    42,    -1,    88,    42,
      -1,    29,    -1,    90,    43,    91,    42,    57,    42,    56,
      15,    57,    44,    68,    -1,    30,    -1,    55,    56,    15,
      57,    -1,    56,    15,    57,    -1,    86,    -1,    33,    43,
      56,    44,    45,    93,    46,    -1,    93,    94,    -1,    94,
      -1,    34,    36,    48,    52,    -1,    34,    39,    48,    52,
      -1,    35,    48,    52,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    49,    49,    52,    58,    59,    61,    64,    73,    84,
      85,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   115,   116,   117,   118,   119,   121,   125,   126,
     135,   136,   139,   140,   143,   144,   149,   150,   153,   154,
     155,   156,   157,   158,   163,   164,   165,   168,   169,   170,
     174,   175,   184,   194,   197,   198,   199,   217,   221,   222,
     225,   239,   251,   252,   255,   259,   262,   265,   271,   275,
     281,   286,   294,   295,   301,   303,   304,   305,   306,   307,
     313,   315,   317,   318,   322,   323,   326,   327,   330,   332,
     333,   335,   346,   351,   364,   365,   366,   372,   377,   378,
     381,   382,   383
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
  "start_line_mark", "line", "dataType", "ID", "expression",
  "logExpression", "andLogExpression", "notLogExpression",
  "compExpression", "Comparator", "arithExpression", "term1", "term2",
  "term3", "factor", "scope", "startScope", "endScope", "ifStatement",
  "ifScope", "IF_mark", "elseScope", "ELSE_mark", "whileLoop",
  "WHILE_mark", "doWhile", "DO_mark", "function", "functionSig",
  "functionParams", "defaultParams", "functionCall", "functionCallParams",
  "epsilon", "returnStatement", "RETURN_mark", "forLoop", "FOR_mark",
  "forLoop1", "switchCase", "multiCase", "singleCase", 0
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
      54,    54,    55,    55,    55,    55,    55,    56,    57,    57,
      58,    58,    59,    59,    60,    60,    61,    61,    62,    62,
      62,    62,    62,    62,    63,    63,    63,    64,    64,    64,
      65,    65,    66,    66,    67,    67,    67,    67,    68,    68,
      69,    70,    71,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    80,    81,    81,    81,    81,    81,    81,
      82,    82,    83,    83,    84,    84,    85,    85,    86,    87,
      87,    88,    89,    90,    91,    91,    91,    92,    93,    93,
      94,    94,    94
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     2,     3,     0,     3,     5,     6,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     1,     2,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     1,     3,     3,
       1,     3,     2,     1,     1,     1,     1,     3,     3,     2,
       1,     1,     1,     2,     5,     1,     2,     1,     5,     1,
       6,     1,     2,     2,     7,     9,     4,     7,     9,     4,
       4,     1,     6,     1,     5,     3,     3,     1,     0,     3,
       2,     1,    11,     1,     4,     3,     1,     7,     2,     1,
       4,     4,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     6,     1,     6,     0,     0,    22,    23,    24,
      25,    26,     0,     0,    65,    69,    71,    91,    93,     0,
       0,     0,    27,    60,     4,     0,     0,    11,     6,    12,
      62,     0,    13,     0,    14,     0,    15,     0,    16,    17,
       0,    18,     0,    21,     5,     0,     0,    19,    20,     0,
       0,     0,     0,    61,     6,    59,    67,    63,     0,     0,
       0,     0,    73,    72,     0,     0,    54,    55,    90,     0,
      56,     0,    28,    31,    33,    35,    37,    44,    47,    50,
      53,    29,    88,     0,     0,     0,     0,     7,     0,     0,
      85,    88,    58,    66,     0,     0,     0,    56,    52,    34,
       0,    89,     0,     0,    38,    39,    40,    41,    42,    43,
       0,     0,     0,     0,     0,     0,     0,     0,    96,     0,
       0,    79,     0,     0,     0,    76,     0,    10,     0,     0,
      87,     0,     0,     0,    57,    30,    32,    36,    45,    46,
      48,    49,    51,     0,     0,     0,     0,    88,     0,     8,
      88,    88,    84,    64,    68,     0,     0,    95,     0,     9,
       0,     0,     0,    81,    83,     0,     0,     0,    99,     0,
       0,    86,    70,    94,     0,    88,     0,    77,     0,     0,
       6,    97,    98,    88,    74,     0,     0,     0,    88,     6,
       6,     6,     0,     0,     0,    78,     0,    80,     6,     6,
      75,     0,     0,    88,     0,    82,    92
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,     5,    24,    25,    70,    71,    72,
      73,    74,    75,   110,    76,    77,    78,    79,    80,    27,
      28,    55,    29,    30,    31,    57,    58,    32,    33,    34,
      35,    36,    37,   162,   163,    81,   129,   164,    39,    40,
      41,    42,   119,    43,   167,   168
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -122
static const yytype_int16 yypact[] =
{
    -122,    14,  -122,  -122,    43,    27,    27,  -122,  -122,  -122,
    -122,  -122,   179,    22,  -122,  -122,  -122,  -122,  -122,    45,
      56,    60,  -122,  -122,  -122,    22,     2,  -122,    68,  -122,
     117,   106,  -122,   108,  -122,    73,  -122,    91,  -122,  -122,
     126,  -122,   112,  -122,  -122,    22,   129,  -122,  -122,    22,
      89,    33,   104,  -122,    68,  -122,  -122,  -122,    73,    33,
      33,   169,  -122,  -122,    54,    33,  -122,  -122,  -122,    33,
     154,   156,   182,   184,  -122,   157,    -2,     6,  -122,   188,
    -122,  -122,    79,   186,    20,   159,    33,  -122,    34,   162,
    -122,   158,  -122,  -122,   163,   164,   166,  -122,  -122,  -122,
      36,  -122,    33,    33,  -122,  -122,  -122,  -122,  -122,  -122,
      54,    54,    54,    54,    54,    54,    22,   191,  -122,   168,
      33,  -122,    22,   167,   171,  -122,    22,  -122,    33,   170,
    -122,    73,    73,    33,  -122,   184,  -122,    -2,     6,     6,
    -122,  -122,  -122,   196,    33,    33,   173,     1,    94,  -122,
      77,   158,  -122,  -122,  -122,   172,    33,  -122,   175,  -122,
      33,   179,   174,  -122,  -122,   103,   176,    92,  -122,    33,
     177,  -122,  -122,  -122,    22,   178,    22,  -122,   180,   181,
    -122,  -122,  -122,   178,  -122,   204,   179,   183,    78,  -122,
    -122,   100,   189,    33,    22,  -122,    33,  -122,   118,   124,
    -122,   190,   205,   178,    73,  -122,  -122
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -122,  -122,  -122,   -24,    -4,   216,   -11,    -3,   -39,   161,
     121,   -54,  -122,  -122,   116,    49,    75,   185,  -122,   -30,
    -122,   192,  -122,  -122,  -122,  -122,  -122,  -122,  -122,  -122,
    -122,  -122,  -122,  -121,   -87,   187,    80,   -76,  -122,  -122,
    -122,  -122,  -122,  -122,  -122,    65
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -103
static const yytype_int16 yytable[] =
{
       6,    45,    26,    26,    54,    61,   118,    63,   111,   112,
      46,    99,    89,    91,     3,   130,   160,    51,   113,   114,
      94,    95,    50,     7,     8,     9,    10,    11,    93,   170,
       7,     8,     9,    10,    11,    12,    13,     7,     8,     9,
      10,    11,    83,    -2,    64,    52,    85,   124,   161,   136,
       6,    65,    14,   102,    15,    16,    17,    18,    19,    20,
      21,    97,    97,    22,   121,    64,    97,   197,    22,    66,
      67,   116,    23,   122,    22,   130,    69,   126,   125,   117,
     134,   146,     7,     8,     9,    10,    11,    47,   187,   151,
      66,    67,   169,   196,   155,    22,   192,    69,    48,    97,
      97,   153,   154,    49,    86,   157,   158,    97,    97,    97,
      97,    97,    97,   143,    53,    64,   205,   173,    23,   147,
      22,   175,    65,   150,   161,   161,   165,   166,   165,   166,
     183,    87,    88,    62,  -102,  -102,    23,    64,   181,   178,
      66,    67,   179,    56,    65,    22,  -102,    69,    90,    59,
     176,    60,  -100,  -100,   201,    82,   191,   203,  -101,  -101,
     138,   139,    66,    67,  -100,   198,   199,    22,    68,    69,
    -101,   185,    84,   188,   206,   194,   104,   105,   106,   107,
     108,   109,     7,     8,     9,    10,    11,     6,   140,   141,
     142,   202,    38,    38,     6,     6,    96,    52,   101,   102,
     103,   120,   115,   123,   127,   128,   144,   131,   132,   133,
     145,   156,   148,   149,   152,   159,   172,   174,   177,   193,
     196,   184,    44,   135,   180,   186,   137,   195,   189,   190,
     100,   171,   182,   200,   204,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,     0,     0,    98
};

static const yytype_int16 yycheck[] =
{
       4,    12,     5,     6,    28,    35,    82,    37,    10,    11,
      13,    65,    51,    52,     0,    91,    15,    15,    12,    13,
      59,    60,    25,     3,     4,     5,     6,     7,    58,   150,
       3,     4,     5,     6,     7,     8,     9,     3,     4,     5,
       6,     7,    45,     0,    11,    43,    49,    86,    47,   103,
      54,    18,    25,    17,    27,    28,    29,    30,    31,    32,
      33,    64,    65,    41,    44,    11,    69,   188,    41,    36,
      37,    82,    45,    84,    41,   151,    43,    88,    44,    82,
      44,   120,     3,     4,     5,     6,     7,    42,   175,   128,
      36,    37,    15,    15,   133,    41,   183,    43,    42,   102,
     103,   131,   132,    43,    15,   144,   145,   110,   111,   112,
     113,   114,   115,   116,    46,    11,   203,   156,    45,   122,
      41,   160,    18,   126,    47,    47,    34,    35,    34,    35,
     169,    42,    43,    42,    34,    35,    45,    11,    46,    36,
      36,    37,    39,    26,    18,    41,    46,    43,    44,    43,
     161,    43,    34,    35,   193,    43,   180,   196,    34,    35,
     111,   112,    36,    37,    46,   189,   190,    41,    42,    43,
      46,   174,    43,   176,   204,   186,    19,    20,    21,    22,
      23,    24,     3,     4,     5,     6,     7,   191,   113,   114,
     115,   194,     5,     6,   198,   199,    27,    43,    42,    17,
      16,    15,    14,    44,    42,    47,    15,    44,    44,    43,
      42,    15,    45,    42,    44,    42,    44,    42,    44,    15,
      15,    44,     6,   102,    48,    47,   110,    44,    48,    48,
      69,   151,   167,    44,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    64
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    50,    51,     0,    52,    53,    53,     3,     4,     5,
       6,     7,     8,     9,    25,    27,    28,    29,    30,    31,
      32,    33,    41,    45,    54,    55,    56,    68,    69,    71,
      72,    73,    76,    77,    78,    79,    80,    81,    84,    87,
      88,    89,    90,    92,    54,    55,    56,    42,    42,    43,
      56,    15,    43,    46,    52,    70,    26,    74,    75,    43,
      43,    68,    42,    68,    11,    18,    36,    37,    42,    43,
      56,    57,    58,    59,    60,    61,    63,    64,    65,    66,
      67,    84,    43,    56,    43,    56,    15,    42,    43,    57,
      44,    57,    70,    68,    57,    57,    27,    56,    66,    60,
      58,    42,    17,    16,    19,    20,    21,    22,    23,    24,
      62,    10,    11,    12,    13,    14,    55,    56,    86,    91,
      15,    44,    55,    44,    57,    44,    55,    42,    47,    85,
      86,    44,    44,    43,    44,    59,    60,    63,    64,    64,
      65,    65,    65,    56,    15,    42,    57,    56,    45,    42,
      56,    57,    44,    68,    68,    57,    15,    57,    57,    42,
      15,    47,    82,    83,    86,    34,    35,    93,    94,    15,
      82,    85,    44,    57,    42,    57,    55,    44,    36,    39,
      48,    46,    94,    57,    44,    56,    47,    83,    56,    48,
      48,    52,    83,    15,    55,    44,    15,    82,    52,    52,
      44,    57,    56,    57,    44,    83,    68
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
#line 49 "yacc.y"
    {;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 52 "yacc.y"
    {
  SymbolTable* globalTable = new SymbolTable("Global", nullptr);
  symbolHier.addSymbolTable(globalTable);
  symbolHier.updateCurrentScope(globalTable);
;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 58 "yacc.y"
    {;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 59 "yacc.y"
    {;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 61 "yacc.y"
    {printf("Processing line %d in the script.\n",yylineno);;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 64 "yacc.y"
    {

if(symbolHier.currentScopeTable->lookUp((yyvsp[(2) - (3)].stringValue),(yyvsp[(1) - (3)].stringValue)))
{
  yyerror("Variable is already declared\n");
}else{
  symbolHier.addEntryToCurrentScope((yyvsp[(2) - (3)].stringValue),(yyvsp[(1) - (3)].stringValue),"-0",false,false);
}
;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 73 "yacc.y"
    {

if(symbolHier.currentScopeTable->lookUp((yyvsp[(2) - (5)].stringValue),(yyvsp[(1) - (5)].stringValue)))
{
  yyerror("Variable is already declared\n");
}
//check dataType and expression type compatible or not

//Assuming compatible then:
// symbolHier.addEntryToCurrentScope($2,$1,expression,true,false);
;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 84 "yacc.y"
    { printf("Assigned constant value to %s\n", (yyvsp[(3) - (6)].stringValue)); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 86 "yacc.y"
    {
SymbolTable* entryScope =  symbolHier.getEntryScope((yyvsp[(1) - (4)].stringValue));
if(!entryScope)
{
  yyerror("Variable is not declared\n");
}else{
  //variable is declared and we have its scope table now lets get the entry from the table
  SymbolTableEntry* entry = entryScope->getEntry((yyvsp[(1) - (4)].stringValue));
  //Now we need to check if type of expression compatible with type of variable
  entry->setIsAccessed(true);
  entry->setValue((yyvsp[(3) - (4)].stringValue));
}


     ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 101 "yacc.y"
    {;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 102 "yacc.y"
    {;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 103 "yacc.y"
    {;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 104 "yacc.y"
    {;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 105 "yacc.y"
    {;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 106 "yacc.y"
    {;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 107 "yacc.y"
    {;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 108 "yacc.y"
    {;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 109 "yacc.y"
    {;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 110 "yacc.y"
    {;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 115 "yacc.y"
    { (yyval.stringValue) = "int";  ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 116 "yacc.y"
    { (yyval.stringValue) = "float";  ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 117 "yacc.y"
    { (yyval.stringValue) = "char"; ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 118 "yacc.y"
    { (yyval.stringValue) = "string"; ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 119 "yacc.y"
    { (yyval.stringValue) = "bool";;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 121 "yacc.y"
    { (yyval.stringValue) = (yyvsp[(1) - (1)].idValue);;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 125 "yacc.y"
    {(yyval.stringValue) = (yyvsp[(1) - (1)].stringValue);;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 126 "yacc.y"
    {(yyval.stringValue) = (yyvsp[(1) - (1)].stringValue);;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 135 "yacc.y"
    { printf("Evaluated OR expression.\n"); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 136 "yacc.y"
    { printf("Evaluated single andLogExpression.\n"); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 139 "yacc.y"
    { printf("Evaluated AND expression.\n"); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 140 "yacc.y"
    { printf("Evaluated single notLogExpression.\n"); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 143 "yacc.y"
    { printf("Evaluated NOT expression.\n"); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 144 "yacc.y"
    { printf("Evaluated comparison expression.\n"); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 149 "yacc.y"
    { printf("Evaluated comparison expression with comparator.\n"); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 150 "yacc.y"
    { printf("Evaluated simple arithmetic expression.\n"); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 153 "yacc.y"
    { printf("Comparator: ==\n"); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 154 "yacc.y"
    { printf("Comparator: !=\n"); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 155 "yacc.y"
    { printf("Comparator: <\n"); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 156 "yacc.y"
    { printf("Comparator: >\n"); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 157 "yacc.y"
    { printf("Comparator: <=\n"); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 158 "yacc.y"
    { printf("Comparator: >=\n"); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 163 "yacc.y"
    { printf("Processed term1.\n"); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 164 "yacc.y"
    { printf("Processed addition.\n"); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 165 "yacc.y"
    { printf("Processed subtraction.\n"); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 168 "yacc.y"
    { printf("Processed term2.\n"); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 169 "yacc.y"
    { printf("Processed multiplication.\n"); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 170 "yacc.y"
    { printf("Processed division.\n"); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 174 "yacc.y"
    { printf("Processed term3.\n"); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 175 "yacc.y"
    { printf("Processed exponentiation.\n"); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 184 "yacc.y"
    { 
//need to check if term3 returned is a number or not(we can make a funct for it)
//if yes:
// cast string to a number and multipy by -1 = val
//then:
// $$ = val;



 ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 194 "yacc.y"
    { (yyval.stringValue) = (yyvsp[(1) - (1)].stringValue); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 197 "yacc.y"
    { (yyval.stringValue) = (yyvsp[(1) - (1)].intValue); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 198 "yacc.y"
    { (yyval.stringValue) = (yyvsp[(1) - (1)].floatValue);;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 199 "yacc.y"
    {

SymbolTable* entryScope =  symbolHier.getEntryScope((string)(yyvsp[(1) - (1)].stringValue));

if(!entryScope)
{
  yyerror("Variable is not declared\n");
}else{
  //variable is declared and we have its scope table now lets get the entry from the table
  SymbolTableEntry* entry = entryScope->getEntry((string)(yyvsp[(1) - (1)].stringValue));
  if(!entry->getIsInitialized())
  {
    yyerror("Variable is not initiliazed\n");
  }
  entry->setIsAccessed(true);
  (yyval.stringValue) = entry->getValue();
}
;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 217 "yacc.y"
    { printf("Processed parenthesis with logical expression.\n"); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 221 "yacc.y"
    {;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 222 "yacc.y"
    {;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 225 "yacc.y"
    {
//create new table
SymbolTable* localTable = new SymbolTable("Local"+to_string(num_scopes), symbolHier.currentScopeTable);
num_scopes = num_scopes +1;
//add table as a child to current
symbolHier.currentScopeTable->addChild(localTable);
symbolHier.addSymbolTable(localTable);
//update current scope
symbolHier.updateCurrentScope(localTable);

                 
;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 239 "yacc.y"
    {
symbolHier.updateCurrentScope(symbolHier.currentScopeTable->parent);                   
;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 251 "yacc.y"
    {;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 252 "yacc.y"
    {;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 255 "yacc.y"
    {
  printf("IF statement ends\n");
;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 259 "yacc.y"
    {
            printf("IF statement begins\n");
;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 262 "yacc.y"
    {
   printf("ELSE statement ends\n");
;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 265 "yacc.y"
    {
        printf("ELSE statement begins\n");
;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 271 "yacc.y"
    {
printf("While loop Ends\n"); 
;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 275 "yacc.y"
    {
printf("While loop starts\n"); 
;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 281 "yacc.y"
    {
printf("Do While Scope Ends\n"); 
;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 286 "yacc.y"
    { 
                printf("Do While Scope begins\n");
              ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 294 "yacc.y"
    {printf("Function ends\n");;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 295 "yacc.y"
    {
          //no need to put this in symbol table
      

         ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 301 "yacc.y"
    { 
  printf("Starting params list\n");;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 303 "yacc.y"
    { printf("Starting params list\n");;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 304 "yacc.y"
    { printf("Starting params list\n");;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 305 "yacc.y"
    { printf("Starting params list\n");;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 306 "yacc.y"
    { printf("Starting params list\n");;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 307 "yacc.y"
    { printf("Starting params list\n");;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 313 "yacc.y"
    {
;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 315 "yacc.y"
    {;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 317 "yacc.y"
    {;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 318 "yacc.y"
    {;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 322 "yacc.y"
    {printf("Calling functions %s\n",(yyvsp[(1) - (5)].stringValue));;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 323 "yacc.y"
    {printf("Calling function %s\n",(yyvsp[(1) - (3)].stringValue));;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 326 "yacc.y"
    {;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 327 "yacc.y"
    {;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 330 "yacc.y"
    {;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 332 "yacc.y"
    {;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 333 "yacc.y"
    {;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 335 "yacc.y"
    {printf("returning from function\n");;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 346 "yacc.y"
    {
symbolHier.updateCurrentScope(symbolHier.currentScopeTable->parent); 
;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 351 "yacc.y"
    {

SymbolTable* localTable = new SymbolTable("Local"+to_string(num_scopes), symbolHier.currentScopeTable);
num_scopes = num_scopes +1;
//add table as a child to current
symbolHier.currentScopeTable->addChild(localTable);
symbolHier.addSymbolTable(localTable);
//update current scope
symbolHier.updateCurrentScope(localTable);


;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 364 "yacc.y"
    {;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 365 "yacc.y"
    {;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 366 "yacc.y"
    {;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 372 "yacc.y"
    {;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 377 "yacc.y"
    {;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 378 "yacc.y"
    {;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 381 "yacc.y"
    {;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 382 "yacc.y"
    {;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 383 "yacc.y"
    {;}
    break;



/* Line 1455 of yacc.c  */
#line 2386 "yacc.tab.c"
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
#line 387 "yacc.y"


void yyerror(const char *msg){
  fprintf(yyout, "line [%d]: Error: %s\n", yylineno, msg);
}

int main(int argc, char** argv){

  FILE *file = fopen(argv[1], "r");

  if(file == NULL){
    yyerror("File not found!\n");
    return 1;
  }
  yyin = file;
  yyout = fopen("errors.txt", "w");

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

