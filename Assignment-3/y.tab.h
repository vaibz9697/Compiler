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
#line 22 "parser.y" /* yacc.c:1909  */

	node * Node;

#line 258 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
