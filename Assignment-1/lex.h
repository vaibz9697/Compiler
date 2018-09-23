#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define EOI		0	/* End of input			*/
#define SEMI		1	/* ; 				*/
#define PLUS 		2	/* + 				*/
#define TIMES		3	/* * 				*/
#define LP		4	/* (				*/
#define RP		5	/* )				*/
#define NUM_OR_ID	6	/* Decimal Number or Identifier */
#define MINUS 7
#define DIV 8
#define ASSIGN 9
#define GR 10
#define LR 11
#define EQUAL 12
#define IF 13
#define THEN 14
#define WHILE 15
#define BEGIN 16
#define END 17
#define ENDIF 18
#define EOL 19
#define ENDWHILE 20
#define DO 21
extern char *yytext;		/* in lex.c			*/
extern int yyleng;
extern int yylineno;
extern FILE *fp,*fp1;
