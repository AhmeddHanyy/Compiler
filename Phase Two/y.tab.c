
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
  extern FILE* yyin;                          
  extern FILE* yyout;  
  int yylineno = 1;
  int num_scopes = 0;
  SymbolHier symbolHier;
  Quadraples quad;


/* Line 189 of yacc.c  */
#line 89 "y.tab.c"

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
#line 17 "yacc.y"

    char* intValue;
    char* floatValue;
    char charValue;
    char* stringValue;
    char* boolValue;
    char* idValue;



/* Line 214 of yacc.c  */
#line 218 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 230 "y.tab.c"

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
#define YYLAST   224

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNRULES -- Number of states.  */
#define YYNSTATES  206

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
     160,   162,   164,   167,   169,   172,   174,   176,   182,   185,
     191,   193,   196,   198,   204,   206,   213,   215,   219,   225,
     233,   236,   239,   242,   247,   249,   256,   258,   264,   268,
     272,   274,   275,   279,   282,   284,   296,   298,   303,   307,
     309,   317,   320,   322,   327,   332
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      50,     0,    -1,    51,    52,    -1,    -1,    53,    54,    -1,
      52,    53,    54,    -1,    -1,    55,    56,    42,    -1,    55,
      56,    15,    57,    42,    -1,     8,    55,    56,    15,    57,
      42,    -1,    56,    15,    57,    42,    -1,    68,    -1,    71,
      -1,    79,    -1,    81,    -1,    83,    -1,    88,    -1,    91,
      -1,    93,    -1,    31,    42,    -1,    32,    42,    -1,    96,
      -1,     3,    -1,     4,    -1,     5,    -1,     6,    -1,     7,
      -1,    41,    -1,    58,    -1,    88,    -1,    58,    17,    59,
      -1,    59,    -1,    59,    16,    60,    -1,    60,    -1,    18,
      60,    -1,    61,    -1,    61,    62,    63,    -1,    63,    -1,
      19,    -1,    20,    -1,    21,    -1,    22,    -1,    23,    -1,
      24,    -1,    64,    -1,    63,    10,    64,    -1,    63,    11,
      64,    -1,    65,    -1,    64,    12,    65,    -1,    64,    13,
      65,    -1,    66,    -1,    66,    14,    65,    -1,    11,    66,
      -1,    67,    -1,    36,    -1,    37,    -1,    56,    -1,    43,
      58,    44,    -1,    69,    52,    70,    -1,    69,    70,    -1,
      45,    -1,    46,    -1,    75,    72,    -1,    75,    -1,    73,
      72,    -1,    73,    -1,    74,    -1,    77,    43,    57,    44,
      68,    -1,    78,    68,    -1,    76,    43,    57,    44,    68,
      -1,    25,    -1,    26,    25,    -1,    26,    -1,    80,    43,
      57,    44,    68,    -1,    27,    -1,    82,    68,    27,    43,
      57,    44,    -1,    28,    -1,    85,    84,    68,    -1,    43,
      55,    56,    86,    44,    -1,    43,    55,    56,    15,    57,
      87,    44,    -1,    43,    44,    -1,    55,    56,    -1,     9,
      56,    -1,    47,    55,    56,    86,    -1,    87,    -1,    47,
      55,    56,    15,    57,    87,    -1,    90,    -1,    56,    43,
      57,    89,    44,    -1,    56,    43,    44,    -1,    47,    57,
      89,    -1,    90,    -1,    -1,    92,    57,    42,    -1,    92,
      42,    -1,    29,    -1,    94,    43,    95,    42,    57,    42,
      56,    15,    57,    44,    68,    -1,    30,    -1,    55,    56,
      15,    57,    -1,    56,    15,    57,    -1,    90,    -1,    33,
      43,    56,    44,    45,    97,    46,    -1,    97,    98,    -1,
      98,    -1,    34,    36,    48,    52,    -1,    34,    39,    48,
      52,    -1,    35,    48,    52,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    51,    51,    54,    61,    65,    70,    73,    82,   112,
     138,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   185,   186,   187,   188,   189,   191,   198,   199,
     208,   209,   212,   213,   216,   217,   222,   223,   226,   227,
     228,   229,   230,   231,   236,   237,   238,   241,   242,   243,
     247,   248,   257,   267,   270,   271,   272,   289,   293,   294,
     297,   309,   321,   322,   325,   326,   327,   330,   340,   345,
     356,   361,   366,   373,   377,   383,   388,   396,   403,   411,
     421,   426,   435,   445,   454,   456,   468,   472,   486,   489,
     492,   495,   497,   498,   500,   511,   516,   526,   527,   528,
     534,   539,   540,   543,   544,   545
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
  "elseIfStatements", "elseIfStatement", "elseScope", "ifScope", "IF_mark",
  "ELSE_IF_mark", "ELSE_mark", "whileLoop", "WHILE_mark", "doWhile",
  "DO_mark", "function", "functionSig", "functionSigStart",
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
      69,    70,    71,    71,    72,    72,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    84,
      84,    85,    85,    86,    86,    87,    87,    88,    88,    89,
      89,    90,    91,    91,    92,    93,    94,    95,    95,    95,
      96,    97,    97,    98,    98,    98
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
       1,     1,     2,     1,     2,     1,     1,     5,     2,     5,
       1,     2,     1,     5,     1,     6,     1,     3,     5,     7,
       2,     2,     2,     4,     1,     6,     1,     5,     3,     3,
       1,     0,     3,     2,     1,    11,     1,     4,     3,     1,
       7,     2,     1,     4,     4,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     6,     1,     6,     0,     0,    22,    23,    24,
      25,    26,     0,     0,    70,    74,    76,    94,    96,     0,
       0,     0,    27,    60,     4,     0,     0,    11,     6,    12,
      63,     0,    13,     0,    14,     0,    15,     0,    16,    17,
       0,    18,     0,    21,     5,     0,    82,    19,    20,     0,
      81,     0,     0,    61,     6,    59,    72,    62,    65,    66,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    54,
      55,    93,     0,    56,     0,    28,    31,    33,    35,    37,
      44,    47,    50,    53,    29,    91,     0,     0,     0,     7,
       0,    88,    91,    58,    71,    64,     0,    68,     0,     0,
       0,    80,     0,    77,    56,    52,    34,     0,    92,     0,
       0,    38,    39,    40,    41,    42,    43,     0,     0,     0,
       0,     0,     0,     0,     0,    99,     0,     0,     0,     0,
      10,     0,     0,    90,     0,     0,     0,     0,    91,    57,
      30,    32,    36,    45,    46,    48,    49,    51,     0,     0,
       0,     0,     0,     8,    91,    87,     0,    69,    73,     0,
       0,     0,     0,    84,    86,     0,    98,     0,     9,     0,
       0,     0,   102,    89,    67,    75,    91,     0,    78,    97,
       0,     0,     0,     6,   100,   101,     0,     0,    91,     0,
       6,     6,     6,     0,    79,     0,    83,     0,     6,     6,
       0,    91,     0,    85,     0,    95
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,     5,    24,    25,    73,    74,    75,
      76,    77,    78,   117,    79,    80,    81,    82,    83,    27,
      28,    55,    29,    57,    58,    59,    30,    31,    60,    61,
      32,    33,    34,    35,    36,    66,    37,   162,   163,    84,
     132,   164,    39,    40,    41,    42,   126,    43,   171,   172
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -144
static const yytype_int16 yypact[] =
{
    -144,    11,  -144,  -144,    21,   175,   175,  -144,  -144,  -144,
    -144,  -144,   138,    -9,  -144,  -144,  -144,  -144,  -144,     2,
      18,     8,  -144,  -144,  -144,    -9,    16,  -144,     7,  -144,
      46,    36,  -144,    43,  -144,    58,  -144,    48,  -144,  -144,
      25,  -144,    90,  -144,  -144,    -9,  -144,  -144,  -144,    -9,
       5,    91,    34,  -144,     7,  -144,   121,  -144,    46,  -144,
     106,    58,    91,    91,   126,    12,    58,    44,    91,  -144,
    -144,  -144,    91,   111,   113,   140,   143,  -144,   116,    28,
      81,  -144,   147,  -144,  -144,    22,   148,   118,    91,  -144,
     122,  -144,   119,  -144,  -144,  -144,    91,  -144,   125,   127,
     129,  -144,    -9,  -144,  -144,  -144,  -144,    56,  -144,    91,
      91,  -144,  -144,  -144,  -144,  -144,  -144,    44,    44,    44,
      44,    44,    44,    -9,   150,  -144,   128,    91,   131,   144,
    -144,    91,   141,  -144,   145,    58,    58,    91,    -7,  -144,
     143,  -144,    28,    81,    81,  -144,  -144,  -144,   172,    91,
      91,   149,    88,  -144,   119,  -144,    58,  -144,  -144,   152,
      91,   138,   153,  -144,  -144,    91,  -144,   151,  -144,    -2,
     161,    49,  -144,  -144,  -144,  -144,   154,    -9,  -144,  -144,
      -9,   162,   163,  -144,  -144,  -144,   138,   155,    -6,   177,
    -144,  -144,    55,    -9,  -144,    91,  -144,    91,    62,    78,
     183,   154,   168,  -144,    58,  -144
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -144,  -144,  -144,   -23,    -4,   207,   -11,    -3,   -39,   142,
     108,   -62,  -144,  -144,    98,    29,     9,   156,  -144,   -31,
    -144,   164,  -144,   166,  -144,  -144,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,    31,  -143,   146,
      67,   -78,  -144,  -144,  -144,  -144,  -144,  -144,  -144,    51
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -106
static const yytype_int16 yytable[] =
{
       6,    45,    26,    26,    64,    54,   106,   125,   160,   195,
      46,     3,    90,    92,   133,     7,     8,     9,    10,    11,
      88,    -2,    50,    98,    99,     7,     8,     9,    10,    11,
      97,    51,    22,   187,   181,   103,    67,   182,   118,   119,
     161,   161,    86,    68,    47,    67,    87,    89,   141,   129,
       6,    49,    68,    53,   102,    67,   101,   134,   203,    52,
      48,    69,    70,    22,   104,   104,    22,    71,    72,   104,
      69,    70,    56,   109,   123,    22,   133,    72,    91,    62,
      69,    70,   124,   169,   170,    22,    63,    72,   151,  -105,
    -105,    65,   154,   120,   121,   184,  -103,  -103,   159,   138,
     139,  -105,    67,    23,   157,   158,   104,   104,  -103,    68,
     166,   167,  -104,  -104,   104,   104,   104,   104,   104,   104,
     148,   176,   169,   170,  -104,   174,   179,    69,    70,   145,
     146,   147,    22,    85,    72,   111,   112,   113,   114,   115,
     116,     7,     8,     9,    10,    11,    94,   143,   144,    96,
     177,    38,    38,   100,    52,   108,   201,   109,   202,   110,
     192,   122,   128,   127,   130,   149,   131,   198,   199,   135,
     150,   136,   137,   205,   188,   193,   152,   189,     7,     8,
       9,    10,    11,    12,    13,   155,   153,   165,     6,   156,
     200,   168,   197,   180,     6,     6,   175,   178,   195,   194,
      14,   186,    15,    16,    17,    18,    19,    20,    21,   183,
     190,   191,   204,    44,   107,   142,    22,   140,    93,   196,
      23,   173,   185,   105,    95
};

static const yytype_uint8 yycheck[] =
{
       4,    12,     5,     6,    35,    28,    68,    85,    15,    15,
      13,     0,    51,    52,    92,     3,     4,     5,     6,     7,
      15,     0,    25,    62,    63,     3,     4,     5,     6,     7,
      61,    15,    41,   176,    36,    66,    11,    39,    10,    11,
      47,    47,    45,    18,    42,    11,    49,    42,   110,    88,
      54,    43,    18,    46,    65,    11,    44,    96,   201,    43,
      42,    36,    37,    41,    67,    68,    41,    42,    43,    72,
      36,    37,    26,    17,    85,    41,   154,    43,    44,    43,
      36,    37,    85,    34,    35,    41,    43,    43,   127,    34,
      35,    43,   131,    12,    13,    46,    34,    35,   137,   102,
      44,    46,    11,    45,   135,   136,   109,   110,    46,    18,
     149,   150,    34,    35,   117,   118,   119,   120,   121,   122,
     123,   160,    34,    35,    46,   156,   165,    36,    37,   120,
     121,   122,    41,    43,    43,    19,    20,    21,    22,    23,
      24,     3,     4,     5,     6,     7,    25,   118,   119,    43,
     161,     5,     6,    27,    43,    42,   195,    17,   197,    16,
     183,    14,    44,    15,    42,    15,    47,   190,   191,    44,
      42,    44,    43,   204,   177,   186,    45,   180,     3,     4,
       5,     6,     7,     8,     9,    44,    42,    15,   192,    44,
     193,    42,    15,    42,   198,   199,    44,    44,    15,    44,
      25,    47,    27,    28,    29,    30,    31,    32,    33,    48,
      48,    48,    44,     6,    72,   117,    41,   109,    54,   188,
      45,   154,   171,    67,    58
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    50,    51,     0,    52,    53,    53,     3,     4,     5,
       6,     7,     8,     9,    25,    27,    28,    29,    30,    31,
      32,    33,    41,    45,    54,    55,    56,    68,    69,    71,
      75,    76,    79,    80,    81,    82,    83,    85,    88,    91,
      92,    93,    94,    96,    54,    55,    56,    42,    42,    43,
      56,    15,    43,    46,    52,    70,    26,    72,    73,    74,
      77,    78,    43,    43,    68,    43,    84,    11,    18,    36,
      37,    42,    43,    56,    57,    58,    59,    60,    61,    63,
      64,    65,    66,    67,    88,    43,    56,    56,    15,    42,
      57,    44,    57,    70,    25,    72,    43,    68,    57,    57,
      27,    44,    55,    68,    56,    66,    60,    58,    42,    17,
      16,    19,    20,    21,    22,    23,    24,    62,    10,    11,
      12,    13,    14,    55,    56,    90,    95,    15,    44,    57,
      42,    47,    89,    90,    57,    44,    44,    43,    56,    44,
      59,    60,    63,    64,    64,    65,    65,    65,    56,    15,
      42,    57,    45,    42,    57,    44,    44,    68,    68,    57,
      15,    47,    86,    87,    90,    15,    57,    57,    42,    34,
      35,    97,    98,    89,    68,    44,    57,    55,    44,    57,
      42,    36,    39,    48,    46,    98,    47,    87,    56,    56,
      48,    48,    52,    55,    44,    15,    86,    15,    52,    52,
      56,    57,    57,    87,    44,    68
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
#line 51 "yacc.y"
    {}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 54 "yacc.y"
    {
  SymbolTable* globalTable = new SymbolTable("Global", nullptr);
  symbolHier.addSymbolTable(globalTable);
  symbolHier.updateCurrentScope(globalTable);
}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 61 "yacc.y"
    {
          quad.printQuadraples();
          quad.printQuadraplesToFile("output.txt");
        }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 65 "yacc.y"
    {
          quad.printQuadraples();
          quad.printQuadraplesToFile("output.txt");
      }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 70 "yacc.y"
    {printf("Processing line %d in the script.\n",yylineno);}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 73 "yacc.y"
    {
                SymbolTable* entryScope = symbolHier.getEntryScope((yyvsp[(2) - (3)].stringValue), (yyvsp[(1) - (3)].stringValue));
                if (entryScope) {
                  yyerror("Variable is already declared\n");
                } else {
                  printf("Variable %s declared\n", (yyvsp[(2) - (3)].stringValue));
                  symbolHier.addEntryToCurrentScope((yyvsp[(2) - (3)].stringValue),(yyvsp[(1) - (3)].stringValue),"-0",false,false);
                }
              }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 82 "yacc.y"
    {
                SymbolTable* entryScope = symbolHier.getEntryScope((yyvsp[(2) - (5)].stringValue), (yyvsp[(1) - (5)].stringValue));
                if (entryScope) {
                    yyerror("Variable is already declared\n");
                } else {
                  // Create an instance of SemanticChecker
                  SemanticChecker semanticChecker;

                  // Determine the types of the dataType and expression
                  char* dataType = (yyvsp[(1) - (5)].stringValue);
                  char* exprType = semanticChecker.determineType((yyvsp[(4) - (5)].stringValue));

                  // Check if the types are compatible
                  if (!semanticChecker.matchTypes(dataType, exprType))
                  {
                    yyerror("Type mismatch between data type and expression\n");
                  }
                  else
                  {
                    printf("Assigned value to %s\n", (yyvsp[(2) - (5)].stringValue));
                    // Add the entry to the current scope
                    symbolHier.addEntryToCurrentScope((yyvsp[(2) - (5)].stringValue), (yyvsp[(1) - (5)].stringValue), (yyvsp[(4) - (5)].stringValue), true, false);
                    printf("Added entry to current scope\n");
                    // Use quads to assign the value to the variable
                    quad.addUnary("MOV", (yyvsp[(4) - (5)].stringValue));
                    quad.popLabel();
                    quad.resetEntryCount();
                  }
                }
              }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 112 "yacc.y"
    {
                SymbolTable* entryScope = symbolHier.getEntryScope((yyvsp[(3) - (6)].stringValue));
                if (entryScope) {
                    yyerror("Variable is already declared\n");
                } else {
                    // Create an instance of SemanticChecker
                    SemanticChecker semanticChecker;

                    // Determine the types of the dataType and expression
                    char* dataType = (yyvsp[(2) - (6)].stringValue);
                    char* exprType = semanticChecker.determineType((yyvsp[(5) - (6)].stringValue));

                    // Check if the types are compatible
                    if (!semanticChecker.matchTypes(dataType, exprType)) {
                        yyerror("Type mismatch between data type and expression\n");
                    } else {
                        // Assuming compatible, add the entry to the current scope as a constant
                        symbolHier.addEntryToCurrentScope((yyvsp[(3) - (6)].stringValue), (yyvsp[(2) - (6)].stringValue), (yyvsp[(5) - (6)].stringValue), true, true);
                        printf("Assigned constant value to %s\n", (yyvsp[(3) - (6)].stringValue));
                        // Use quads to assign the value to the variable
                        quad.addUnary("MOV", (yyvsp[(5) - (6)].stringValue));
                        quad.popLabel();
                        quad.resetEntryCount();
                    }
                }
       }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 138 "yacc.y"
    {
              SymbolTable* entryScope = symbolHier.getEntryScope((yyvsp[(1) - (4)].stringValue));
              if (!entryScope) {
                  yyerror("Variable is not declared\n");
              } 
              else {
                  // Create an instance of SemanticChecker
                  SymbolTableEntry* entry = entryScope->getEntry((yyvsp[(1) - (4)].stringValue));
                  SemanticChecker semanticChecker;

                  // Determine the type of the expression
                  char* exprType = semanticChecker.determineType((yyvsp[(3) - (4)].stringValue));

                  // Check if the variable is a constant
                  if (entry->getIsConstant()) {
                      yyerror("Cannot assign to a constant variable\n");
                  } else {
                      // Check if the types are compatible
                      if (!semanticChecker.matchTypes(entry->getVariableType(), exprType)) {
                          yyerror("Type mismatch between variable and expression\n");
                      } else {
                          // Assuming compatible, update the value of the variable
                          entry->setValue((yyvsp[(3) - (4)].stringValue));
                          entry->setIsInitialized(true);
                          printf("Assigned value to %s\n", (yyvsp[(1) - (4)].stringValue));
                          // Use quads to assign the value to the variable
                          quad.addUnary("MOV", (yyvsp[(3) - (4)].stringValue));
                          quad.popLabel();
                          quad.resetEntryCount();
                      }
                  }
              }
            }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 171 "yacc.y"
    {}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 172 "yacc.y"
    {}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 173 "yacc.y"
    {}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 174 "yacc.y"
    {}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 175 "yacc.y"
    {}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 176 "yacc.y"
    {}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 177 "yacc.y"
    {}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 178 "yacc.y"
    {}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 179 "yacc.y"
    {}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 180 "yacc.y"
    {}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 185 "yacc.y"
    { (yyval.stringValue) = "int";  }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 186 "yacc.y"
    { (yyval.stringValue) = "float";  }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 187 "yacc.y"
    { (yyval.stringValue) = "char"; }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 188 "yacc.y"
    { (yyval.stringValue) = "string"; }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 189 "yacc.y"
    { (yyval.stringValue) = "bool";}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 191 "yacc.y"
    { 
                  (yyval.stringValue) = (yyvsp[(1) - (1)].idValue);
                  quad.pushLabel((yyvsp[(1) - (1)].idValue));  
                }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 198 "yacc.y"
    {(yyval.stringValue) = (yyvsp[(1) - (1)].stringValue);}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 199 "yacc.y"
    {(yyval.stringValue) = (yyvsp[(1) - (1)].stringValue);}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 208 "yacc.y"
    {}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 209 "yacc.y"
    {}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 212 "yacc.y"
    {}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 213 "yacc.y"
    {}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 216 "yacc.y"
    {}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 217 "yacc.y"
    {}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 222 "yacc.y"
    {}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 223 "yacc.y"
    {}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 226 "yacc.y"
    {}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 227 "yacc.y"
    {}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 228 "yacc.y"
    {}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 229 "yacc.y"
    {}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 230 "yacc.y"
    {}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 231 "yacc.y"
    {}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 236 "yacc.y"
    {}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 237 "yacc.y"
    {}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 238 "yacc.y"
    {}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 241 "yacc.y"
    {}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 242 "yacc.y"
    {}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 243 "yacc.y"
    {}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 247 "yacc.y"
    {}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 248 "yacc.y"
    {}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 257 "yacc.y"
    { 
//need to check if term3 returned is a number or not(we can make a funct for it)
//if yes:
// cast string to a number and multipy by -1 = val
//then:
// $$ = val;



 }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 267 "yacc.y"
    { (yyval.stringValue) = (yyvsp[(1) - (1)].stringValue); }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 270 "yacc.y"
    { (yyval.stringValue) = (yyvsp[(1) - (1)].intValue); }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 271 "yacc.y"
    { (yyval.stringValue) = (yyvsp[(1) - (1)].floatValue);}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 272 "yacc.y"
    {
              SymbolTable* entryScope =  symbolHier.getEntryScope((yyvsp[(1) - (1)].stringValue));

              if(!entryScope)
              {
                yyerror("Variable is not declared\n");
              }else{
                //variable is declared and we have its scope table now lets get the entry from the table
                SymbolTableEntry* entry = entryScope->getEntry((yyvsp[(1) - (1)].stringValue));
                if(!entry->getIsInitialized())
                {
                  yyerror("Variable is not initiliazed\n");
                }
                entry->setIsAccessed(true);
                (yyval.stringValue) = entry->getValue();
              }
            }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 289 "yacc.y"
    { printf("Processed parenthesis with logical expression.\n"); }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 293 "yacc.y"
    {}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 294 "yacc.y"
    {}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 297 "yacc.y"
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

  case 61:

/* Line 1455 of yacc.c  */
#line 309 "yacc.y"
    {
  symbolHier.updateCurrentScope(symbolHier.currentScopeTable->parent);                   
}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 321 "yacc.y"
    {}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 322 "yacc.y"
    {}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 325 "yacc.y"
    {}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 326 "yacc.y"
    {}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 327 "yacc.y"
    {}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 330 "yacc.y"
    {
    SemanticChecker semanticChecker;
    if (!semanticChecker.isBool((yyvsp[(3) - (5)].stringValue))) {
      yyerror("Condition expression must be of boolean type\n");
    } else {
      printf("ELSE IF statement ends\n");
    }
}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 340 "yacc.y"
    {
    printf("ELSE statement ends\n");
}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 345 "yacc.y"
    {
    SemanticChecker semanticChecker;
    if (!semanticChecker.isBool((yyvsp[(3) - (5)].stringValue))) {
        printf("Condition expression: %s\n", (yyvsp[(3) - (5)].stringValue));
        yyerror("Condition expression must be of boolean type\n");
    } else {
        printf("IF statement ends\n");
    }
}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 356 "yacc.y"
    {
    printf("IF statement begins\n");
}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 361 "yacc.y"
    {
    printf("ELSE IF statement begins\n");
}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 366 "yacc.y"
    {
    printf("ELSE statement begins\n");
}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 373 "yacc.y"
    {
printf("While loop Ends\n"); 
}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 377 "yacc.y"
    {
printf("While loop starts\n"); 
}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 383 "yacc.y"
    {
printf("Do While Scope Ends\n"); 
}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 388 "yacc.y"
    { 
                printf("Do While Scope begins\n");
              }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 396 "yacc.y"
    {
  printf("Function ends\n");
  symbolHier.updateCurrentScope(symbolHier.currentScopeTable->parent);
}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 403 "yacc.y"
    {
if(symbolHier.currentScopeTable->lookUp((yyvsp[(3) - (5)].stringValue),(yyvsp[(2) - (5)].stringValue)))
{
  yyerror("Variable is already in param list\n");
}else{
  symbolHier.addEntryToCurrentScope((yyvsp[(3) - (5)].stringValue),(yyvsp[(2) - (5)].stringValue),"-0",false,false);
}
}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 411 "yacc.y"
    {
if(symbolHier.currentScopeTable->lookUp((yyvsp[(3) - (7)].stringValue),(yyvsp[(2) - (7)].stringValue)))
{
  yyerror("Variable is already in param list\n");
}
//check dataType and expression type compatible or not

//Assuming compatible then:
// symbolHier.addEntryToCurrentScope($2,$1,expression,true,false);
            }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 421 "yacc.y"
    { printf("Starting params list\n");}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 426 "yacc.y"
    {
SymbolTable* functionTable = new SymbolTable((yyvsp[(2) - (2)].stringValue), symbolHier.currentScopeTable,(yyvsp[(1) - (2)].stringValue));
//add table as a child to current
symbolHier.currentScopeTable->addChild(functionTable);
symbolHier.addFunctionTable(functionTable);
//update current scope
symbolHier.updateCurrentScope(functionTable);

}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 435 "yacc.y"
    {
SymbolTable* functionTable = new SymbolTable((yyvsp[(2) - (2)].stringValue), symbolHier.currentScopeTable,(char*)"void");
//add table as a child to current
symbolHier.currentScopeTable->addChild(functionTable);
symbolHier.addSymbolTable(functionTable);
//update current scope
symbolHier.updateCurrentScope(functionTable);
}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 445 "yacc.y"
    {
if(symbolHier.currentScopeTable->lookUp((yyvsp[(3) - (4)].stringValue),(yyvsp[(2) - (4)].stringValue)))
{
  yyerror("Variable is already in param list\n");
}else{
  symbolHier.addEntryToCurrentScope((yyvsp[(3) - (4)].stringValue),(yyvsp[(2) - (4)].stringValue),"-0",false,false);
}

}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 454 "yacc.y"
    {}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 456 "yacc.y"
    {
if(symbolHier.currentScopeTable->lookUp((yyvsp[(3) - (6)].stringValue),(yyvsp[(2) - (6)].stringValue)))
{
  yyerror("Variable is already in param list\n");
}
//check dataType and expression type compatible or not

//Assuming compatible then:
// symbolHier.addEntryToCurrentScope($2,$1,expression,true,false);


}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 468 "yacc.y"
    {}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 472 "yacc.y"
    {

char* params = concatenateTwoStrings((yyvsp[(4) - (5)].stringValue),(yyvsp[(3) - (5)].stringValue),',');
char* reason = nullptr;
SymbolTable* foundTable = symbolHier.checkFunctionExists((yyvsp[(1) - (5)].stringValue), params,reason);
if(!foundTable){
yyerror(reason);
}else{
  //found
  (yyval.stringValue) = foundTable->returnType;
}


}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 486 "yacc.y"
    {printf("Calling function %s\n",(yyvsp[(1) - (3)].stringValue));}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 489 "yacc.y"
    {
(yyval.stringValue) = concatenateTwoStrings((yyvsp[(3) - (3)].stringValue), (yyvsp[(2) - (3)].stringValue), ',');
}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 492 "yacc.y"
    {}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 495 "yacc.y"
    {}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 497 "yacc.y"
    {}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 498 "yacc.y"
    {}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 500 "yacc.y"
    {printf("returning from function\n");}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 511 "yacc.y"
    {
  symbolHier.updateCurrentScope(symbolHier.currentScopeTable->parent); 
}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 516 "yacc.y"
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

  case 97:

/* Line 1455 of yacc.c  */
#line 526 "yacc.y"
    {}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 527 "yacc.y"
    {}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 528 "yacc.y"
    {}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 534 "yacc.y"
    {}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 539 "yacc.y"
    {}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 540 "yacc.y"
    {}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 543 "yacc.y"
    {}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 544 "yacc.y"
    {}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 545 "yacc.y"
    {}
    break;



/* Line 1455 of yacc.c  */
#line 2588 "y.tab.c"
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
#line 549 "yacc.y"


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

