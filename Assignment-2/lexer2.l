KEYWORD "static"|"wait"|"architecture_type"|"Embedded_CPU"|"int"|"bool"|"float"|"if"|"else"|"while"|"for"|"isa"|"processors"|"star"|"bus"|"ring"|"topology"|"link_bandwidth"|"link_capacity"|"name"|"job_id"|"flops_required"|"deadline"|"mem_required"|"affinity"|"memory_type"|"mem_size"|"primary"|"secondary"|"cache"|"start_point"|"end_point"|"bandwidth"|"channel_capacity"|"isa"|"ARM"|"AMD"|"CDC"|"MIPS"|"clock_speed"|"l1_memory"|"l2_memory"
CONSTRUCTOR "Processor"|"Link"|"Memory"|"Job"|"Cluster"
DIGIT [0-9]
FLOAT_ID {DIGIT}+.{DIGIT}+
NUMBER {DIGIT}+
TEXT [a-zA-Z]+
AlPHANUMERIC [a-zA-Z0-9_]
FUNCTION "get_memory"|"get_available_memory"|"is_running"|"submit_jobs"|"get_clock_speed"|"run"|"discard_job"
BOOLEAN_CONST "true"|"false"
DELIMITER [;{},.']|"["|"]"|"("|")"|"\“"|"\”"|"\'"|"\‘"|"\’"|":"
WHITESPACE [\t\n]|" "
ID [a-zA-Z]{AlPHANUMERIC}*
ARITHMETIC "+"|"-"|"*"|"/"|"="
RELATIONAL "=="|">"|"<"|">="|"<="|"!="
LOGICAL "&&"|"||"|"!"
%%
{KEYWORD}            { printf("<KEYWORD,%s>\n", yytext); }
{FLOAT_ID}			 { printf("<FLOAT_NUMBER,%s>\n", yytext); }
{NUMBER}             { printf("<NUMCONST,%s>\n", yytext); }
{DELIMITER}          { printf("<DELIMITER,%s>\n", yytext); }
{BOOLEAN_CONST}      { printf("<BOOLLEAN,%s>\n", yytext); }
{CONSTRUCTOR}		 { printf("<CONSTRUCTOR,%s>\n", yytext); }
{FUNCTION} 		     { printf("<FUNCTION,%s>\n", yytext); }
{ID}                 { printf("<IDENTIFIER,%s>\n", yytext); }
{ARITHMETIC}		{ printf("<OPERATOR,%s>\n", yytext); }
{LOGICAL}	 		{ printf("<OPERATOR,%s>\n", yytext); }	
{RELATIONAL}		{ printf("<OPERATOR,%s>\n", yytext); }
%%
int main(int argc, char *argv[]) {
	yylex();
	return 0;
}