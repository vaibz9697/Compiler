#include <stdio.h>
#include <ctype.h>
#include "lex.h"
#include "code_gen.h"
#include "name.h"
void statements()
{
    /*  statements -> expression SEMI  |  expression SEMI statements  */

    char *tempvar;
    static int count =1;
    while( !match(EOI) )
    {
        if(match(ASSIGN))
        {
            advance();
            tempvar= expression();
            fprintf(fp1,"    _%s = %s\n", ans, tempvar );
            advance();
            freename( tempvar );
        }
        else if(match(BEGIN))
        {
            fprintf(fp1,"Statement list begins here:\n");
            advance();
        }
        else if(match(END))
        {
            fprintf(fp1,"Statement list end here.\n");
            advance();
        }   
        else if(match(IF))
        {
            advance();
            tempvar = expression();
            if(match(THEN))
            {
                int loc=count+1;
                fprintf(fp1,"L%d: if not %s goto L%d:\n",count,tempvar,loc);
                count+=2;
                advance();
                statements();
                fprintf(fp1,"L%d:\n",loc);
                if(match(ENDIF))
                {
                    advance();
                }
                else
                    fprintf( stderr,"%d : 'endif' expected\n",yylineno);
            }
            else
                fprintf( stderr,"%d : 'Then' expected\n",yylineno);
            freename( tempvar );
        }
        else if(match(ENDIF))
            return;
        else if(match(WHILE))
        {
            advance();
            fprintf(fp1,"L%d:\n",count);
            int loc=count+1;
            tempvar = expression();
            if(match(DO))
            {
                fprintf(fp1,"if not %s goto L%d:\n",tempvar,loc);
                count+=2;
                advance();
                statements();
                fprintf(fp1,"JUMP L%d:\n",loc-1);
                if(match(ENDWHILE))
                {
                    advance();
                }
                else
                    fprintf( stderr,"%d : 'endif' expected\n",yylineno);
                fprintf(fp1,"L%d:\n",loc);
            }
            else
                fprintf( stderr,"%d : 'Then' expected\n",yylineno);
            freename( tempvar );
        }
        else if(match(ENDWHILE))
            return;
        else
        {
            // printf("%s\n", yyleng,yytext);
            // return;
            tempvar = expression();
            // break;
            if( match( SEMI ) )
                advance();
            else
                fprintf( stderr, "%d: Inserting missing semicolon\n", yylineno );
            freename( tempvar );
        }
    }
}

char    *expression()
{
    /* expression -> term expression'
     * expression' -> PLUS term expression' |  epsilon
     */

    char  *tempvar, *tempvar2;
    tempvar = term();
    while( match( PLUS ) || match(MINUS))
    {
        if(match(PLUS))
        {
            advance();
            tempvar2 = term();
            fprintf(fp1,"    %s += %s\n", tempvar, tempvar2 );
            freename( tempvar2 );
        }   
        else if(match(MINUS))
        {
            advance();
            tempvar2 = term();
            fprintf(fp1,"    %s -= %s\n", tempvar, tempvar2 );
            freename( tempvar2 );
        }
    }
    if(match(GR))
    {
        advance();
        tempvar2=expression();
        fprintf(fp1,"    %s = %s > %s\n", tempvar, tempvar , tempvar2 );
        freename( tempvar2 );
    }
    else if(match(LR))
    {
        advance();
        tempvar2=expression();
        fprintf(fp1,"    %s = %s < %s\n", tempvar, tempvar , tempvar2 );
        freename( tempvar2 );
    }
    else if(match(EQUAL))
    {
        advance();
        tempvar2=expression();
        fprintf(fp1,"    %s = %s == %s\n", tempvar, tempvar , tempvar2 );
        freename( tempvar2 );
    }
    return tempvar;
}

char    *term()
{
    char  *tempvar, *tempvar2 ;

    tempvar = factor();
    while( match( TIMES ) || match(DIV) )
    {
        if(match(TIMES))
        {
            advance();
            tempvar2 = factor();
            fprintf(fp1,"    %s *= %s\n", tempvar, tempvar2 );
            freename( tempvar2 );
        }
        else
        {
            advance();
            tempvar2 = factor();
            fprintf(fp1,"    %s /= %s\n", tempvar, tempvar2 );
            freename( tempvar2 );
        }
    }

    return tempvar;
}

char    *factor()
{
    char *tempvar;
    if( match(NUM_OR_ID) )
    {
    /* Print the assignment instruction. The %0.*s conversion is a form of
     * %X.Ys, where X is the field width and Y is the maximum number of
     * characters that will be printed (even if the string is longer). I'm
     * using the %0.*s to print the string because it's not \0 terminated.
     * The field has a default width of 0, but it will grow the size needed
     * to print the string. The ".*" tells printf() to take the maximum-
     * number-of-characters count from the next argument (yyleng).
     */
        int flag=0;
        int i=0;
        for(i=0;i<yyleng;i++)
        {
            if(*(yytext+i) > '9')
            {
                flag=1;
                break;
            }
        }
        if (flag)
            fprintf(fp1,"    %s = _%0.*s\n", tempvar = newname(), yyleng, yytext );
        else
            fprintf(fp1,"    %s = %0.*s\n", tempvar = newname(), yyleng, yytext );
        advance();
    }
    else if( match(LP) )
    {
        advance();
        tempvar = expression();
        if( match(RP) )
            advance();
        else
            fprintf(stderr, "%d: Mismatched parenthesis\n", yylineno );
    }
    else
    {
    if(match(ASSIGN))
        fprintf( stderr,"%d : lvalue required as left operand of assignment\n",yylineno);
    else
        fprintf( stderr, "%d: Number or identifier expected\n", yylineno );
    }
    return tempvar;
}
    