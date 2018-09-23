DIGIT [0-9]
NUMBER {DIGIT}+
TEXT [a-zA-Z]+
AlPHANUMERIC [a-zA-Z0-9]
FLOAT_ID {NUMBER}[.]{NUMBER}
KEYWORD "static"|"int"|"bool"|"float"|"if"|"else"|"while"|"for"
BOOLEAN_CONST "true"|"false"
DELIMITER [;{}]
WHITESPACE [;:\t\n]
COMMA [,]
ID [a-zA-Z]{AlPHANUMERIC}*
ARITHMETIC_OPERATOR "+"|"-"|"*"|"/"|"=""("|")"
RELATIONAL_OPERATOR "=="|">"|"<"|">="|"<="|"!="
LOGICAL_OPERATOR "&&"|"||"
FUNCTION {ID}+{WHITESPACE}*"("{WHITESPACE}*{{ID}+{COMMA}*{ID}+} {WHITESPACE}* ")"
CONSTRUCTOR {ID}+{WHITESPACE}*"="{WHITESPACE}*{ID}"("{WHITESPACE}*{{ID}+{COMMA}*{ID}+} {WHITESPACE}* ")"

JOB_CONSTRUCTOR ID{WHITESPACE}*"=" "Job" "(" "job_id "="NUMBER ",flops_required" "=" NUMBER ",deadline""="NUMBER ",mem_required""="NUMBER",affinity""=""["FLOAT_ID ","FLOAT_ID","FLOAT_ID","FLOAT_ID "]" )"
JOB_FUNCTION "job.get_memory()"

LINK_CONSTRUCTOR ID{WHITESPACE}*"=" "Link" "(" "start_point" "=" ID ",end_point" "=" ID {",bandwidth" "=" FLOAT_ID|FLOAT_ID } {",channel_capacity""="FLOAT_ID | FLOAT_ID} {| "name""=""""ID"""|""" ID """} ")"

MEMORY_CONSTRUCTOR ID{WHITESPACE}* "=" "Memory" "(" {"memory_type" "=" MEM_TYPE | MEM_TYPE} "," {"mem_size" "=" NUMBER | NUMBER} {|",name" "=" ID| ID } ")"
MEM_TYPE "primary"|"secondary"|"cache"

CLUSTOR_CONSTRUCTOR ID{WHITESPACE}* "=" "Cluster" "(" {"processors" "=" MUTABLE | MUTABLE } "," {"topology" "=" topology_type | topology_type} "," {"link_bandwidth" "=" FLOAT_ID | FLOAT_ID} "," {"link_capacity" "=" FLOAT_ID | FLOAT_ID} {|",name" "=" ID |"," ID} ")"
topology_type "star"|"bus"|"ring"

PROCESSOR_CONSTRUCTOR ID {WHITESPACE}*"=""Processor("{"isa="isavalue| isavalue } ","{ "clock_speed=" clock_speed_value | clock_speed_value} "," {"l1_memory="ID |ID } "," {|"l2_memory="ID|ID} "," {|"name="ID|ID}")"
isavalue "ARM"|"AMD"|"CDC"|"MIPS" 
clock_speed_value FLOAT_ID

PROCESSOR_FUNCTION ID".is_running();" | ID".get_clock_speed();" | ID".submit_job("ID");" | ID".submit_jobs(["MUTABLE"]);" |ID".run("MUTABLE");" |ID".discard_job("ID");" 
MUTABLE ID ","MUTABLE | ID
%%
{NUMBER}             { printf("<NUMCONST,%s>\n", yytext); }
{DELIMITER}          { printf("<DELIMITER,%s>\n", yytext); }
{KEYWORD}            { printf("<KEYWORD,%s>\n", yytext); }
{BOOLEAN_CONST}      { printf("<BOOLLEAN,%s>\n", yytext); }
{ID}                 { printf("<IDENTIFIER,%s>\n", yytext); }
{ARITHMETIC_OPERATOR}{ printf("<OPERATOR,%s>\n", yytext); }
{LOGICAL_OPERATOR}	 { printf("<OPERATOR,%s>\n", yytext); }	
{RELATIONAL_OPERATOR}{ printf("<OPERATOR,%s>\n", yytext); }
{FUNCTION} 		     { printf("<FUNCTION,%s>\n", yytext); }
{CONSTRUCTOR}		 { printf("<CONSTRUCTOR,%s>\n", yytext); }
%%
int main(int argc, char *argv[]) {
	yylex();
	return 0;
}