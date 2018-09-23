#include "lex.h"
#include "code_gen.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* yytext = ""; /* Lexeme (not '\0'
                      terminated)              */
int yyleng   = 0;  /* Lexeme length.           */
int yylineno = 0;  /* Input line number        */

int lex(void)
{
static char input_buffer[1024] ;
char *current;
current = yytext + yyleng; /* Skip current
                                 lexeme        */
while(1)
{       
    /* Get the next one         */
    while(!*current )
    {
        /* Get new lines, skipping any leading
        * white space on the line,
        * until a nonblank line is found.
        */
        current = input_buffer;
        // if( fp==0 ) printf("shite");
        // printf("A1\n");
        // if(!gets(input_buffer)){
        //    *current = '\0' ;
        //    printf("%c\n",*current);
        //    return EOI;
        //
        if( !fgets(input_buffer,100,fp))
        {
            *current = '\0' ;
            return EOI;
        }
        /*else
            printf("Input buffer:%s",input_buffer);*/
        // printf("A2\n");
        ++yylineno;
        while(isspace(*current))
            ++current;
    }
    for(; *current; ++current)
    {
         /* Get the next token */
        yytext = current;
        yyleng = 1;
        switch( *current )
        {
            case ';':
                return SEMI;
            case '+':
                return PLUS;
            case '-':
                return MINUS;
            case '*':
                return TIMES;
            case '/':
                return DIV;
            case '(':
                return LP;
            case ')':
                return RP;
            case '=':
                return EQUAL;
            case '>':
                return GR;
            case '<':
                return LR; 
            case '\r': 
            case '\n':
            case '\t':
            case ' ' :
                break;
            default:
                if(!isalnum(*current))
                    fprintf(stderr, "Not alphanumeric <%c>\n", *current);
                else
                {
                    int j=0;
                    char s[100];
                    while(isalnum(*current))
                    {  
                        s[j]=*current;
                        j++;
                        ++current;
                    }
                    s[j]='\0';
                    if(strcmp(s,"if")==0)
		                {
		                    yyleng = current - yytext;
		                    return IF;
		                }
                    if(strcmp(s,"while")==0)
                    {
                        yyleng = current - yytext;
		                    return WHILE;
                    }
                    if(strcmp(s,"do")==0)
                    {
                        yyleng = current - yytext;
                        return DO;
                    }
                    if(strcmp(s,"then")==0)
		                {
                        yyleng = current - yytext;
		                    return THEN;
                    }
                    if(strcmp(s,"begin")==0)
                    {
                        yyleng = current - yytext;
                        return BEGIN;
                    }
                    if(strcmp(s,"end")==0)
                    {
                        yyleng = current - yytext;
                        return END;
                    }
                    if(strcmp(s,"endif")==0)
                    {
                        yyleng = current - yytext;
                        return ENDIF;
                    }
                    if(strcmp(s,"endwhile")==0)
                    {
                        yyleng = current - yytext;
                        return ENDWHILE;
                    }

                yyleng = current - yytext;
                while(isspace(*current))
                    ++current;
                if(*current==':')
                {
                    strcpy(ans,s);
                    ++current;
		                ++current;
                    yyleng = current - yytext;
                    return ASSIGN ;
                }
                return NUM_OR_ID;
            }
            break;
          }
        }
    }
}


static int Lookahead = -1; /* Lookahead token  */

int match(int token){
   /* Return true if "token" matches the
      current lookahead symbol.                */

   if(Lookahead == -1)
{
      Lookahead = lex();}
	
   return token == Lookahead;
}

void advance(void){
/* Advance the lookahead to the next
   input symbol.                               */
    Lookahead = lex();

}
