
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
#line 1 "yacc.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    int yylex(void);  // Forward declaration for yylex
    void yyerror(const char *s);  // Forward declaration for yyerror
    extern FILE* yyin;                          
    extern FILE* yyout;  
    int yylineno = 1;  


/* Line 189 of yacc.c  */
#line 85 "yacc.tab.c"

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
#line 12 "yacc.y"

    int intValue;
    float floatValue;
    char charValue;
    char* stringValue;
    int boolValue;
    char* idValue;



/* Line 214 of yacc.c  */
#line 173 "yacc.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 185 "yacc.tab.c"

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   253

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNRULES -- Number of states.  */
#define YYNSTATES  208

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
       0,     0,     3,     5,     8,    12,    13,    17,    23,    30,
      35,    37,    39,    41,    43,    45,    47,    49,    51,    54,
      57,    59,    61,    63,    65,    67,    69,    71,    73,    75,
      79,    81,    85,    87,    90,    92,    96,    98,   100,   102,
     104,   106,   108,   110,   112,   116,   120,   122,   126,   130,
     132,   136,   139,   141,   143,   145,   147,   149,   151,   155,
     159,   162,   164,   166,   168,   171,   177,   179,   182,   184,
     190,   192,   199,   201,   204,   207,   215,   225,   230,   238,
     248,   253,   258,   260,   267,   269,   275,   279,   283,   285,
     286,   290,   293,   295,   307,   309,   314,   318,   320,   328,
     331,   333,   338,   343
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      50,     0,    -1,    51,    -1,    52,    53,    -1,    51,    52,
      53,    -1,    -1,    54,    55,    42,    -1,    54,    55,    15,
      56,    42,    -1,     8,    54,    55,    15,    56,    42,    -1,
      55,    15,    56,    42,    -1,    67,    -1,    70,    -1,    75,
      -1,    77,    -1,    79,    -1,    83,    -1,    86,    -1,    88,
      -1,    31,    42,    -1,    32,    42,    -1,    91,    -1,     3,
      -1,     4,    -1,     5,    -1,     6,    -1,     7,    -1,    41,
      -1,    57,    -1,    83,    -1,    57,    17,    58,    -1,    58,
      -1,    58,    16,    59,    -1,    59,    -1,    18,    59,    -1,
      60,    -1,    60,    61,    62,    -1,    62,    -1,    19,    -1,
      20,    -1,    21,    -1,    22,    -1,    23,    -1,    24,    -1,
      63,    -1,    62,    10,    63,    -1,    62,    11,    63,    -1,
      64,    -1,    63,    12,    64,    -1,    63,    13,    64,    -1,
      65,    -1,    65,    14,    64,    -1,    11,    65,    -1,    66,
      -1,    36,    -1,    37,    -1,    39,    -1,    38,    -1,    55,
      -1,    43,    57,    44,    -1,    68,    51,    69,    -1,    68,
      69,    -1,    45,    -1,    46,    -1,    71,    -1,    71,    73,
      -1,    72,    43,    56,    44,    67,    -1,    25,    -1,    74,
      67,    -1,    26,    -1,    76,    43,    56,    44,    67,    -1,
      27,    -1,    78,    67,    27,    43,    56,    44,    -1,    28,
      -1,    80,    67,    -1,    80,    42,    -1,    54,    55,    43,
      54,    55,    81,    44,    -1,    54,    55,    43,    54,    55,
      15,    56,    82,    44,    -1,    54,    55,    43,    44,    -1,
       9,    55,    43,    54,    55,    81,    44,    -1,     9,    55,
      43,    54,    55,    15,    56,    82,    44,    -1,     9,    55,
      43,    44,    -1,    47,    54,    55,    81,    -1,    82,    -1,
      47,    54,    55,    15,    56,    82,    -1,    85,    -1,    55,
      43,    56,    84,    44,    -1,    55,    43,    44,    -1,    47,
      56,    84,    -1,    85,    -1,    -1,    87,    56,    42,    -1,
      87,    42,    -1,    29,    -1,    89,    43,    90,    42,    56,
      42,    55,    15,    56,    44,    67,    -1,    30,    -1,    54,
      55,    15,    56,    -1,    55,    15,    56,    -1,    85,    -1,
      33,    43,    55,    44,    45,    92,    46,    -1,    92,    93,
      -1,    93,    -1,    34,    36,    48,    51,    -1,    34,    39,
      48,    51,    -1,    35,    48,    51,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    46,    46,    49,    50,    52,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    73,    74,    75,    76,    77,    79,    83,    84,    93,
      94,    97,    98,   101,   102,   107,   108,   111,   112,   113,
     114,   115,   116,   121,   122,   123,   126,   127,   128,   132,
     133,   142,   143,   146,   147,   148,   149,   150,   151,   155,
     156,   159,   165,   177,   178,   181,   185,   188,   191,   197,
     201,   207,   212,   220,   221,   223,   224,   225,   226,   227,
     228,   234,   235,   237,   238,   242,   243,   246,   247,   250,
     252,   253,   255,   259,   262,   264,   265,   266,   272,   277,
     278,   281,   282,   283
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
  "':'", "$accept", "program", "script", "start_line_mark", "line",
  "dataType", "ID", "expression", "logExpression", "andLogExpression",
  "notLogExpression", "compExpression", "Comparator", "arithExpression",
  "term1", "term2", "term3", "factor", "scope", "startScope", "endScope",
  "ifStatement", "ifScope", "IF_mark", "elseScope", "ELSE_mark",
  "whileLoop", "WHILE_mark", "doWhile", "DO_mark", "function",
  "functionSig", "functionParams", "defaultParams", "functionCall",
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
       0,    49,    50,    51,    51,    52,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    54,    54,    54,    54,    54,    55,    56,    56,    57,
      57,    58,    58,    59,    59,    60,    60,    61,    61,    61,
      61,    61,    61,    62,    62,    62,    63,    63,    63,    64,
      64,    65,    65,    66,    66,    66,    66,    66,    66,    67,
      67,    68,    69,    70,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    79,    80,    80,    80,    80,    80,
      80,    81,    81,    82,    82,    83,    83,    84,    84,    85,
      86,    86,    87,    88,    89,    90,    90,    90,    91,    92,
      92,    93,    93,    93
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     3,     0,     3,     5,     6,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     3,     1,     2,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     1,     3,     3,     1,
       3,     2,     1,     1,     1,     1,     1,     1,     3,     3,
       2,     1,     1,     1,     2,     5,     1,     2,     1,     5,
       1,     6,     1,     2,     2,     7,     9,     4,     7,     9,
       4,     4,     1,     6,     1,     5,     3,     3,     1,     0,
       3,     2,     1,    11,     1,     4,     3,     1,     7,     2,
       1,     4,     4,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     5,     0,     1,     0,    21,    22,    23,    24,
      25,     0,     0,    66,    70,    72,    92,    94,     0,     0,
       0,    26,    61,     3,     0,     0,    10,     5,    11,    63,
       0,    12,     0,    13,     0,    14,     0,    15,    16,     0,
      17,     0,    20,     4,     0,     0,    18,    19,     0,     0,
       0,     0,    62,     5,    60,    68,    64,     0,     0,     0,
       0,    74,    73,     0,     0,    53,    54,    56,    55,    91,
       0,    57,     0,    27,    30,    32,    34,    36,    43,    46,
      49,    52,    28,    89,     0,     0,     0,     0,     6,     0,
       0,    86,    89,    59,    67,     0,     0,     0,    57,    51,
      33,     0,    90,     0,     0,    37,    38,    39,    40,    41,
      42,     0,     0,     0,     0,     0,     0,     0,     0,    97,
       0,     0,    80,     0,     0,     0,    77,     0,     9,     0,
       0,    88,     0,     0,     0,    58,    29,    31,    35,    44,
      45,    47,    48,    50,     0,     0,     0,     0,    89,     0,
       7,    89,    89,    85,    65,    69,     0,     0,    96,     0,
       8,     0,     0,     0,    82,    84,     0,     0,     0,   100,
       0,     0,    87,    71,    95,     0,    89,     0,    78,     0,
       0,     5,    98,    99,    89,    75,     0,     0,     0,    89,
       5,     5,     5,     0,     0,     0,    79,     0,    81,     5,
       5,    76,     0,     0,    89,     0,    83,    93
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,    23,    24,    71,    72,    73,    74,
      75,    76,   111,    77,    78,    79,    80,    81,    26,    27,
      54,    28,    29,    30,    56,    57,    31,    32,    33,    34,
      35,    36,   163,   164,    82,   130,   165,    38,    39,    40,
      41,   120,    42,   168,   169
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -142
static const yytype_int16 yypact[] =
{
    -142,    41,    45,   176,  -142,   176,  -142,  -142,  -142,  -142,
    -142,   166,     9,  -142,  -142,  -142,  -142,  -142,    15,    34,
      61,  -142,  -142,  -142,     9,    23,  -142,    38,  -142,    92,
      84,  -142,    87,  -142,    80,  -142,    -3,  -142,  -142,   106,
    -142,    88,  -142,  -142,     9,    90,  -142,  -142,     9,    16,
     150,    49,  -142,    38,  -142,  -142,  -142,    80,   150,   150,
     111,  -142,  -142,    98,   150,  -142,  -142,  -142,  -142,  -142,
     150,   103,   113,   141,   144,  -142,   191,    70,    82,  -142,
     149,  -142,  -142,    29,   160,    12,   120,   150,  -142,    21,
     153,  -142,   145,  -142,  -142,   152,   155,   157,  -142,  -142,
    -142,    20,  -142,   150,   150,  -142,  -142,  -142,  -142,  -142,
    -142,    98,    98,    98,    98,    98,    98,     9,   187,  -142,
     174,   150,  -142,     9,   173,   177,  -142,     9,  -142,   150,
     178,  -142,    80,    80,   150,  -142,   144,  -142,    70,    82,
      82,  -142,  -142,  -142,   205,   150,   150,   181,    -7,    66,
    -142,     7,   145,  -142,  -142,  -142,   180,   150,  -142,   183,
    -142,   150,   166,   182,  -142,  -142,    32,   179,    43,  -142,
     150,   184,  -142,  -142,  -142,     9,   185,     9,  -142,   186,
     188,  -142,  -142,  -142,   185,  -142,   214,   166,   189,    14,
    -142,  -142,    94,   193,   150,     9,  -142,   150,  -142,   116,
     119,  -142,   194,   215,   185,    80,  -142,  -142
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -142,  -142,   -24,    -2,   226,   -10,    -1,   -38,   165,   136,
     -58,  -142,  -142,   129,     8,   -17,   190,  -142,   -27,  -142,
     192,  -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,
    -142,  -142,  -141,  -132,    50,    89,   -78,  -142,  -142,  -142,
    -142,  -142,  -142,  -142,    74
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -104
static const yytype_int16 yytable[] =
{
       5,    44,    25,    53,    25,   119,   100,    60,   161,    62,
     171,    45,    90,    92,   131,     6,     7,     8,     9,    10,
      95,    96,   170,    49,     6,     7,     8,     9,    10,   197,
      94,    87,     6,     7,     8,     9,    10,   103,    50,    61,
     162,     4,    22,    84,   188,    -2,   137,    86,   198,   125,
      21,     5,   193,    37,   162,    37,   122,    46,    88,    89,
      63,   162,    98,    98,   135,   126,    51,    64,   179,    98,
      21,   180,   206,   117,   131,   123,    47,   166,   167,   127,
     112,   113,   118,   147,    52,    65,    66,    67,    68,   182,
      21,   152,    70,    91,   114,   115,   156,   141,   142,   143,
     166,   167,    98,    98,    48,   154,   155,   158,   159,    63,
      98,    98,    98,    98,    98,    98,   144,    63,    55,   174,
     139,   140,   148,   176,    64,    22,   151,    58,  -103,  -103,
      59,    83,   184,    85,    65,    66,    67,    68,    97,    21,
    -103,    70,    65,    66,    67,    68,    51,    21,    69,    70,
    -101,  -101,   177,  -102,  -102,   102,   202,   192,   103,   204,
     104,    63,  -101,   116,   124,  -102,   199,   200,    64,     6,
       7,     8,     9,    10,   186,   121,   189,   195,   207,     6,
       7,     8,     9,    10,    11,    12,    65,    66,    67,    68,
       5,    21,   129,    70,   203,   128,   132,     5,     5,   133,
     134,    13,   145,    14,    15,    16,    17,    18,    19,    20,
     105,   106,   107,   108,   109,   110,   146,    21,   149,   150,
     157,    22,   153,   160,   173,   175,   178,   181,   185,   194,
     197,    43,   187,   196,   190,   101,   191,   201,   205,   136,
     138,   172,   183,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,    99
};

static const yytype_int16 yycheck[] =
{
       2,    11,     3,    27,     5,    83,    64,    34,    15,    36,
     151,    12,    50,    51,    92,     3,     4,     5,     6,     7,
      58,    59,    15,    24,     3,     4,     5,     6,     7,    15,
      57,    15,     3,     4,     5,     6,     7,    17,    15,    42,
      47,     0,    45,    44,   176,     0,   104,    48,   189,    87,
      41,    53,   184,     3,    47,     5,    44,    42,    42,    43,
      11,    47,    63,    64,    44,    44,    43,    18,    36,    70,
      41,    39,   204,    83,   152,    85,    42,    34,    35,    89,
      10,    11,    83,   121,    46,    36,    37,    38,    39,    46,
      41,   129,    43,    44,    12,    13,   134,   114,   115,   116,
      34,    35,   103,   104,    43,   132,   133,   145,   146,    11,
     111,   112,   113,   114,   115,   116,   117,    11,    26,   157,
     112,   113,   123,   161,    18,    45,   127,    43,    34,    35,
      43,    43,   170,    43,    36,    37,    38,    39,    27,    41,
      46,    43,    36,    37,    38,    39,    43,    41,    42,    43,
      34,    35,   162,    34,    35,    42,   194,   181,    17,   197,
      16,    11,    46,    14,    44,    46,   190,   191,    18,     3,
       4,     5,     6,     7,   175,    15,   177,   187,   205,     3,
       4,     5,     6,     7,     8,     9,    36,    37,    38,    39,
     192,    41,    47,    43,   195,    42,    44,   199,   200,    44,
      43,    25,    15,    27,    28,    29,    30,    31,    32,    33,
      19,    20,    21,    22,    23,    24,    42,    41,    45,    42,
      15,    45,    44,    42,    44,    42,    44,    48,    44,    15,
      15,     5,    47,    44,    48,    70,    48,    44,    44,   103,
     111,   152,   168,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    50,    51,    52,     0,    52,     3,     4,     5,     6,
       7,     8,     9,    25,    27,    28,    29,    30,    31,    32,
      33,    41,    45,    53,    54,    55,    67,    68,    70,    71,
      72,    75,    76,    77,    78,    79,    80,    83,    86,    87,
      88,    89,    91,    53,    54,    55,    42,    42,    43,    55,
      15,    43,    46,    51,    69,    26,    73,    74,    43,    43,
      67,    42,    67,    11,    18,    36,    37,    38,    39,    42,
      43,    55,    56,    57,    58,    59,    60,    62,    63,    64,
      65,    66,    83,    43,    55,    43,    55,    15,    42,    43,
      56,    44,    56,    69,    67,    56,    56,    27,    55,    65,
      59,    57,    42,    17,    16,    19,    20,    21,    22,    23,
      24,    61,    10,    11,    12,    13,    14,    54,    55,    85,
      90,    15,    44,    54,    44,    56,    44,    54,    42,    47,
      84,    85,    44,    44,    43,    44,    58,    59,    62,    63,
      63,    64,    64,    64,    55,    15,    42,    56,    55,    45,
      42,    55,    56,    44,    67,    67,    56,    15,    56,    56,
      42,    15,    47,    81,    82,    85,    34,    35,    92,    93,
      15,    81,    84,    44,    56,    42,    56,    54,    44,    36,
      39,    48,    46,    93,    56,    44,    55,    47,    82,    55,
      48,    48,    51,    82,    15,    54,    44,    15,    81,    51,
      51,    44,    56,    55,    56,    44,    82,    67
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
#line 46 "yacc.y"
    {;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 49 "yacc.y"
    {;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 50 "yacc.y"
    {;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 52 "yacc.y"
    {printf("Processing line %d in the script.\n",yylineno);;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 55 "yacc.y"
    { printf("Declared variable %s of type %s\n", (yyvsp[(2) - (3)].stringValue), (yyvsp[(1) - (3)].stringValue)); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 56 "yacc.y"
    { printf("Assigned value to variable %s\n", (yyvsp[(2) - (5)].stringValue)); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 57 "yacc.y"
    { printf("Assigned constant value to %s\n", (yyvsp[(3) - (6)].stringValue)); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 59 "yacc.y"
    {;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 60 "yacc.y"
    {;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 61 "yacc.y"
    {;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 62 "yacc.y"
    {;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 63 "yacc.y"
    {;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 64 "yacc.y"
    {;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 65 "yacc.y"
    {;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 66 "yacc.y"
    {;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 67 "yacc.y"
    {;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 68 "yacc.y"
    {;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 73 "yacc.y"
    { (yyval.stringValue) = "int"; printf("Data type: int\n"); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 74 "yacc.y"
    { (yyval.stringValue) = "float"; printf("Data type: float\n"); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 75 "yacc.y"
    { (yyval.stringValue) = "char"; printf("Data type: char\n"); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 76 "yacc.y"
    { (yyval.stringValue) = "string"; printf("Data type: string\n"); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 77 "yacc.y"
    { (yyval.stringValue) = "bool"; printf("Data type: bool\n"); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 79 "yacc.y"
    { (yyval.stringValue) = (yyvsp[(1) - (1)].idValue); printf("Identifier: %s\n", (yyvsp[(1) - (1)].idValue)); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 83 "yacc.y"
    { printf("Evaluated logical expression.\n"); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 84 "yacc.y"
    {;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 93 "yacc.y"
    { printf("Evaluated OR expression.\n"); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 94 "yacc.y"
    { printf("Evaluated single andLogExpression.\n"); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 97 "yacc.y"
    { printf("Evaluated AND expression.\n"); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 98 "yacc.y"
    { printf("Evaluated single notLogExpression.\n"); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 101 "yacc.y"
    { printf("Evaluated NOT expression.\n"); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 102 "yacc.y"
    { printf("Evaluated comparison expression.\n"); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 107 "yacc.y"
    { printf("Evaluated comparison expression with comparator.\n"); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 108 "yacc.y"
    { printf("Evaluated simple arithmetic expression.\n"); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 111 "yacc.y"
    { printf("Comparator: ==\n"); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 112 "yacc.y"
    { printf("Comparator: !=\n"); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 113 "yacc.y"
    { printf("Comparator: <\n"); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 114 "yacc.y"
    { printf("Comparator: >\n"); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 115 "yacc.y"
    { printf("Comparator: <=\n"); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 116 "yacc.y"
    { printf("Comparator: >=\n"); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 121 "yacc.y"
    { printf("Processed term1.\n"); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 122 "yacc.y"
    { printf("Processed addition.\n"); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 123 "yacc.y"
    { printf("Processed subtraction.\n"); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 126 "yacc.y"
    { printf("Processed term2.\n"); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 127 "yacc.y"
    { printf("Processed multiplication.\n"); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 128 "yacc.y"
    { printf("Processed division.\n"); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 132 "yacc.y"
    { printf("Processed term3.\n"); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 133 "yacc.y"
    { printf("Processed exponentiation.\n"); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 142 "yacc.y"
    { printf("Processed unary minus.\n"); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 143 "yacc.y"
    { printf("Processed factor.\n"); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 146 "yacc.y"
    { printf("Integer value: %d\n", (yyvsp[(1) - (1)].intValue)); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 147 "yacc.y"
    { printf("Float value: %f\n", (yyvsp[(1) - (1)].floatValue)); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 148 "yacc.y"
    {;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 149 "yacc.y"
    {;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 150 "yacc.y"
    { printf("Identifier value: %s\n", (yyvsp[(1) - (1)].stringValue)); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 151 "yacc.y"
    { printf("Processed parenthesis with logical expression.\n"); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 155 "yacc.y"
    {;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 156 "yacc.y"
    {;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 159 "yacc.y"
    { 
                    printf("Scope Begin\n"); 
                 
                  ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 165 "yacc.y"
    {
                   printf("Scope End\n"); 
;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 177 "yacc.y"
    {;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 178 "yacc.y"
    {;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 181 "yacc.y"
    {
  printf("IF statement ends\n");
;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 185 "yacc.y"
    {
            printf("IF statement begins\n");
;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 188 "yacc.y"
    {
   printf("ELSE statement ends\n");
;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 191 "yacc.y"
    {
        printf("ELSE statement begins\n");
;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 197 "yacc.y"
    {
printf("While loop Ends\n"); 
;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 201 "yacc.y"
    {
printf("While loop starts\n"); 
;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 207 "yacc.y"
    {
printf("Do While Scope Ends\n"); 
;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 212 "yacc.y"
    { 
                printf("Do While Scope begins\n");
              ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 220 "yacc.y"
    {printf("Function ends\n");}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 221 "yacc.y"
    {;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 223 "yacc.y"
    { printf("Starting params list\n");}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 224 "yacc.y"
    { printf("Starting params list\n");}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 225 "yacc.y"
    { printf("Starting params list\n");}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 226 "yacc.y"
    { printf("Starting params list\n");}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 227 "yacc.y"
    { printf("Starting params list\n");}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 228 "yacc.y"
    { printf("Starting params list\n");}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 234 "yacc.y"
    {;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 235 "yacc.y"
    {;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 237 "yacc.y"
    {;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 238 "yacc.y"
    {;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 242 "yacc.y"
    {printf("Calling functions %s\n",(yyvsp[(1) - (5)].stringValue));;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 243 "yacc.y"
    {printf("Calling function %s\n",(yyvsp[(1) - (3)].stringValue));;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 246 "yacc.y"
    {;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 247 "yacc.y"
    {;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 250 "yacc.y"
    {;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 252 "yacc.y"
    {;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 253 "yacc.y"
    {;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 255 "yacc.y"
    {printf("returning from function\n");;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 259 "yacc.y"
    {;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 262 "yacc.y"
    {printf("Starting for loop\n");;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 264 "yacc.y"
    {;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 265 "yacc.y"
    {;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 266 "yacc.y"
    {;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 272 "yacc.y"
    {;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 277 "yacc.y"
    {;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 278 "yacc.y"
    {;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 281 "yacc.y"
    {;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 282 "yacc.y"
    {;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 283 "yacc.y"
    {;}
    break;



/* Line 1455 of yacc.c  */
#line 2297 "yacc.tab.c"
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
#line 287 "yacc.y"


void yyerror(const char *msg){
  fprintf(yyout, "line [%d]: Error: %s\n", yylineno, msg);
}

int main(int argc, char** argv){
  if(argc != 2){
    yyerror("Please enter filename only!");
    return 1;
  }

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
    
  fclose(yyin);
  fclose(yyout);
  return 0;
}

