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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <stdlib.h>
	#include <iostream>
	#include <fstream>
	#include <string>
	#include "functions.cpp"
	using namespace std;
	int yylex(void);
	void yyerror(char *s)
	{

		extern int yylineno;
		fprintf(stderr,"Unknown errors detected.%d \n " , (yylineno)/2);
	}
	int flag = 0;
	extern int  yylex();
	extern int yylineno;
	extern int lineno;

#line 87 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    MINUS = 258,
    PLUS = 259,
    MUL = 260,
    DIV = 261,
    PLUS_EQUAL = 262,
    MINUS_EQUAL = 263,
    MUL_EQUAL = 264,
    DIV_EQUAL = 265,
    PLUS_PLUS = 266,
    MINUS_MINUS = 267,
    EQUAL = 268,
    IF = 269,
    ELSE = 270,
    WHILE = 271,
    SWITCH = 272,
    CASE = 273,
    FOR = 274,
    DEFAULT = 275,
    FLOAT_ID = 276,
    NUM_ID = 277,
    ID = 278,
    BREAK = 279,
    CONTINUE = 280,
    RETURN = 281,
    WAIT = 282,
    GR = 283,
    LR = 284,
    EQUAL_EQUAL = 285,
    LR_EQUAL = 286,
    GR_EQUAL = 287,
    NOT_EQUAL = 288,
    AND_AND = 289,
    AND = 290,
    OR_OR = 291,
    OR = 292,
    NOT = 293,
    SEMI = 294,
    LP = 295,
    RP = 296,
    LB = 297,
    RB = 298,
    LS = 299,
    RS = 300,
    COMMA = 301,
    COLON = 302,
    NAME = 303,
    DOT = 304,
    DQ = 305,
    SQ = 306,
    PROCESSOR = 307,
    ISA = 308,
    CLOCK_SPEED = 309,
    L1_MEMORY = 310,
    L2_MEMORY = 311,
    ARM = 312,
    AMD = 313,
    CDC = 314,
    MIPS = 315,
    IS_RUNNING = 316,
    SUBMIT_JOBS = 317,
    GET_CLOCK_SPEED = 318,
    RUN = 319,
    DISCARD_JOB = 320,
    CLUSTER = 321,
    PROCESSORS = 322,
    TOPOLOGY = 323,
    STAR = 324,
    BUS = 325,
    RING = 326,
    LINK_BANDWIDTH = 327,
    LINK_CAPACITY = 328,
    MEMORY = 329,
    MEMORY_TYPE = 330,
    MEM_SIZE = 331,
    PRIMARY = 332,
    SECONDARY = 333,
    CACHE = 334,
    GET_AVAILABLE_MEMORY = 335,
    LINK = 336,
    START_POINT = 337,
    END_POINT = 338,
    BANDWIDTH = 339,
    CHANNEL_CAPACITY = 340,
    JOB = 341,
    JOB_ID = 342,
    FLOPS_REQUIRED = 343,
    DEADLINE = 344,
    MEM_REQUIRED = 345,
    AFFINITY = 346,
    GET_MEMORY = 347,
    SCHEDULER = 348,
    FIRST_COME_FIRST_SERVE = 349,
    SHORTEST_JOB_NEXT = 350,
    PRIORITY_SCHEDULING = 351,
    SHORTEST_REMAINING_TIME = 352,
    ROUND_ROBIN = 353,
    MULTI_LEVEL_QUEUES = 354,
    SCHEDULE_OBJECT = 355
  };
#endif
/* Tokens.  */
#define MINUS 258
#define PLUS 259
#define MUL 260
#define DIV 261
#define PLUS_EQUAL 262
#define MINUS_EQUAL 263
#define MUL_EQUAL 264
#define DIV_EQUAL 265
#define PLUS_PLUS 266
#define MINUS_MINUS 267
#define EQUAL 268
#define IF 269
#define ELSE 270
#define WHILE 271
#define SWITCH 272
#define CASE 273
#define FOR 274
#define DEFAULT 275
#define FLOAT_ID 276
#define NUM_ID 277
#define ID 278
#define BREAK 279
#define CONTINUE 280
#define RETURN 281
#define WAIT 282
#define GR 283
#define LR 284
#define EQUAL_EQUAL 285
#define LR_EQUAL 286
#define GR_EQUAL 287
#define NOT_EQUAL 288
#define AND_AND 289
#define AND 290
#define OR_OR 291
#define OR 292
#define NOT 293
#define SEMI 294
#define LP 295
#define RP 296
#define LB 297
#define RB 298
#define LS 299
#define RS 300
#define COMMA 301
#define COLON 302
#define NAME 303
#define DOT 304
#define DQ 305
#define SQ 306
#define PROCESSOR 307
#define ISA 308
#define CLOCK_SPEED 309
#define L1_MEMORY 310
#define L2_MEMORY 311
#define ARM 312
#define AMD 313
#define CDC 314
#define MIPS 315
#define IS_RUNNING 316
#define SUBMIT_JOBS 317
#define GET_CLOCK_SPEED 318
#define RUN 319
#define DISCARD_JOB 320
#define CLUSTER 321
#define PROCESSORS 322
#define TOPOLOGY 323
#define STAR 324
#define BUS 325
#define RING 326
#define LINK_BANDWIDTH 327
#define LINK_CAPACITY 328
#define MEMORY 329
#define MEMORY_TYPE 330
#define MEM_SIZE 331
#define PRIMARY 332
#define SECONDARY 333
#define CACHE 334
#define GET_AVAILABLE_MEMORY 335
#define LINK 336
#define START_POINT 337
#define END_POINT 338
#define BANDWIDTH 339
#define CHANNEL_CAPACITY 340
#define JOB 341
#define JOB_ID 342
#define FLOPS_REQUIRED 343
#define DEADLINE 344
#define MEM_REQUIRED 345
#define AFFINITY 346
#define GET_MEMORY 347
#define SCHEDULER 348
#define FIRST_COME_FIRST_SERVE 349
#define SHORTEST_JOB_NEXT 350
#define PRIORITY_SCHEDULING 351
#define SHORTEST_REMAINING_TIME 352
#define ROUND_ROBIN 353
#define MULTI_LEVEL_QUEUES 354
#define SCHEDULE_OBJECT 355

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 22 "parser.y" /* yacc.c:355  */

	node * Node;

#line 331 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 348 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  56
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   436

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  101
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  181
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  426

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   355

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    47,    47,    67,    69,    71,    72,    74,    75,    77,
      78,    80,    81,    83,    84,    86,    87,    89,    90,    92,
      93,    95,    96,    98,    99,   101,   102,   103,   104,   105,
     107,   108,   109,   111,   113,   114,   115,   117,   118,   119,
     120,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     132,   133,   135,   137,   139,   140,   141,   143,   144,   145,
     147,   148,   150,   152,   154,   156,   157,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   171,   172,   173,
     174,   175,   176,   178,   180,   181,   182,   183,   185,   186,
     187,   188,   189,   190,   191,   193,   194,   195,   197,   199,
     201,   203,   205,   206,   208,   209,   210,   211,   213,   215,
     216,   218,   219,   220,   221,   222,   224,   225,   227,   228,
     230,   231,   234,   236,   238,   240,   241,   243,   245,   246,
     248,   250,   251,   253,   254,   256,   257,   259,   260,   263,
     265,   267,   268,   270,   271,   273,   274,   276,   277,   278,
     279,   280,   281,   283,   285,   287,   289,   291,   293,   295,
     297,   298,   300,   301,   303,   304,   306,   307,   309,   312,
     314,   316,   318,   319,   321,   322,   324,   325,   326,   328,
     329,   331
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MINUS", "PLUS", "MUL", "DIV",
  "PLUS_EQUAL", "MINUS_EQUAL", "MUL_EQUAL", "DIV_EQUAL", "PLUS_PLUS",
  "MINUS_MINUS", "EQUAL", "IF", "ELSE", "WHILE", "SWITCH", "CASE", "FOR",
  "DEFAULT", "FLOAT_ID", "NUM_ID", "ID", "BREAK", "CONTINUE", "RETURN",
  "WAIT", "GR", "LR", "EQUAL_EQUAL", "LR_EQUAL", "GR_EQUAL", "NOT_EQUAL",
  "AND_AND", "AND", "OR_OR", "OR", "NOT", "SEMI", "LP", "RP", "LB", "RB",
  "LS", "RS", "COMMA", "COLON", "NAME", "DOT", "DQ", "SQ", "PROCESSOR",
  "ISA", "CLOCK_SPEED", "L1_MEMORY", "L2_MEMORY", "ARM", "AMD", "CDC",
  "MIPS", "IS_RUNNING", "SUBMIT_JOBS", "GET_CLOCK_SPEED", "RUN",
  "DISCARD_JOB", "CLUSTER", "PROCESSORS", "TOPOLOGY", "STAR", "BUS",
  "RING", "LINK_BANDWIDTH", "LINK_CAPACITY", "MEMORY", "MEMORY_TYPE",
  "MEM_SIZE", "PRIMARY", "SECONDARY", "CACHE", "GET_AVAILABLE_MEMORY",
  "LINK", "START_POINT", "END_POINT", "BANDWIDTH", "CHANNEL_CAPACITY",
  "JOB", "JOB_ID", "FLOPS_REQUIRED", "DEADLINE", "MEM_REQUIRED",
  "AFFINITY", "GET_MEMORY", "SCHEDULER", "FIRST_COME_FIRST_SERVE",
  "SHORTEST_JOB_NEXT", "PRIORITY_SCHEDULING", "SHORTEST_REMAINING_TIME",
  "ROUND_ROBIN", "MULTI_LEVEL_QUEUES", "SCHEDULE_OBJECT", "$accept",
  "program", "statement", "expression", "expression_prime", "term",
  "term_prime", "factor", "assignment", "mutable", "epsilon",
  "condition_statement", "new_condition", "cases", "loop_statement",
  "while_body", "for_body", "list_assignment", "next_assignment", "op",
  "construct", "scheduler_construct", "function_call", "scheduler_call",
  "name_optional", "name_value", "process_construct", "process_definition",
  "parameters_process_def", "memory_optional_l2", "isa_value",
  "clock_value", "l1_value", "process_call",
  "param_process_submit_discard_jobs", "param_runprocess", "lists",
  "link_construct", "link_definition", "parameters_link_def",
  "start_pointnt", "start_value", "end_pointnt", "end_value",
  "bandwidthnt", "bandwidth_value", "channel_capacitynt",
  "channel_capacity_value", "cluster_construct", "parameters_cluster_def",
  "processorsnt", "topologynt", "param1_value", "topology_value",
  "link_bandwidth_value", "link_capicity_value", "job_construct",
  "job_definition", "parameters_job_def", "job_id_value",
  "flops_required_value", "deadline_value", "mem_required_value",
  "affinity_value", "amd_value", "cdc_value", "mips_value", "dec_value",
  "job_call", "memory_construct", "memory_definition",
  "parameters_memory_def", "memory_typent", "mem_sizent", "mem_value",
  "mem_size_value", "memory_call", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355
};
# endif

#define YYPACT_NINF -328

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-328)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     117,   -18,   -18,   -26,    13,    37,    72,  -328,  -328,  -328,
      88,   111,   119,   129,   126,   117,   126,   105,   165,  -328,
     136,    31,   166,   178,   110,   117,   117,  -328,  -328,   189,
    -328,   231,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,
    -328,   200,   200,   126,   126,   126,   103,   117,   117,   117,
     117,  -328,    86,  -328,   196,    38,  -328,   117,   130,   130,
     231,  -328,   130,   130,  -328,  -328,   117,   126,   126,   126,
     126,  -328,  -328,   -10,   126,   124,  -328,  -328,   117,  -328,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,   126,
     206,   207,   208,   210,   185,   211,  -328,  -328,  -328,  -328,
    -328,   -18,   200,   213,  -328,    31,   200,    31,   126,   166,
     166,  -328,  -328,  -328,  -328,  -328,   215,   229,   230,   232,
     233,   234,  -328,  -328,  -328,  -328,  -328,   236,   235,   237,
     238,   239,   242,   243,   244,   246,   247,   248,   249,   250,
     251,  -328,  -328,   252,   253,   256,   103,  -328,  -328,   126,
     126,    43,   254,  -328,  -328,  -328,  -328,  -328,  -328,   199,
      28,   -43,    -9,   205,   201,  -328,   257,    67,   259,    67,
     260,   261,   262,   263,   264,   265,   266,   267,   -18,   117,
     117,   192,   210,   258,   -18,  -328,   280,   269,   -18,   298,
     200,   271,   268,  -328,    84,   305,   278,   274,   299,   308,
     284,   281,   313,   287,   316,  -328,   -18,   200,   289,  -328,
     290,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,    55,
     291,   292,   310,   286,  -328,   295,  -328,   103,  -328,   225,
    -328,   293,    80,  -328,   -46,  -328,  -328,  -328,   288,   294,
    -328,    -1,  -328,   296,   297,  -328,   -47,   126,  -328,   300,
     303,  -328,  -328,  -328,   322,  -328,   302,   117,   117,   301,
     142,  -328,  -328,   138,   327,   306,  -328,    84,  -328,  -328,
     328,   307,  -328,  -328,   299,   320,   338,   309,  -328,   312,
     -18,  -328,    10,  -328,  -328,   117,  -328,  -328,   314,  -328,
    -328,  -328,  -328,   311,  -328,  -328,  -328,   304,   317,   126,
     315,    22,   155,  -328,  -328,   318,  -328,   319,   321,    -3,
     272,    36,   323,   117,   192,   117,   324,  -328,   138,  -328,
     330,  -328,  -328,   348,   -18,  -328,  -328,   320,  -328,  -328,
     351,   331,  -328,   360,   337,   126,   339,  -328,   340,   326,
     334,   126,   335,   200,   336,   341,   161,   -15,   359,  -328,
     346,  -328,  -328,   343,  -328,  -328,   307,   -18,  -328,  -328,
    -328,  -328,  -328,   375,   307,  -328,  -328,   347,   350,   372,
    -328,   345,   193,  -328,   325,   117,  -328,   352,  -328,  -328,
     383,   354,   344,   126,   322,   387,  -328,   355,  -328,   -14,
     329,   200,   357,  -328,   391,   -17,  -328,  -328,   384,   392,
    -328,   362,   -14,   332,   307,   396,  -328,   366,   204,  -328,
    -328,  -328,   365,   209,  -328,  -328,   367,   212,  -328,  -328,
     369,   214,  -328,  -328,   371,  -328
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,    37,    38,    50,
       0,     0,     0,     0,     0,     7,     0,     0,     0,     2,
       0,    52,    52,     0,    39,    20,    10,    60,    61,     0,
      82,    29,    87,    77,    84,    80,    81,    78,    85,    79,
      86,    48,    49,     0,     0,     0,     0,    12,    14,    16,
      18,    27,    39,     8,     0,     0,     1,     3,     0,     0,
      25,    32,     0,     0,    33,    36,     5,     0,     0,     0,
       0,    46,    47,     0,     0,     0,    19,     9,    24,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,     0,
       0,     0,     0,    52,     0,     0,    11,    13,    15,    17,
      40,     0,   118,     0,     4,    52,    39,    52,     0,    52,
      52,     6,    42,    43,    44,    45,     0,     0,     0,     0,
       0,     0,    41,    99,   122,   152,   169,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    23,    28,     0,     0,     0,     0,    66,    64,     0,
       0,   121,     0,   114,    31,    30,    26,    34,    35,     0,
       0,     0,     0,     0,     0,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,    52,     0,     0,   119,     0,     0,     0,     0,
     145,     0,     0,   142,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,     0,   116,     0,   113,
       0,   181,   168,    88,    89,    90,    91,    92,    93,     0,
       0,     0,     0,     0,    59,     0,    65,     0,   120,     0,
     100,     0,     0,   139,     0,   176,   177,   178,     0,     0,
     170,     0,   127,     0,     0,   123,     0,     0,   153,     0,
       0,   112,   115,    94,    52,    62,     0,     0,    21,     0,
       0,   146,   141,     0,     0,     0,   172,     0,   180,   179,
       0,    52,   174,   125,     0,     0,     0,     0,   155,     0,
       0,   117,     0,    56,    53,     0,    58,    22,     0,   104,
     105,   106,   107,     0,   147,   148,   149,     0,     0,     0,
       0,     0,     0,    97,   171,     0,   130,     0,     0,     0,
       0,     0,     0,     0,    52,     0,     0,   144,     0,   150,
       0,   173,   175,     0,     0,   126,   128,     0,   134,   133,
       0,     0,   131,     0,     0,     0,     0,    57,     0,     0,
       0,     0,     0,    98,     0,     0,     0,     0,     0,    83,
       0,    55,    63,     0,   143,   151,    52,     0,    96,   129,
     132,   137,   138,     0,    52,   135,   156,     0,     0,     0,
     140,     0,     0,   124,     0,     0,   108,     0,    95,   136,
       0,     0,     0,     0,    52,     0,   157,     0,    54,     0,
       0,   109,    52,   110,     0,     0,   103,   101,     0,     0,
     158,     0,     0,     0,    52,     0,   102,     0,     0,   154,
     160,   161,     0,     0,   162,   163,     0,     0,   164,   165,
       0,     0,   166,   167,     0,   159
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -328,  -328,    59,    24,   106,   182,   133,   183,   -36,     0,
      -5,  -328,    33,    98,  -328,  -328,  -328,   191,   240,   361,
    -328,  -328,  -328,  -328,  -327,    63,  -328,  -328,  -328,  -328,
    -328,  -328,    23,  -328,   255,  -328,  -161,  -328,  -328,  -328,
    -328,   152,  -328,   100,  -328,    82,  -328,    57,  -328,  -328,
    -328,  -328,   198,   113,  -328,  -328,  -328,  -328,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,
     363,  -328,  -328,  -328,   168,   131,  -328
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,    19,    20,    60,    21,    64,    22,    23,    52,
     303,    25,   284,   225,    26,    27,    28,    95,   148,    89,
      29,    30,    31,    32,   304,   344,    33,   123,   187,   397,
     293,   377,   392,    34,   208,   103,   152,    35,   124,   200,
     201,   243,   277,   307,   331,   332,   364,   365,    36,   191,
     192,   265,   193,   297,   320,   356,    37,   125,   203,   279,
     367,   387,   401,   409,   412,   416,   420,   424,    38,    39,
     393,   196,   197,   271,   238,   272,    40
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      24,    41,    42,   275,   263,     9,   361,   362,   194,     9,
      93,     7,     8,     9,    43,    24,    61,    65,   328,   329,
     268,   269,   264,   228,   312,    24,    24,   231,    14,   370,
      16,   323,   195,   324,    58,    59,   276,   373,    51,   399,
      54,   198,   116,   268,   269,   250,    94,    24,    24,    24,
      24,     9,   313,    44,    17,   102,   117,    24,   106,   106,
     118,     9,   106,   106,   118,   396,    24,    90,    91,    92,
     363,   119,   188,   199,    53,   270,   120,   406,    24,    45,
      74,   330,   101,   121,    76,    77,   334,    74,   147,   184,
       9,   112,   113,   114,   115,   189,   253,   122,   127,    74,
      61,   151,    61,     9,    65,    65,    96,    97,    98,    99,
     182,   206,    46,   142,     1,     2,   104,    67,    68,    69,
      70,    71,    72,    73,   188,   111,     9,    47,     1,     2,
      74,     3,   156,     4,     5,    75,     6,   141,     7,     8,
       9,    10,    11,    12,    13,    55,    94,     7,     8,     9,
      48,     7,     8,     9,    74,    14,    15,    16,    49,    75,
     190,   235,   236,   237,    14,    56,    16,   207,    50,   207,
      16,    62,    63,   122,   183,    57,   224,   147,   219,    24,
      24,    17,   328,   329,   151,   128,   129,   130,   151,   131,
      17,    93,    67,    68,    69,    70,    71,    72,   149,   289,
     290,   291,   292,   323,   132,   324,   151,   294,   295,   296,
     222,   154,   223,   155,   361,   362,   133,    66,   134,   135,
     136,   137,   138,   139,   140,   410,   411,    94,    78,    74,
     414,   415,   190,   418,   419,   422,   423,   100,   220,   221,
     105,   107,   157,   158,    74,   109,   110,   143,   144,   283,
     150,   145,   186,   204,   153,   159,   146,    24,    24,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,   160,
     161,   278,   162,   163,   164,   166,   260,   167,   168,   169,
     311,   165,   170,   171,   172,    24,   173,   174,   175,   176,
     177,   178,   202,   229,   179,   180,   181,   227,   205,   185,
     209,   211,   212,   213,   214,   215,   216,   217,   218,   224,
     230,   232,   233,    24,   234,    24,   286,   287,   239,   240,
     241,   244,   242,   319,   343,   245,   247,   246,   248,   249,
     251,   252,   256,   257,   254,   255,   258,   282,   261,   266,
     298,   301,   288,   306,   314,   267,   273,   274,   281,   285,
     280,   308,   299,   302,   317,   309,   315,   343,   310,   350,
     333,   342,   316,   335,   346,   355,   321,   318,   325,   326,
     339,   327,   336,   348,   338,    24,   341,   347,   349,   283,
     353,   366,   351,   352,   354,   357,   358,   368,   372,   391,
     369,   359,   375,   374,   376,   378,   383,   384,   382,   385,
     389,   390,   391,   395,   398,   402,   400,   386,   403,   407,
     408,   413,   337,   417,   380,   421,   425,   388,   259,   394,
     371,   108,   226,   405,   210,   404,   305,   345,   360,   379,
     262,   340,   322,     0,   381,   300,   126
};

static const yytype_int16 yycheck[] =
{
       0,     1,     2,    50,    50,    23,    21,    22,    51,    23,
      46,    21,    22,    23,    40,    15,    21,    22,    21,    22,
      21,    22,    68,   184,    14,    25,    26,   188,    38,   356,
      40,    48,    75,    50,     3,     4,    83,   364,    14,    56,
      16,    50,    52,    21,    22,   206,    46,    47,    48,    49,
      50,    23,    42,    40,    64,    55,    66,    57,    58,    59,
      74,    23,    62,    63,    74,   392,    66,    43,    44,    45,
      85,    81,    44,    82,    15,    76,    86,   404,    78,    42,
      44,    84,    44,    93,    25,    26,    50,    44,    93,    46,
      23,    67,    68,    69,    70,    67,    41,    73,    74,    44,
     105,   101,   107,    23,   109,   110,    47,    48,    49,    50,
     146,    44,    40,    89,    11,    12,    57,     7,     8,     9,
      10,    11,    12,    13,    44,    66,    23,    39,    11,    12,
      44,    14,   108,    16,    17,    49,    19,    78,    21,    22,
      23,    24,    25,    26,    27,    40,   146,    21,    22,    23,
      39,    21,    22,    23,    44,    38,    39,    40,    39,    49,
     160,    77,    78,    79,    38,     0,    40,   167,    39,   169,
      40,     5,     6,   149,   150,    39,   181,   182,   178,   179,
     180,    64,    21,    22,   184,    61,    62,    63,   188,    65,
      64,   227,     7,     8,     9,    10,    11,    12,    13,    57,
      58,    59,    60,    48,    80,    50,   206,    69,    70,    71,
      18,   105,    20,   107,    21,    22,    92,    39,    94,    95,
      96,    97,    98,    99,   100,    21,    22,   227,    39,    44,
      21,    22,   232,    21,    22,    21,    22,    41,   179,   180,
      58,    59,   109,   110,    44,    62,    63,    41,    41,   254,
      39,    43,    53,    52,    41,    40,    46,   257,   258,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    40,
      40,   247,    40,    40,    40,    40,    51,    40,    40,    40,
     280,    45,    40,    40,    40,   285,    40,    40,    40,    40,
      40,    40,    87,    13,    42,    42,    40,    39,    41,    45,
      41,    41,    41,    41,    41,    41,    41,    41,    41,   314,
      41,    13,    41,   313,    46,   315,   257,   258,    13,    41,
      46,    13,    23,   299,   324,    41,    13,    46,    41,    13,
      41,    41,    22,    47,    43,    43,    41,    15,    45,    51,
      13,    13,    41,    23,   285,    51,    50,    50,    45,    47,
      50,    13,    46,    46,    50,    46,    42,   357,    46,   335,
      88,    13,    51,    40,    13,   341,    51,    50,    50,    50,
      46,    50,   313,    13,   315,   375,    46,    46,    41,   384,
      54,    22,    43,    43,    50,    50,    50,    41,    13,   389,
      47,    50,    42,    46,    22,    50,    13,    43,    46,    55,
      13,    46,   402,    46,    13,    13,    22,   383,    46,    13,
      44,    46,   314,    46,    89,    46,    45,   384,   227,    90,
     357,    60,   182,    91,   169,   402,   274,   327,   346,   372,
     232,   318,   301,    -1,   375,   267,    73
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    11,    12,    14,    16,    17,    19,    21,    22,    23,
      24,    25,    26,    27,    38,    39,    40,    64,   102,   103,
     104,   106,   108,   109,   110,   112,   115,   116,   117,   121,
     122,   123,   124,   127,   134,   138,   149,   157,   169,   170,
     177,   110,   110,    40,    40,    42,    40,    39,    39,    39,
      39,   104,   110,   103,   104,    40,     0,    39,     3,     4,
     105,   111,     5,     6,   107,   111,    39,     7,     8,     9,
      10,    11,    12,    13,    44,    49,   103,   103,    39,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,   120,
     104,   104,   104,   109,   110,   118,   103,   103,   103,   103,
      41,    44,   110,   136,   103,   106,   110,   106,   120,   108,
     108,   103,   104,   104,   104,   104,    52,    66,    74,    81,
      86,    93,   104,   128,   139,   158,   171,   104,    61,    62,
      63,    65,    80,    92,    94,    95,    96,    97,    98,    99,
     100,   103,   104,    41,    41,    43,    46,   111,   119,    13,
      39,   110,   137,    41,   105,   105,   104,   107,   107,    40,
      40,    40,    40,    40,    40,    45,    40,    40,    40,    40,
      40,    40,    40,    40,    40,    40,    40,    40,    40,    42,
      42,    40,   109,   104,    46,    45,    53,   129,    44,    67,
     110,   150,   151,   153,    51,    75,   172,   173,    50,    82,
     140,   141,    87,   159,    52,    41,    44,   110,   135,    41,
     135,    41,    41,    41,    41,    41,    41,    41,    41,   110,
     103,   103,    18,    20,   111,   114,   119,    39,   137,    13,
      41,   137,    13,    41,    46,    77,    78,    79,   175,    13,
      41,    46,    23,   142,    13,    41,    46,    13,    41,    13,
     137,    41,    41,    41,    43,    43,    22,    47,    41,   118,
      51,    45,   153,    50,    68,   152,    51,    51,    21,    22,
      76,   174,   176,    50,    50,    50,    83,   143,   104,   160,
      50,    45,    15,   111,   113,    47,   103,   103,    41,    57,
      58,    59,    60,   131,    69,    70,    71,   154,    13,    46,
     175,    13,    46,   111,   125,   142,    23,   144,    13,    46,
      46,   110,    14,    42,   103,    42,    51,    50,    50,   104,
     155,    51,   176,    48,    50,    50,    50,    50,    21,    22,
      84,   145,   146,    88,    50,    40,   103,   114,   103,    46,
     154,    46,    13,   110,   126,   144,    13,    46,    13,    41,
     104,    43,    43,    54,    50,   104,   156,    50,    50,    50,
     146,    21,    22,    85,   147,   148,    22,   161,    41,    47,
     125,   126,    13,   125,    46,    42,    22,   132,    50,   148,
      89,   103,    46,    13,    43,    55,   104,   162,   113,    13,
      46,   110,   133,   171,    90,    46,   125,   130,    13,    56,
      22,   163,    13,    46,   133,    91,   125,    13,    44,   164,
      21,    22,   165,    46,    21,    22,   166,    46,    21,    22,
     167,    46,    21,    22,   168,    45
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   101,   102,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   104,   104,   104,   104,   104,
     105,   105,   105,   106,   107,   107,   107,   108,   108,   108,
     108,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     110,   110,   111,   112,   113,   113,   113,   114,   114,   114,
     115,   115,   116,   117,   118,   119,   119,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   121,   121,   121,
     121,   121,   121,   122,   123,   123,   123,   123,   124,   124,
     124,   124,   124,   124,   124,   125,   125,   125,   126,   127,
     128,   129,   130,   130,   131,   131,   131,   131,   132,   133,
     133,   134,   134,   134,   134,   134,   135,   135,   136,   136,
     137,   137,   138,   139,   140,   141,   141,   142,   143,   143,
     144,   145,   145,   146,   146,   147,   147,   148,   148,   149,
     150,   151,   151,   152,   152,   153,   153,   154,   154,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   165,   166,   166,   167,   167,   168,   168,   169,   170,
     171,   172,   173,   173,   174,   174,   175,   175,   175,   176,
     176,   177
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     3,     2,     3,     1,     2,     2,
       1,     3,     2,     3,     2,     3,     2,     3,     2,     2,
       1,     7,     8,     3,     2,     2,     4,     2,     3,     1,
       3,     3,     1,     2,     3,     3,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       1,     4,     0,     8,     9,     4,     1,     5,     3,     1,
       1,     1,     7,    11,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,    10,     1,     1,     1,     1,     5,     5,
       5,     5,     5,     5,     6,     6,     4,     1,     1,     3,
       4,    14,     5,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     6,     5,     4,     6,     1,     3,     1,     3,
       3,     1,     3,     4,     8,     3,     5,     1,     3,     5,
       1,     1,     3,     1,     1,     1,     3,     1,     1,     6,
       8,     3,     1,     5,     3,     1,     3,     1,     1,     1,
       1,     1,     3,     4,    19,     1,     1,     1,     1,     9,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     3,
       4,     4,     3,     5,     1,     3,     1,     1,     1,     1,
       1,     5
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
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 48 "parser.y" /* yacc.c:1646  */
    {
	 (yyval.Node) = insert_Node("program",(yyvsp[0].Node));

	if(flag==0)
	{
		printf("Compilation successful.\n");

		ofstream output;
		output.open("tree.txt");
		print_nodes((yyval.Node),output);
		output.close();
	}
	else
	{
		printf("Syntax errors found.\n");
	}

}
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 67 "parser.y" /* yacc.c:1646  */
    {	 (yyval.Node) = insert_Node("statement",(yyvsp[-1].Node));	}
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 69 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("statement",(yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 71 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("statement",(yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 72 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("statement",(yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 74 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("statement",(yyvsp[0].Node));	}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 75 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("statement",(yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 77 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("statement",(yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 78 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("statement",(yyvsp[0].Node));	}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 80 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("statement",(yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 81 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("statement",(yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 83 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("statement",(yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 84 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("statement",(yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 86 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("statement",(yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 87 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("statement",(yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 89 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("statement",(yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 90 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("statement",(yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 92 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("statement",(yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 93 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("statement",(yyvsp[0].Node));	}
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 95 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("statement",(yyvsp[-6].Node), (yyvsp[-5].Node), (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 1880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 96 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("statement",(yyvsp[-7].Node), (yyvsp[-6].Node), (yyvsp[-5].Node), (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node) ,(yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 98 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("statement",(yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 99 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("statement",(yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 101 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("expression",(yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 102 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("expression", (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 103 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("expression",(yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 104 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("expression",(yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 105 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("expression",(yyvsp[0].Node));	}
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 107 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("expression_prime", (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 108 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("expression_prime", (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 109 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("expression_prime", (yyvsp[0].Node));	}
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 111 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("term", (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 113 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("term_prime", (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 114 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("term_prime", (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 115 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("term_prime", (yyvsp[0].Node));	}
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 117 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("factor", (yyvsp[0].Node));	}
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 118 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("factor", (yyvsp[0].Node));	}
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 119 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("factor", (yyvsp[0].Node));	}
#line 1988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 120 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("factor", (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 122 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("assignment", (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 123 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("assignment", (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 124 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("assignment", (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 125 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("assignment", (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 126 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("assignment", (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 127 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("assignment", (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 128 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("assignment", (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 129 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("assignment", (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 130 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("assignment", (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 132 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("mutable", (yyvsp[0].Node));	}
#line 2054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 133 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("mutable", (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node));	}
#line 2060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 135 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = NULL;	}
#line 2066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 137 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("condition_statement", (yyvsp[-7].Node), (yyvsp[-6].Node), (yyvsp[-5].Node), (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 139 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("new_condition", (yyvsp[-8].Node), (yyvsp[-7].Node), (yyvsp[-6].Node), (yyvsp[-5].Node), (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 140 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("new_condition", (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 141 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("new_condition", (yyvsp[0].Node));	}
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 143 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("cases", (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 144 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("cases", (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 145 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("cases", (yyvsp[0].Node));	}
#line 2108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 147 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("loop_statement", (yyvsp[0].Node));	}
#line 2114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 148 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("loop_statement", (yyvsp[0].Node));	}
#line 2120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 150 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("while_body", (yyvsp[-6].Node), (yyvsp[-5].Node), (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 152 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("for_body", (yyvsp[-10].Node), (yyvsp[-9].Node), (yyvsp[-8].Node), (yyvsp[-7].Node), (yyvsp[-6].Node), (yyvsp[-5].Node), (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 154 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("list_assignment", (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 156 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("next_assignment", (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 157 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("next_assignment", (yyvsp[0].Node));	}
#line 2150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 159 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("op", (yyvsp[0].Node));	}
#line 2156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 160 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("op", (yyvsp[0].Node));	}
#line 2162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 161 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("op", (yyvsp[0].Node));	}
#line 2168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 162 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("op", (yyvsp[0].Node));	}
#line 2174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 163 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("op", (yyvsp[0].Node));	}
#line 2180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 164 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("op", (yyvsp[0].Node));	}
#line 2186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 165 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("op", (yyvsp[0].Node));	}
#line 2192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 166 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("op", (yyvsp[0].Node));	}
#line 2198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 167 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("op", (yyvsp[0].Node));	}
#line 2204 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 168 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("op", (yyvsp[0].Node));	}
#line 2210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 171 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("construct", (yyvsp[0].Node));	}
#line 2216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 172 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("construct", (yyvsp[0].Node));	}
#line 2222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 173 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("construct", (yyvsp[0].Node));	}
#line 2228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 174 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("construct", (yyvsp[0].Node));	}
#line 2234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 175 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("construct", (yyvsp[0].Node));	}
#line 2240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 176 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("construct", (yyvsp[0].Node));	}
#line 2246 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 178 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("scheduler_construct", (yyvsp[-9].Node), (yyvsp[-8].Node), (yyvsp[-7].Node), (yyvsp[-6].Node), (yyvsp[-5].Node), (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node) );	}
#line 2252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 180 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("function_call", (yyvsp[0].Node));	}
#line 2258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 181 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("function_call", (yyvsp[0].Node));	}
#line 2264 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 182 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("function_call", (yyvsp[0].Node));	}
#line 2270 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 183 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("function_call", (yyvsp[0].Node));	}
#line 2276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 185 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("scheduler_call", (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node) );	}
#line 2282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 186 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("scheduler_call", (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2288 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 187 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("scheduler_call", (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 188 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("scheduler_call", (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 189 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("scheduler_call", (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 190 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("scheduler_call", (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 191 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("scheduler_call", (yyvsp[-5].Node), (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node) , (yyvsp[0].Node));	}
#line 2318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 193 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("name_optional", (yyvsp[-5].Node), (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2324 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 194 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("name_optional", (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2330 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 195 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("name_optional", (yyvsp[0].Node));	}
#line 2336 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 197 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("name_value", (yyvsp[0].Node));	}
#line 2342 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 199 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("process_construct", (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2348 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 201 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("process_definition", (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2354 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 203 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("parameters_process_def", (yyvsp[-13].Node), (yyvsp[-12].Node), (yyvsp[-11].Node), (yyvsp[-10].Node), (yyvsp[-9].Node), (yyvsp[-8].Node), (yyvsp[-7].Node), (yyvsp[-6].Node), (yyvsp[-5].Node), (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2360 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 205 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("memory_optional_l2", (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 206 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("memory_optional_l2", (yyvsp[0].Node));	}
#line 2372 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 208 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("isa_value", (yyvsp[0].Node));	}
#line 2378 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 209 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("isa_value", (yyvsp[0].Node));	}
#line 2384 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 210 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("isa_value", (yyvsp[0].Node));	}
#line 2390 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 211 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("isa_value", (yyvsp[0].Node));	}
#line 2396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 213 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("clock_value", (yyvsp[0].Node));	}
#line 2402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 215 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("l1_value", (yyvsp[0].Node));	}
#line 2408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 216 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("l1_value", (yyvsp[0].Node));	}
#line 2414 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 218 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("process_call", (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2420 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 219 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("process_call", (yyvsp[-5].Node), (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 220 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("process_call", (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 221 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("process_call", (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 222 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("process_call", (yyvsp[-5].Node), (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 224 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("param_process_submit_discard_jobs", (yyvsp[0].Node));	}
#line 2450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 225 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("param_process_submit_discard_jobs", (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 227 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("param_runprocess", (yyvsp[0].Node));	}
#line 2462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 228 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("param_runprocess", (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2468 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 230 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("lists", (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 231 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("lists", (yyvsp[0].Node));	}
#line 2480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 234 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("link_construct", (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 236 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("link_definition", (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 238 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("parameters_link_def", (yyvsp[-7].Node), (yyvsp[-6].Node), (yyvsp[-5].Node), (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 240 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("start_pointnt", (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 241 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("start_pointnt", (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 243 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("start_value", (yyvsp[0].Node));	}
#line 2516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 245 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("end_pointnt", (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 246 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("end_pointnt", (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 248 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("end_value", (yyvsp[0].Node));	}
#line 2534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 250 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("bandwidthnt", (yyvsp[0].Node));	}
#line 2540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 251 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("bandwidthnt", (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 253 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("bandwidth_value", (yyvsp[0].Node));	}
#line 2552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 254 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("bandwidth_value", (yyvsp[0].Node));	}
#line 2558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 256 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("channel_capacitynt", (yyvsp[0].Node));	}
#line 2564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 257 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("channel_capacitynt", (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 259 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("channel_capacity_value", (yyvsp[0].Node));	}
#line 2576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 260 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("channel_capacity_value", (yyvsp[0].Node));	}
#line 2582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 263 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("cluster_construct", (yyvsp[-5].Node), (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 265 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("cluster_construct", (yyvsp[-7].Node), (yyvsp[-6].Node), (yyvsp[-5].Node), (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 267 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("processorsnt", (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 268 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("processorsnt", (yyvsp[0].Node));	}
#line 2606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 270 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("topologynt", (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 271 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("topologynt", (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 273 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("param1_value", (yyvsp[0].Node));	}
#line 2624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 274 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("param1_value", (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 276 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("topology_value", (yyvsp[0].Node));	}
#line 2636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 277 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("topology_value", (yyvsp[0].Node));	}
#line 2642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 278 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("topology_value", (yyvsp[0].Node));	}
#line 2648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 279 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("link_bandwidth_value", (yyvsp[0].Node));	}
#line 2654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 280 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("link_capicity_value", (yyvsp[0].Node));	}
#line 2660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 281 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("job_construct", (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 283 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("job_definition", (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 285 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("parameters_job_def", (yyvsp[-18].Node), (yyvsp[-17].Node), (yyvsp[-16].Node), (yyvsp[-15].Node), (yyvsp[-14].Node), (yyvsp[-13].Node), (yyvsp[-12].Node), (yyvsp[-11].Node), (yyvsp[-10].Node), (yyvsp[-9].Node), (yyvsp[-8].Node), (yyvsp[-7].Node), (yyvsp[-6].Node), (yyvsp[-5].Node), (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 287 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("job_id_value", (yyvsp[0].Node));	}
#line 2684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 289 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("flops_required_value", (yyvsp[0].Node));	}
#line 2690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 291 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("deadline_value", (yyvsp[0].Node));	}
#line 2696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 293 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("mem_required_value", (yyvsp[0].Node));	}
#line 2702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 295 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("parameters_link_def", (yyvsp[-8].Node), (yyvsp[-7].Node), (yyvsp[-6].Node), (yyvsp[-5].Node), (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 297 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("amd_value", (yyvsp[0].Node));	}
#line 2714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 298 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("amd_value", (yyvsp[0].Node));	}
#line 2720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 300 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("cdc_value", (yyvsp[0].Node));	}
#line 2726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 301 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("cdc_value", (yyvsp[0].Node));	}
#line 2732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 303 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("mips_value", (yyvsp[0].Node));	}
#line 2738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 304 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("mips_value", (yyvsp[0].Node));	}
#line 2744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 306 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("dec_value", (yyvsp[0].Node));	}
#line 2750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 307 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("dec_value", (yyvsp[0].Node));	}
#line 2756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 309 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("job_call", (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 312 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("memory_construct", (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 314 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("memory_definition", (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 316 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("parameters_memory_def", (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 318 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("memory_typent", (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 319 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("memory_typent", (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 321 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("mem_sizent", (yyvsp[0].Node));	}
#line 2798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 322 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("mem_sizent", (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 324 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("mem_value", (yyvsp[0].Node));	}
#line 2810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 325 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("mem_value", (yyvsp[0].Node));	}
#line 2816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 326 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("mem_value", (yyvsp[0].Node));	}
#line 2822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 328 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("mem_size_value", (yyvsp[0].Node));	}
#line 2828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 329 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("mem_size_value", (yyvsp[0].Node));	}
#line 2834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 331 "parser.y" /* yacc.c:1646  */
    {	(yyval.Node) = insert_Node("memory_call", (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node));	}
#line 2840 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2844 "y.tab.c" /* yacc.c:1646  */
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
      yyerror (YY_("syntax error"));
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
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
  yyerror (YY_("memory exhausted"));
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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 334 "parser.y" /* yacc.c:1906  */


int main(){
	//yydebug = 1;
	yyparse();
	return 0 ;
}
