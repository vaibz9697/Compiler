%{
#include "functions2.cpp"
#include "y.tab.h"
using namespace std;
extern "C" int yywrap() { }
int lineno = 1;
%}

%option yylineno
KEYWORD "static"|"wait"|"architecture_type"|"Embedded_CPU"|"int"|"bool"|"float"|"isa"|"processors"|"star"|"bus"|"ring"|"topology"|"link_bandwidth"|"link_capacity"|"name"|"job_id"|"flops_required"|"deadline"|"mem_required"|"affinity"|"memory_type"|"mem_size"|"primary"|"secondary"|"cache"|"start_point"|"end_point"|"bandwidth"|"channel_capacity"|"isa"|"ARM"|"AMD"|"CDC"|"MIPS"|"clock_speed"|"l1_memory"|"l2_memory"
CONSTRUCTOR "Processor"|"Link"|"Memory"|"Job"|"Cluster" 
IF "if" 
CONTINUE "continue"
ELSE "else"
WHILE "while"
FOR "for"
SWITCH "switch" 
CASE "case" 
DEFAULT "default"
RETURN "return"
PRINT "print"
BREAK "break"
READ "read"
DIGIT [0-9]
DQ ["]
NUM_ID {DIGIT}+
FLOAT_ID {NUM_ID}[.]{NUM_ID}
TEXT [a-zA-Z]+
AlPHANUMERIC [a-zA-Z0-9_]
BOOLEAN_CONST "true"|"false"
DELIMITER [;{},.']  |   "["  |  "]"   |  "("   | ")"|"\“"|"\”"|"\'"|"\‘"|"\’"|":"
WHITESPACE [\t\n]|" "
ID [a-zA-Z]{AlPHANUMERIC}*
ASSIGNMENT_ARITH 	"+="|"-="|"*="|"/="|"++"|"--"
ARITHMETIC "+"|"-"|"*"|"/"|"="
RELATIONAL "=="|">"|"<"|">="|"<="|"!="
LOGICAL "&&"  |   "||"  |   "!"  |  "&"  | "|"
SCOPE_SPECIFIER "static"
FUNCTION "get_memory"|"get_available_memory"|"is_running"|"is_part_cluster"|"get_job_list"|"submit_jobs"|"get_clock_speed"|"run"|"discard_job"|"High_Priority_Job_Submit"|
TYPE_SPECIFIER "int"|"bool"|"float"|"char"

%%
"if"                { yylval.Node = inserting_leaf_Node("IF", "if"); return IF; }
"else"              { yylval.Node = inserting_leaf_Node("ELSE", "else"); return ELSE; }
"while"             { yylval.Node = inserting_leaf_Node("WHILE", "while"); return WHILE; }
"for"       	    { yylval.Node = inserting_leaf_Node("FOR", "for");  return FOR; }
"switch"            { yylval.Node = inserting_leaf_Node("SWITCH", "switch"); return SWITCH; }
"case"              { yylval.Node = inserting_leaf_Node("CASE", "case"); return CASE; }
"default"           { yylval.Node = inserting_leaf_Node("DEFAULT", "default"); return DEFAULT; }
"break"          	 { yylval.Node = inserting_leaf_Node("BREAK", "break"); return BREAK; }
"continue"           { yylval.Node = inserting_leaf_Node("CONTINUE", "continue"); return CONTINUE; }
"return"       	    { yylval.Node = inserting_leaf_Node("RETURN", "return"); return RETURN; }
"wait"         		  { yylval.Node = inserting_leaf_Node("KEYWORD", "wait"); return WAIT; }

"dd"				{ yylval.Node = inserting_leaf_Node("CONSTRUCTOR", "processor");  return PROCESSOR; }
"processors"				{ yylval.Node = inserting_leaf_Node("Processor_Constructor", "processor");  return PROCESSORS; }
"Job"					{ yylval.Node = inserting_leaf_Node("CONSTRUCTOR", "Job");  return JOB; }
"Link"					{ yylval.Node = inserting_leaf_Node("CONSTRUCTOR", "Link");  return LINK; }
"Memory"				{ yylval.Node = inserting_leaf_Node("CONSTRUCTOR", "Memory");  return MEMORY; }
"Cluster"				{ yylval.Node = inserting_leaf_Node("CONSTRUCTOR", "Cluster");  return CLUSTER; }
"star"					{ yylval.Node = inserting_leaf_Node("KEYWORD", "star");  return STAR; }
"bus"					{ yylval.Node = inserting_leaf_Node("KEYWORD", "bus");  return BUS; }
"ring"					{ yylval.Node = inserting_leaf_Node("KEYWORD", "ring");  return RING; }
"topology"				{ yylval.Node = inserting_leaf_Node("KEYWORD", "topology");  return TOPOLOGY; }
"link_bandwidth"		{ yylval.Node = inserting_leaf_Node("KEYWORD", "link_bandwidth");  return LINK_BANDWIDTH; }
"link_capacity"			{ yylval.Node = inserting_leaf_Node("KEYWORD", "link_capacity");  return LINK_CAPACITY; }
"name"					{ yylval.Node = inserting_leaf_Node("KEYWORD", "name");  return NAME; }
"job_id"				{ yylval.Node = inserting_leaf_Node("KEYWORD", "job_id");  return JOB_ID; }
"flops_required"		{ yylval.Node = inserting_leaf_Node("KEYWORD", "flops_required");  return FLOPS_REQUIRED; }
"deadline"				{ yylval.Node = inserting_leaf_Node("KEYWORD", "deadline");  return DEADLINE; }
"mem_required"			{ yylval.Node = inserting_leaf_Node("KEYWORD", "mem_required");  return MEM_REQUIRED; }
"affinity"				{ yylval.Node = inserting_leaf_Node("KEYWORD", "affinity");  return AFFINITY; }
"memory_type"			{ yylval.Node = inserting_leaf_Node("KEYWORD", "memory_type");  return MEMORY_TYPE; }
"mem_size"				{ yylval.Node = inserting_leaf_Node("KEYWORD", "mem_size");  return MEM_SIZE; }
"primary"				{ yylval.Node = inserting_leaf_Node("KEYWORD", "primary");  return PRIMARY; }
"secondary"				{ yylval.Node = inserting_leaf_Node("KEYWORD", "secondary");  return SECONDARY; }
"cache"					{ yylval.Node = inserting_leaf_Node("KEYWORD", "cache");  return CACHE; }
"start_point"			{ yylval.Node = inserting_leaf_Node("KEYWORD", "start_point");  return START_POINT; }
"end_point"				{ yylval.Node = inserting_leaf_Node("KEYWORD", "end_point");  return END_POINT; }
"bandwidth"				{ yylval.Node = inserting_leaf_Node("KEYWORD", "bandwidth");  return BANDWIDTH; }
"channel_capacity"		{ yylval.Node = inserting_leaf_Node("KEYWORD", "channel_capacity");  return CHANNEL_CAPACITY; }
"isa"					{ yylval.Node = inserting_leaf_Node("KEYWORD", "isa");  return ISA; }
"ARM"					{ yylval.Node = inserting_leaf_Node("KEYWORD", "ARM");  return ARM; }
"AMD"					{ yylval.Node = inserting_leaf_Node("KEYWORD", "AMD");  return AMD; }
"CDC"					{ yylval.Node = inserting_leaf_Node("KEYWORD", "CDC");  return CDC; }
"MIPS"					{ yylval.Node = inserting_leaf_Node("KEYWORD", "MIPS");  return MIPS; }
"clock_speed"			{ yylval.Node = inserting_leaf_Node("KEYWORD", "clock_speed");  return CLOCK_SPEED; }
"l1_memory"				{ yylval.Node = inserting_leaf_Node("KEYWORD", "l1_memory");  return L1_MEMORY; }
"l2_memory"				{ yylval.Node = inserting_leaf_Node("KEYWORD", "l2_memory");  return L2_MEMORY; }
"get_memory"			{ yylval.Node = inserting_leaf_Node("FUNCTION", "get_memory");  return GET_MEMORY; }
"get_available_memory"	{ yylval.Node = inserting_leaf_Node("FUNCTION", "get_available_memory");  return GET_AVAILABLE_MEMORY; }
"is_running"			{ yylval.Node = inserting_leaf_Node("FUNCTION", "is_running");  return IS_RUNNING; }
"submit_jobs"			{ yylval.Node = inserting_leaf_Node("FUNCTION", "submit_jobs");  return SUBMIT_JOBS; }
"get_clock_speed"		{ yylval.Node = inserting_leaf_Node("FUNCTION", "get_clock_speed");  return GET_CLOCK_SPEED; }
"run"					{ yylval.Node = inserting_leaf_Node("FUNCTION", "run");  return RUN; }
"discard_job"			{ yylval.Node = inserting_leaf_Node("FUNCTION", "discard_job");  return DISCARD_JOB; }
"scheduler" 			{ yylval.Node = inserting_leaf_Node("CONSTRUCTOR", "SCHEDULER");  return SCHEDULER; }
"first_come_first_serve" { yylval.Node = inserting_leaf_Node("FUNCTION", "first_come_first_serve");  return FIRST_COME_FIRST_SERVE; }
"shortest_job_next" { yylval.Node = inserting_leaf_Node("FUNCTION", "shortest_job_next");  return SHORTEST_JOB_NEXT; }
"priority_scheduling" { yylval.Node = inserting_leaf_Node("FUNCTION", "priority_scheduling");  return PRIORITY_SCHEDULING; }
"shortest_remaining_time" { yylval.Node = inserting_leaf_Node("FUNCTION", "shortest_remaining_time");  return SHORTEST_REMAINING_TIME; }
"round_robin" { yylval.Node = inserting_leaf_Node("FUNCTION", "round_robin");  return ROUND_ROBIN; }
"multi_level_queues"  { yylval.Node = inserting_leaf_Node("FUNCTION", "multi_level_queues");  return MULTI_LEVEL_QUEUES; }
"schedule_object" { yylval.Node = inserting_leaf_Node("FUNCTION", "schedule_object");  return SCHEDULE_OBJECT; }

{NUM_ID}            { yylval.Node = inserting_leaf_Node("NUMBER", string(yytext)); return NUM_ID; }
{ID}		        { yylval.Node = inserting_leaf_Node("IDENTIFIER", string(yytext));  return ID; }
{FLOAT_ID}			{ yylval.Node = inserting_leaf_Node("FLOAT", string(yytext));  return FLOAT_ID; }



","					{ yylval.Node = inserting_leaf_Node("DELIMITER", ",");  return COMMA; }
"'"					{ yylval.Node = inserting_leaf_Node("DELIMITER", "/'");  return SQ; }
{DQ}				{ yylval.Node = inserting_leaf_Node("DQ", "DQ");  return DQ; }
";"                 { yylval.Node = inserting_leaf_Node("DELIMITER", ";");  return SEMI; }
":"                 { yylval.Node = inserting_leaf_Node("DELIMITER", ":");  return COLON; }
"{"                 { yylval.Node = inserting_leaf_Node("DELIMITER", "{"); return LB; }
"}"                 { yylval.Node = inserting_leaf_Node("DELIMITER", "}"); return RB; }
"("                 { yylval.Node = inserting_leaf_Node("DELIMITER", "(");  return LP; }
")"                 { yylval.Node = inserting_leaf_Node("DELIMITER", ")");  return RP; }
"["                 { yylval.Node = inserting_leaf_Node("DELIMITER", "["); return LS; }
"]"                 { yylval.Node = inserting_leaf_Node("DELIMITER", "]"); return RS; }
"."					{ yylval.Node = inserting_leaf_Node("DELIMITER", "]");  return DOT; }

"+="                 { yylval.Node = inserting_leaf_Node("ASSIGNMENT_ARITH", "+=");  return PLUS_EQUAL; }
"-="                 { yylval.Node = inserting_leaf_Node("ASSIGNMENT_ARITH", "-=");  return MINUS_EQUAL; }
"*="                 { yylval.Node = inserting_leaf_Node("ASSIGNMENT_ARITH", "/=");  return MUL_EQUAL; }
"/="                 { yylval.Node = inserting_leaf_Node("ASSIGNMENT_ARITH", "*=");  return DIV_EQUAL; }
"++"                 { yylval.Node = inserting_leaf_Node("ASSIGNMENT_ARITH", "++");  return PLUS_PLUS; }
"--"                 { yylval.Node = inserting_leaf_Node("ASSIGNMENT_ARITH", "--");  return MINUS_MINUS; }

"+"                 { yylval.Node = inserting_leaf_Node("ARITHMETIC", "+");  return PLUS; }
"-"                 { yylval.Node = inserting_leaf_Node("ARITHMETIC", "-");  return MINUS; }
"/"                 { yylval.Node = inserting_leaf_Node("ARITHMETIC", "/");  return DIV; }
"*"                 { yylval.Node = inserting_leaf_Node("ARITHMETIC", "*");  return MUL; }
"="	                { yylval.Node = inserting_leaf_Node("ARITHMETIC", "=");  return EQUAL; }

">="                 { yylval.Node = inserting_leaf_Node("RELATIONAL", ">="); return GR_EQUAL; }
"<="                 { yylval.Node = inserting_leaf_Node("RELATIONAL", "<="); return LR_EQUAL; }
"=="	             { yylval.Node = inserting_leaf_Node("RELATIONAL", "==");  return EQUAL_EQUAL; }
"&&"                 { yylval.Node = inserting_leaf_Node("LOGICAL", "&&"); return AND_AND; }
"||"                 { yylval.Node = inserting_leaf_Node("LOGICAL", "||"); return OR_OR; }
"!="                 { yylval.Node = inserting_leaf_Node("LOGICAL", "!="); return NOT_EQUAL; }

">"                 { yylval.Node = inserting_leaf_Node("RELATIONAL", ">"); return GR; }
"<"                 { yylval.Node = inserting_leaf_Node("RELATIONAL", "<"); return LR; }
"&"                 { yylval.Node = inserting_leaf_Node("LOGICAL", "&"); return AND; }
"|"                 { yylval.Node = inserting_leaf_Node("LOGICAL", "|"); return OR; }
"!"                 { yylval.Node = inserting_leaf_Node("LOGICAL", "!"); return NOT; }
[\n]                {yylineno++; lineno++;}
%%