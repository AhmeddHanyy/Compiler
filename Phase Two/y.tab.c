
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
  char* caseIdentifier;
  char* switchIdentifier;


/* Line 189 of yacc.c  */
#line 94 "y.tab.c"

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
#line 22 "yacc.y"

    char* intValue;
    char* floatValue;
    char charValue;
    char* stringValue;
    char* boolValue;
    char* idValue;



/* Line 214 of yacc.c  */
#line 223 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 235 "y.tab.c"

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
#define YYLAST   293

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  118
/* YYNRULES -- Number of states.  */
#define YYNSTATES  224

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
     297,   300,   302,   315,   317,   322,   326,   328,   336,   338,
     340,   343,   345,   350,   355,   359,   361,   363,   365
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
      29,    -1,    96,    43,    97,    42,    58,    81,    42,    57,
      15,    58,    44,    69,    -1,    30,    -1,    56,    57,    15,
      58,    -1,    57,    15,    58,    -1,    92,    -1,    33,    43,
     100,    44,    99,   101,    71,    -1,    70,    -1,    41,    -1,
     101,   102,    -1,   102,    -1,    34,   105,   104,    52,    -1,
      34,   106,   104,    52,    -1,   103,   104,    52,    -1,    35,
      -1,    48,    -1,    36,    -1,    39,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    58,    58,    61,    68,    72,    77,    80,    90,   128,
     163,   203,   204,   205,   206,   207,   208,   213,   214,   215,
     218,   222,   225,   226,   232,   233,   234,   235,   236,   238,
     245,   249,   263,   285,   289,   311,   315,   334,   340,   366,
     370,   371,   372,   373,   374,   375,   379,   382,   404,   427,
     430,   452,   475,   478,   500,   520,   525,   531,   536,   541,
     546,   551,   571,   575,   576,   579,   591,   593,   605,   606,
     609,   610,   611,   614,   625,   631,   642,   646,   650,   656,
     660,   665,   671,   675,   682,   689,   698,   708,   713,   725,
     738,   748,   750,   760,   764,   787,   801,   809,   812,   814,
     836,   847,   858,   901,   913,   950,   989,   995,  1001,  1006,
    1011,  1012,  1015,  1018,  1021,  1026,  1029,  1034,  1041
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
  "forLoop", "FOR_mark", "forLoop1", "switchCase", "beginScopeCase",
  "IDCase", "caseStatements", "caseStatement", "DefaultIdentifier",
  "beginCase", "caseIdentifierInt", "caseIdentifierChar", 0
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
      93,    94,    95,    96,    97,    97,    97,    98,    99,   100,
     101,   101,   102,   102,   102,   103,   104,   105,   106
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
       2,     1,    12,     1,     4,     3,     1,     7,     1,     1,
       2,     1,     4,     4,     3,     1,     1,     1,     1
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
      31,    98,     0,   109,     0,     0,     7,    98,    95,    98,
      63,    77,    70,     0,    74,    80,    80,     0,    87,     0,
      84,    61,    54,    36,     0,    99,     0,     0,    40,    41,
      42,    43,    44,    45,     0,     0,     0,     0,     0,     0,
       0,     0,   106,     0,     0,     0,    98,    10,     0,     0,
      97,    80,     0,     0,     0,    98,    62,    32,    34,    38,
      47,    48,    50,    51,    53,     0,     0,     0,    98,   108,
       0,     8,    98,    94,     0,     0,     0,    80,     0,     0,
       0,    91,    93,     0,   105,    80,     9,     0,   115,     0,
     111,     0,    96,     0,    75,    79,     0,    98,     0,    85,
     104,     0,   117,   118,     0,     0,   107,   110,   116,     6,
      73,    98,     0,     0,    98,     0,     6,     6,     6,    82,
       0,    86,     0,    90,     0,     6,     6,     0,    98,     0,
      92,     0,     0,   102
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,     5,    24,    48,    25,    79,    80,
      81,    82,    83,    84,   124,    85,    86,    87,    88,    89,
      27,    28,    58,    29,    60,    61,    62,    30,    31,    63,
      64,    32,   142,    33,    34,    35,    36,    69,    37,   170,
     171,    90,   139,    49,    39,    40,    41,    42,   133,    43,
     160,    94,   179,   180,   181,   199,   194,   195
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -169
static const yytype_int16 yypact[] =
{
    -169,     7,  -169,  -169,    11,   136,   136,  -169,  -169,  -169,
    -169,  -169,    26,   -23,  -169,  -169,  -169,  -169,  -169,    -7,
      -7,     0,  -169,  -169,  -169,   -23,    30,  -169,   212,  -169,
      22,    39,  -169,    41,  -169,    45,  -169,    51,  -169,  -169,
     236,  -169,    55,  -169,  -169,   -23,  -169,  -169,  -169,  -169,
    -169,    63,    50,   244,   187,  -169,  -169,   212,  -169,    82,
    -169,    22,  -169,    72,    45,   244,   244,   110,    56,    45,
     227,   244,  -169,  -169,  -169,  -169,  -169,  -169,   244,    95,
     106,   132,   135,  -169,   269,    68,    74,  -169,   138,  -169,
    -169,   105,   139,  -169,   111,   244,  -169,    -7,  -169,   109,
    -169,  -169,  -169,   244,  -169,  -169,  -169,   114,  -169,   -23,
    -169,  -169,  -169,  -169,    59,  -169,   244,   244,  -169,  -169,
    -169,  -169,  -169,  -169,   227,   227,   227,   227,   227,   227,
     -23,   144,  -169,   118,   244,    45,    -7,  -169,   244,   126,
    -169,  -169,   127,   128,   244,    -6,  -169,   135,  -169,    68,
      74,    74,  -169,  -169,  -169,   147,   244,   244,    -7,  -169,
      62,  -169,   109,  -169,   130,    45,    45,  -169,   244,    26,
     134,  -169,  -169,   244,  -169,  -169,  -169,     1,  -169,    12,
    -169,   131,  -169,    45,  -169,  -169,   140,   129,   -23,  -169,
    -169,   145,  -169,  -169,   131,   131,  -169,  -169,  -169,  -169,
    -169,    -7,    26,   142,     2,   -23,  -169,  -169,    20,  -169,
     -23,  -169,   244,  -169,   173,    35,    37,   174,   129,   244,
    -169,   146,    45,  -169
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -169,  -169,  -169,   -24,    -4,   188,    -8,   -11,    -3,   -39,
     117,    80,   -65,  -169,  -169,    73,     6,  -104,   133,  -169,
     -30,    64,   -49,  -169,   148,  -169,  -169,  -169,  -169,  -169,
    -169,  -169,   -90,  -169,  -169,  -169,  -169,  -169,  -169,     4,
    -168,    96,    38,   -71,  -169,  -169,  -169,  -169,  -169,  -169,
    -169,  -169,  -169,    27,  -169,   -75,  -169,  -169
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -115
static const yytype_int16 yytable[] =
{
       6,    45,    26,    26,    57,    67,   113,     3,   100,   168,
      46,    -2,    50,    55,    97,    99,   143,   212,    22,   203,
     132,  -114,    52,   152,   153,   154,   105,   106,   140,     7,
       8,     9,    10,    11,   104,    47,  -112,   192,  -113,   110,
     193,   169,    92,    51,    96,    53,   177,   178,    59,   169,
     220,   164,   148,     6,  -114,  -114,   136,   109,    56,     7,
       8,     9,    10,    11,   141,    95,  -114,   111,   111,  -112,
    -112,  -113,  -113,    54,   172,   111,   116,   186,   125,   126,
     130,  -112,    65,  -113,    66,   191,   127,   128,   131,   137,
      23,   140,    47,   -88,    68,   158,   177,   178,    91,   162,
     108,    38,    38,   146,    93,   167,   145,   101,     7,     8,
       9,    10,    11,   111,   111,   103,   172,   174,   175,   206,
     207,   111,   111,   111,   111,   111,   111,   155,   161,   187,
     196,   150,   151,   172,   190,   184,   185,   107,    54,     7,
       8,     9,    10,    11,    12,    13,    22,   172,   115,   116,
     176,   117,   129,   200,   134,   135,   138,   144,   188,   156,
     157,    14,   173,    15,    16,    17,    18,    19,    20,    21,
     163,   165,   166,   218,   183,   208,   202,    22,   189,   198,
     221,    23,   215,   216,   201,   204,   211,   205,   219,   212,
     222,   210,   223,   209,    44,   114,   147,   149,    70,   159,
     182,     0,   214,   112,     6,    71,   197,   217,   213,   102,
       0,     6,     6,    55,     0,    -6,    -6,    -6,    -6,    -6,
      -6,    -6,     0,    72,    73,    74,    75,    76,    22,     0,
      78,    98,     0,     0,     0,     0,     0,    -6,    70,    -6,
      -6,    -6,    -6,    -6,    -6,    -6,     0,    70,     0,     0,
       0,     0,     0,    -6,    71,    70,     0,    -6,    56,     0,
       0,     0,    71,    72,    73,    74,    75,    76,    22,     0,
      78,     0,    72,    73,    74,    75,    76,    22,    77,    78,
      72,    73,    74,    75,    76,    22,     0,    78,   118,   119,
     120,   121,   122,   123
};

static const yytype_int16 yycheck[] =
{
       4,    12,     5,     6,    28,    35,    71,     0,    57,    15,
      13,     0,    20,     1,    53,    54,   106,    15,    41,   187,
      91,     1,    25,   127,   128,   129,    65,    66,    99,     3,
       4,     5,     6,     7,    64,    42,     1,    36,     1,    69,
      39,    47,    45,    43,    52,    15,    34,    35,    26,    47,
     218,   141,   117,    57,    34,    35,    95,    68,    46,     3,
       4,     5,     6,     7,   103,    15,    46,    70,    71,    34,
      35,    34,    35,    43,   145,    78,    17,   167,    10,    11,
      91,    46,    43,    46,    43,   175,    12,    13,    91,    97,
      45,   162,    42,    43,    43,   134,    34,    35,    43,   138,
      44,     5,     6,    44,    41,   144,   109,    25,     3,     4,
       5,     6,     7,   116,   117,    43,   187,   156,   157,   194,
     195,   124,   125,   126,   127,   128,   129,   130,   136,   168,
     179,   125,   126,   204,   173,   165,   166,    27,    43,     3,
       4,     5,     6,     7,     8,     9,    41,   218,    42,    17,
     158,    16,    14,   183,    15,    44,    47,    43,   169,    15,
      42,    25,    15,    27,    28,    29,    30,    31,    32,    33,
      44,    44,    44,   212,    44,   199,    47,    41,    44,    48,
     219,    45,   206,   207,    44,   188,    44,    42,    15,    15,
      44,   202,   222,   201,     6,    78,   116,   124,    11,   135,
     162,    -1,   205,    70,   208,    18,   179,   210,   204,    61,
      -1,   215,   216,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    -1,    -1,    -1,    -1,    -1,    25,    11,    27,
      28,    29,    30,    31,    32,    33,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    41,    18,    11,    -1,    45,    46,    -1,
      -1,    -1,    18,    36,    37,    38,    39,    40,    41,    -1,
      43,    -1,    36,    37,    38,    39,    40,    41,    42,    43,
      36,    37,    38,    39,    40,    41,    -1,    43,    19,    20,
      21,    22,    23,    24
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
      90,    43,    57,    41,   100,    15,    55,    58,    44,    58,
      71,    25,    73,    43,    69,    58,    58,    27,    44,    56,
      69,    57,    67,    61,    59,    42,    17,    16,    19,    20,
      21,    22,    23,    24,    63,    10,    11,    12,    13,    14,
      56,    57,    92,    97,    15,    44,    58,    55,    47,    91,
      92,    58,    81,    81,    43,    57,    44,    60,    61,    64,
      65,    65,    66,    66,    66,    57,    15,    42,    58,    70,
      99,    55,    58,    44,    81,    44,    44,    58,    15,    47,
      88,    89,    92,    15,    58,    58,    55,    34,    35,   101,
     102,   103,    91,    44,    69,    69,    81,    58,    56,    44,
      58,    81,    36,    39,   105,   106,    71,   102,    48,   104,
      69,    44,    47,    89,    57,    42,   104,   104,    52,    55,
      56,    44,    15,    88,    57,    52,    52,    57,    58,    15,
      89,    58,    44,    69
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
#line 58 "yacc.y"
    {}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 61 "yacc.y"
    {
  SymbolTable* globalTable = new SymbolTable("Global", nullptr);
  symbolHier.addSymbolTable(globalTable);
  symbolHier.updateCurrentScope(globalTable);
}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 68 "yacc.y"
    {
          quad.printQuadraples();
          quad.printQuadraplesToFile("output.txt");
        }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 72 "yacc.y"
    {
          quad.printQuadraples();
          quad.printQuadraplesToFile("output.txt");
      }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 77 "yacc.y"
    {printf("Processing line %d in the script.\n",yylineno);}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 80 "yacc.y"
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
#line 90 "yacc.y"
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
#line 128 "yacc.y"
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
#line 163 "yacc.y"
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
#line 203 "yacc.y"
    {}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 204 "yacc.y"
    {}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 205 "yacc.y"
    {}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 206 "yacc.y"
    {}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 207 "yacc.y"
    {}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 208 "yacc.y"
    {
        (yyval.stringValue) = (yyvsp[(1) - (1)].stringValue);
        char* label = quad.generateTempVar();
        quad.addBinary("CALL", label);
      }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 213 "yacc.y"
    {}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 214 "yacc.y"
    {}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 215 "yacc.y"
    {
         
      }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 218 "yacc.y"
    {
      
                 
      }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 225 "yacc.y"
    {}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 226 "yacc.y"
    {
                    yyerror("Missing ';'");
                    (yyval.stringValue) = (yyvsp[(1) - (1)].stringValue);
                   }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 232 "yacc.y"
    { (yyval.stringValue) = "int";  }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 233 "yacc.y"
    { (yyval.stringValue) = "float";  }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 234 "yacc.y"
    { (yyval.stringValue) = "char"; }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 235 "yacc.y"
    { (yyval.stringValue) = "string"; }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 236 "yacc.y"
    { (yyval.stringValue) = "bool";}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 238 "yacc.y"
    { 
                  (yyval.stringValue) = (yyvsp[(1) - (1)].idValue);
                  quad.pushLabel((yyvsp[(1) - (1)].idValue));  
                }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 245 "yacc.y"
    {
                            (yyval.stringValue) = (yyvsp[(1) - (1)].stringValue);
                            printf("logExpression: %s\n", (yyvsp[(1) - (1)].stringValue));
                          }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 249 "yacc.y"
    {
                            (yyval.stringValue) = (yyvsp[(1) - (1)].stringValue);
                            printf("AAAA Function Call: %s\n", (yyvsp[(1) - (1)].stringValue));
                            char* label = quad.generateTempVar();
                            quad.addBinary("CALL", label);
                          }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 263 "yacc.y"
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
#line 285 "yacc.y"
    {
  (yyval.stringValue) = (yyvsp[(1) - (1)].stringValue); // propagate the result of the andLogExpression
}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 289 "yacc.y"
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
#line 311 "yacc.y"
    {
  (yyval.stringValue) = (yyvsp[(1) - (1)].stringValue); // propagate the result of the notLogExpression
}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 315 "yacc.y"
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
#line 334 "yacc.y"
    {
        (yyval.stringValue) = (yyvsp[(1) - (1)].stringValue); 
        printf("compExpression: %s\n", (yyvsp[(1) - (1)].stringValue));
      }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 340 "yacc.y"
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
#line 366 "yacc.y"
    {
  (yyval.stringValue) = (yyvsp[(1) - (1)].stringValue); // propagate the result of the arithmetic expression
}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 370 "yacc.y"
    {(yyval.stringValue) = "EQ";}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 371 "yacc.y"
    {(yyval.stringValue) = "NEQ";}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 372 "yacc.y"
    {(yyval.stringValue) = "LT";}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 373 "yacc.y"
    {(yyval.stringValue) = "GT";}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 374 "yacc.y"
    {(yyval.stringValue) = "LE";}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 375 "yacc.y"
    {(yyval.stringValue) = "GE";}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 379 "yacc.y"
    {
              (yyval.stringValue) = (yyvsp[(1) - (1)].stringValue); // propagate the result of the term1
             }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 382 "yacc.y"
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
#line 404 "yacc.y"
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
#line 427 "yacc.y"
    {
          (yyval.stringValue) = (yyvsp[(1) - (1)].stringValue); // propagate the result of term2
        }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 430 "yacc.y"
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
#line 452 "yacc.y"
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
#line 475 "yacc.y"
    {
                  (yyval.stringValue) = (yyvsp[(1) - (1)].stringValue); // propagate the result of term3
                }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 478 "yacc.y"
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
#line 500 "yacc.y"
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
#line 520 "yacc.y"
    { 
          (yyval.stringValue) = (yyvsp[(1) - (1)].stringValue); // propagate the result of the factor
        }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 525 "yacc.y"
    {
            // convert integer value to string
            char* expr_info = concatenateTwoStrings("int", (yyvsp[(1) - (1)].stringValue), ','); 
            (yyval.stringValue) = expr_info;
            quad.pushLabel((yyvsp[(1) - (1)].stringValue)); 
          }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 531 "yacc.y"
    {
            char* expr_info = concatenateTwoStrings("float", (yyvsp[(1) - (1)].stringValue), ','); 
            (yyval.stringValue) = expr_info;
            quad.pushLabel((yyvsp[(1) - (1)].stringValue));
          }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 536 "yacc.y"
    {
            char* expr_info = concatenateTwoStrings("char", (yyvsp[(1) - (1)].stringValue), ','); 
            (yyval.stringValue) = expr_info;
            quad.pushLabel((yyvsp[(1) - (1)].stringValue));
          }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 541 "yacc.y"
    {
            char* expr_info = concatenateTwoStrings("string", (yyvsp[(1) - (1)].stringValue), ','); 
            (yyval.stringValue) = expr_info;
            quad.pushLabel((yyvsp[(1) - (1)].stringValue));
          }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 546 "yacc.y"
    {
            char* expr_info = concatenateTwoStrings("bool", (yyvsp[(1) - (1)].stringValue), ','); 
            (yyval.stringValue) = expr_info;
            quad.pushLabel((yyvsp[(1) - (1)].stringValue));
          }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 551 "yacc.y"
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
#line 571 "yacc.y"
    { (yyval.stringValue) = (yyvsp[(2) - (3)].stringValue); }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 575 "yacc.y"
    {}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 576 "yacc.y"
    {}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 579 "yacc.y"
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
#line 591 "yacc.y"
    {
  symbolHier.updateCurrentScope(symbolHier.currentScopeTable->parent);                   
}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 593 "yacc.y"
    {
  yyerror("Missing closing brace '}' at the end of scope.");
}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 605 "yacc.y"
    {}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 606 "yacc.y"
    {}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 609 "yacc.y"
    {}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 610 "yacc.y"
    {}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 611 "yacc.y"
    {}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 614 "yacc.y"
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
#line 625 "yacc.y"
    {
    printf("ELSE statement ends\n");
    quad.addLine();
}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 631 "yacc.y"
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
#line 642 "yacc.y"
    {
    printf("IF statement begins\n");
}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 646 "yacc.y"
    {
    printf("ELSE IF statement begins\n");
}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 650 "yacc.y"
    {
    printf("ELSE statement begins\n");
}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 656 "yacc.y"
    {
  quad.endLoop(); 
}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 660 "yacc.y"
    {
  quad.pushLabel("true");
  quad.addBranch("==");
}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 665 "yacc.y"
    {
  quad.addLoopStart();
}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 671 "yacc.y"
    {
  quad.endLoop(); 
}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 675 "yacc.y"
    { 
                quad.addLoopStart();
             }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 682 "yacc.y"
    {
  printf("Function ends\n");
  symbolHier.updateCurrentScope(symbolHier.currentScopeTable->parent);
}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 689 "yacc.y"
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
#line 698 "yacc.y"
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
#line 708 "yacc.y"
    { printf("Starting params list\n");}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 713 "yacc.y"
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
#line 725 "yacc.y"
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
#line 738 "yacc.y"
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
#line 748 "yacc.y"
    {}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 750 "yacc.y"
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
#line 760 "yacc.y"
    { (yyval.stringValue) = (yyvsp[(1) - (1)].stringValue); }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 764 "yacc.y"
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
#line 787 "yacc.y"
    {
                      char* reason = nullptr;
                      SymbolTable* foundTable = symbolHier.checkFunctionExists((yyvsp[(1) - (3)].stringValue), "", reason);
                      if (!foundTable){
                        semantic_errors(reason);
                      }
                      else {
                        (yyval.stringValue) = concatenateTwoStrings(foundTable->returnType, "void", ','); 
                        quad.pushLabel("");
                      }
                        
                    }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 801 "yacc.y"
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
#line 809 "yacc.y"
    {(yyval.stringValue) = (yyvsp[(1) - (1)].stringValue);}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 812 "yacc.y"
    {(yyval.stringValue) = "";}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 814 "yacc.y"
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
#line 836 "yacc.y"
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
#line 847 "yacc.y"
    {}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 858 "yacc.y"
    {
  symbolHier.updateCurrentScope(symbolHier.currentScopeTable->parent); 
  SymbolTable* entryScope = symbolHier.getEntryScope((yyvsp[(8) - (12)].stringValue));
  if (!entryScope) {
      semantic_errors("Variable is not declared\n");
  } 
  else {
    SemanticChecker semanticChecker;
    char* expr_value, *expr_name="";
    vector <char*> expr_info = splitString((yyvsp[(10) - (12)].stringValue), ',');

    expr_value = expr_info[0];
    if (expr_info.size() > 1) expr_name = expr_info[1];

    // Create an instance of SemanticChecker
    SymbolTable* entryScope = symbolHier.getEntryScope((yyvsp[(8) - (12)].stringValue), semanticChecker.determineType(expr_value));
    if (!entryScope) {
        semantic_errors("Type mismatch between variable and expression\n");
    }
    else {
      SymbolTableEntry* entry = entryScope->getEntry((yyvsp[(8) - (12)].stringValue));

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
  quad.endLoop();
}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 901 "yacc.y"
    {
  SymbolTable* localTable = new SymbolTable(strdup(("Local" + to_string(num_scopes)).c_str()), symbolHier.currentScopeTable);
  num_scopes = num_scopes +1;
  //add table as a child to current
  symbolHier.currentScopeTable->addChild(localTable);
  symbolHier.addSymbolTable(localTable);
  //update current scope
  symbolHier.updateCurrentScope(localTable);
  quad.addLoopStart();
}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 913 "yacc.y"
    {
                SymbolTable* entryScope = symbolHier.getEntryScope((yyvsp[(2) - (4)].stringValue), (yyvsp[(1) - (4)].stringValue));
                if (entryScope) {
                    semantic_errors("Variable is already declared\n");
                } else {
                  // Create an instance of SemanticChecker
                  SemanticChecker semanticChecker;

                  printf("Variable Type: %s\n", (yyvsp[(1) - (4)].stringValue));
                  printf("Expression: %s\n", (yyvsp[(4) - (4)].stringValue));

                  char* expr_value, *expr_name="";
                  vector <char*> expr_info = splitString((yyvsp[(4) - (4)].stringValue), ',');

                  expr_value = expr_info[0];
                  if (expr_info.size() > 1) expr_name = expr_info[1];

                  printf("Expression Value: %s\n", expr_value);
                  printf("Expression Name: %s\n", expr_name);

                  // Check if the types are compatible
                  if (!semanticChecker.matchTypes((yyvsp[(1) - (4)].stringValue), expr_value))
                  {
                    semantic_errors("Type mismatch between data type and expression\n");
                  }
                  else
                  {
                    symbolHier.addEntryToCurrentScope((yyvsp[(2) - (4)].stringValue), (yyvsp[(1) - (4)].stringValue), expr_value, true, false);
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

  case 105:

/* Line 1455 of yacc.c  */
#line 950 "yacc.y"
    {
              SymbolTable* entryScope = symbolHier.getEntryScope((yyvsp[(1) - (3)].stringValue));
              if (!entryScope) {
                  semantic_errors("Variable is not declared\n");
              } 
              else {
                  SemanticChecker semanticChecker;
                  char* expr_value, *expr_name="";
                  vector <char*> expr_info = splitString((yyvsp[(3) - (3)].stringValue), ',');

                  expr_value = expr_info[0];
                  if (expr_info.size() > 1) expr_name = expr_info[1];

                  // Create an instance of SemanticChecker
                  SymbolTable* entryScope = symbolHier.getEntryScope((yyvsp[(1) - (3)].stringValue), semanticChecker.determineType(expr_value));
                  if (!entryScope) {
                      semantic_errors("Type mismatch between variable and expression\n");
                  }
                  else {
                    SymbolTableEntry* entry = entryScope->getEntry((yyvsp[(1) - (3)].stringValue));

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

  case 106:

/* Line 1455 of yacc.c  */
#line 989 "yacc.y"
    { (yyval.stringValue) = (yyvsp[(1) - (1)].stringValue); }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 995 "yacc.y"
    { 
                                                                    quad.processCases(switchIdentifier);
                                                                    quad.addLineCase();
                                                                  }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 1001 "yacc.y"
    { 
                            quad.jumpStartCase();
                            }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 1006 "yacc.y"
    { (yyval.stringValue) = (yyvsp[(1) - (1)].idValue);
                      switchIdentifier = (yyvsp[(1) - (1)].idValue);
                    }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1011 "yacc.y"
    {}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 1012 "yacc.y"
    {}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 1015 "yacc.y"
    {;
                                                quad.addJE();
                                                }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 1018 "yacc.y"
    { 
                                                quad.addJE();
                                                }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 1021 "yacc.y"
    {
                                  quad.addJE();
                                  }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 1026 "yacc.y"
    { caseIdentifier = "default";}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 1029 "yacc.y"
    { 
                  quad.insertCase(caseIdentifier);
                  }
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 1034 "yacc.y"
    {(yyval.stringValue) = (yyvsp[(1) - (1)].stringValue);
                                  caseIdentifier = (yyvsp[(1) - (1)].stringValue);
                                  quad.insertCaseID(caseIdentifier); 
                                  }
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 1041 "yacc.y"
    {(yyval.stringValue) = (yyvsp[(1) - (1)].stringValue);
                                      caseIdentifier = (yyvsp[(1) - (1)].stringValue);
                                      quad.insertCaseID(caseIdentifier); 
                                      }
    break;



/* Line 1455 of yacc.c  */
#line 3204 "y.tab.c"
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
#line 1049 "yacc.y"


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


