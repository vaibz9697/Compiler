#include "code_gen.h"
#include "lex.h"
FILE *fp1,*fp;
int main ()
{
	fp = fopen("new.txt","r+");
	fp1 = fopen("Output.txt","w+");
	statements ();
	fclose(fp1);
	fclose(fp);
return 0;
}
