%{
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
%}

%union{
	node * Node;
}

%token <Node>   MINUS PLUS MUL DIV PLUS_EQUAL MINUS_EQUAL MUL_EQUAL DIV_EQUAL PLUS_PLUS MINUS_MINUS EQUAL
%token <Node>   IF ELSE WHILE SWITCH CASE FOR DEFAULT
%token <Node>   FLOAT_ID NUM_ID ID
%token <Node>   BREAK CONTINUE RETURN WAIT
%token <Node>   GR LR EQUAL_EQUAL LR_EQUAL GR_EQUAL NOT_EQUAL AND_AND AND OR_OR OR NOT
%token <Node>   SEMI LP RP LB RB LS RS COMMA COLON NAME DOT DQ SQ

%token <Node>	PROCESSOR ISA CLOCK_SPEED L1_MEMORY L2_MEMORY ARM AMD CDC MIPS IS_RUNNING SUBMIT_JOBS GET_CLOCK_SPEED RUN DISCARD_JOB
%token <Node>   CLUSTER PROCESSORS TOPOLOGY STAR BUS RING LINK_BANDWIDTH LINK_CAPACITY
%token <Node>	MEMORY MEMORY_TYPE MEM_SIZE PRIMARY SECONDARY CACHE GET_AVAILABLE_MEMORY
%token <Node>	LINK START_POINT END_POINT BANDWIDTH CHANNEL_CAPACITY
%token <Node>   JOB JOB_ID FLOPS_REQUIRED DEADLINE MEM_REQUIRED AFFINITY GET_MEMORY
%token <Node>   SCHEDULER FIRST_COME_FIRST_SERVE SHORTEST_JOB_NEXT PRIORITY_SCHEDULING SHORTEST_REMAINING_TIME ROUND_ROBIN MULTI_LEVEL_QUEUES SCHEDULE_OBJECT
%start   program

%type <Node> program statement expression term expression_prime term_prime factor epsilon mutable condition_statement new_condition cases loop_statement while_body for_body list_assignment next_assignment op construct function_call name_optional name_value process_construct process_definition parameters_process_def memory_optional_l2 isa_value clock_value l1_value process_call param_process_submit_discard_jobs lists param_runprocess link_construct link_definition parameters_link_def start_pointnt start_value end_pointnt end_value bandwidthnt bandwidth_value channel_capacitynt channel_capacity_value job_construct job_definition parameters_job_def job_id_value flops_required_value deadline_value mem_required_value affinity_value amd_value cdc_value mips_value dec_value job_call memory_construct memory_definition parameters_memory_def memory_typent mem_sizent mem_value mem_size_value memory_call cluster_construct parameters_cluster_def processorsnt topologynt param1_value topology_value link_bandwidth_value link_capicity_value assignment scheduler_construct
scheduler_call
%%



program : statement
{
	 $$ = insert_Node("program",$1);

	if(flag==0)
	{
		printf("Compilation successful.\n");

		ofstream output;
		output.open("tree.txt");
		print_nodes($$,output);
		output.close();
	}
	else
	{
		printf("Syntax errors found.\n");
	}

}

statement :   expression SEMI {	 $$ = insert_Node("statement",$1);	}

			| expression SEMI statement {	$$ = insert_Node("statement",$1, $2, $3);	}

			| assignment SEMI {	$$ = insert_Node("statement",$1, $2);	}
			| assignment SEMI statement {	$$ = insert_Node("statement",$1, $2, $3);	}
			
			| SEMI {	$$ = insert_Node("statement",$1);	}
			| SEMI statement {	$$ = insert_Node("statement",$1, $2);	}

			| loop_statement statement {	$$ = insert_Node("statement",$1, $2);	}
			| loop_statement {	$$ = insert_Node("statement",$1);	}

			| BREAK SEMI statement {	$$ = insert_Node("statement",$1, $2, $3);	}
			| BREAK SEMI {	$$ = insert_Node("statement",$1, $2);	}

			| CONTINUE SEMI statement {	$$ = insert_Node("statement",$1, $2, $3);	}
			| CONTINUE SEMI {	$$ = insert_Node("statement",$1, $2);	}

			| RETURN SEMI statement {	$$ = insert_Node("statement",$1, $2, $3);	}
			| RETURN SEMI {	$$ = insert_Node("statement",$1, $2);	}

			| WAIT SEMI statement {	$$ = insert_Node("statement",$1, $2, $3);	}
			| WAIT SEMI {	$$ = insert_Node("statement",$1, $2);	}

			| condition_statement statement {	$$ = insert_Node("statement",$1, $2);	}
			| condition_statement {	$$ = insert_Node("statement",$1);	}
			
			| SWITCH LB expression RB LP cases RP {	$$ = insert_Node("statement",$1, $2, $3, $4, $5, $6, $7);	}
			| SWITCH LB expression RB LP cases RP statement {	$$ = insert_Node("statement",$1, $2, $3, $4, $5, $6 ,$7, $8);	}

			| construct SEMI statement {	$$ = insert_Node("statement",$1, $2, $3);	}
			| construct SEMI {	$$ = insert_Node("statement",$1, $2);	}
			;
expression 	: term expression_prime {	$$ = insert_Node("expression",$1, $2);	}
			| term expression_prime op expression {	$$ = insert_Node("expression", $1, $2, $3, $4);	}
			| NOT expression {	$$ = insert_Node("expression",$1, $2);	}
			| function_call op expression {	$$ = insert_Node("expression",$1, $2, $3);	} 
			| function_call {	$$ = insert_Node("expression",$1);	} 
			;
expression_prime	: PLUS term expression_prime {	$$ = insert_Node("expression_prime", $1, $2, $3);	} 
					| MINUS term expression_prime {	$$ = insert_Node("expression_prime", $1, $2, $3);	}
					| epsilon {	$$ = insert_Node("expression_prime", $1);	}
					;
term    	: factor term_prime {	$$ = insert_Node("term", $1, $2);	}
			;
term_prime   		: MUL factor term_prime {	$$ = insert_Node("term_prime", $1, $2, $3);	}
					| DIV factor term_prime {	$$ = insert_Node("term_prime", $1, $2, $3);	}
					| epsilon {	$$ = insert_Node("term_prime", $1);	}
					;	 
factor 		: FLOAT_ID {			$$ = insert_Node("bandwidth_value", $1);
									$$->type = FLOAT;
									$$->val = $1->val;
									$$->code = "li $a0,"+to_string($1->val)+"\n";
					}
			| NUM_ID 
			{	
				$$ = insert_Node("factor", $1);	
				$$->type = INT;
				$$->val = $1->val;
				$$->code = "li $a0,"+to_string($1->val)+"\n";
			}
			| mutable {	$$ = insert_Node("factor", $1);	}
			| LP expression RP {	$$ = insert_Node("factor", $1, $2, $3);	}
			; 
assignment          : mutable EQUAL expression {	$$ = insert_Node("assignment", $1, $2, $3);	}
					| mutable PLUS_EQUAL expression {	$$ = insert_Node("assignment", $1, $2, $3);	}
					| mutable MINUS_EQUAL expression {	$$ = insert_Node("assignment", $1, $2, $3);	}
					| mutable MUL_EQUAL expression {	$$ = insert_Node("assignment", $1, $2, $3);	}
					| mutable DIV_EQUAL expression {	$$ = insert_Node("assignment", $1, $2, $3);	}
					| mutable PLUS_PLUS {	$$ = insert_Node("assignment", $1, $2);	}
					| mutable MINUS_MINUS {	$$ = insert_Node("assignment", $1, $2);	}
					| PLUS_PLUS mutable {	$$ = insert_Node("assignment", $1, $2);	}
					| MINUS_MINUS mutable {	$$ = insert_Node("assignment", $1, $2);	}
					;
mutable				: ID {
 						   	$$ = add_node("constant" ,$1);
    						$$->type = CHAR;
    						$$->val = $1->val;
    						$$->code = "li $a0,"+to_string($1->val)+"\n";
						}
					| mutable LS expression RS {	$$ = insert_Node("mutable", $1, $2, $3);	}
					;
epsilon				: {	$$ = NULL;	}
					;
condition_statement : IF LP expression RP LB statement RB new_condition {	$$ = insert_Node("condition_statement", $1, $2, $3, $4, $5, $6, $7, $8);	}
					;
new_condition		: ELSE IF LP expression RP LB statement RB new_condition {	$$ = insert_Node("new_condition", $1, $2, $3, $4, $5, $6, $7, $8, $9);	}
					| ELSE LB statement RB {	$$ = insert_Node("new_condition", $1, $2, $3, $4);	}
					| epsilon {	$$ = insert_Node("new_condition", $1);	}
					;
cases 				: CASE NUM_ID COLON statement cases {	$$ = insert_Node("cases", $1, $2, $3, $4, $5);	} 
					| DEFAULT COLON statement {	$$ = insert_Node("cases", $1, $2, $3);	}
					| epsilon {	$$ = insert_Node("cases", $1);	}
					;
loop_statement     	: while_body {	$$ = insert_Node("loop_statement", $1);	}
					| for_body {	$$ = insert_Node("loop_statement", $1);	}
					;
while_body			: WHILE LP expression RP LB statement RB {	$$ = insert_Node("while_body", $1, $2, $3, $4, $5, $6, $7);	}
					;
for_body 			: FOR LP list_assignment SEMI expression SEMI list_assignment RP LB statement RB {	$$ = insert_Node("for_body", $1, $2, $3, $4, $5, $6, $7, $8, $9, $10, $11);	}
					;
list_assignment		: assignment next_assignment {	$$ = insert_Node("list_assignment", $1, $2);	}
					;
next_assignment 	: COMMA assignment next_assignment {	$$ = insert_Node("next_assignment", $1, $2, $3);	}
					| epsilon  {	$$ = insert_Node("next_assignment", $1);	}
					;
op		 			: GR {	$$ = insert_Node("op", $1);	}
					| LR {	$$ = insert_Node("op", $1);	}
					| EQUAL_EQUAL {	$$ = insert_Node("op", $1);	}
					| LR_EQUAL {	$$ = insert_Node("op", $1);	}
					| GR_EQUAL {	$$ = insert_Node("op", $1);	}
					| NOT_EQUAL {	$$ = insert_Node("op", $1);	}
					| AND_AND {	$$ = insert_Node("op", $1);	}
					| AND {	$$ = insert_Node("op", $1);	}
					| OR_OR {	$$ = insert_Node("op", $1);	}
					| OR {	$$ = insert_Node("op", $1);	}
					;

construct 			: process_construct  {	$$ = insert_Node("construct", $1);	}
					| job_construct {	$$ = insert_Node("construct", $1);	}
					| memory_construct {	$$ = insert_Node("construct", $1);	}
					| link_construct {	$$ = insert_Node("construct", $1);	}
					| cluster_construct {	$$ = insert_Node("construct", $1);	}
					|scheduler_construct {	$$ = insert_Node("construct", $1);	}
					;
scheduler_construct	: mutable EQUAL SCHEDULER LP PROCESSOR  EQUAL DQ mutable DQ RP {	$$ = insert_Node("scheduler_construct", $1, $2, $3, $4, $5, $6, $7, $8, $9, $10 );	}
					 ;
function_call		: process_call {	$$ = insert_Node("function_call", $1);	}
					| job_call {	$$ = insert_Node("function_call", $1);	}
					| memory_call {	$$ = insert_Node("function_call", $1);	}
					|scheduler_call {	$$ = insert_Node("function_call", $1);	}
					;
scheduler_call		: mutable DOT FIRST_COME_FIRST_SERVE LP RP {	$$ = insert_Node("scheduler_call", $1, $2, $3, $4, $5 );	}
					 | mutable DOT SHORTEST_JOB_NEXT LP RP{	$$ = insert_Node("scheduler_call", $1, $2, $3, $4, $5);	}
					 | mutable DOT PRIORITY_SCHEDULING LP RP{	$$ = insert_Node("scheduler_call", $1, $2, $3, $4, $5);	}
					 | mutable DOT SHORTEST_REMAINING_TIME LP RP{	$$ = insert_Node("scheduler_call", $1, $2, $3, $4, $5);	}
					 | mutable DOT ROUND_ROBIN LP RP{	$$ = insert_Node("scheduler_call", $1, $2, $3, $4, $5);	}
					 | mutable DOT MULTI_LEVEL_QUEUES LP RP{	$$ = insert_Node("scheduler_call", $1, $2, $3, $4, $5);	}
					 | mutable DOT SCHEDULE_OBJECT LP mutable RP{	$$ = insert_Node("scheduler_call", $1, $2, $3, $4, $5 , $6);	}
					 ;
name_optional 		: COMMA NAME EQUAL DQ name_value DQ {	$$ = insert_Node("name_optional", $1, $2, $3, $4, $5, $6);	}
					|  COMMA DQ name_value DQ {	$$ = insert_Node("name_optional", $1, $2, $3, $4);	}
					| epsilon {	$$ = insert_Node("name_optional", $1);	}
					;
name_value			: mutable {	$$ = insert_Node("name_value", $1);	}
					;
process_construct		: mutable EQUAL process_definition {	$$ = insert_Node("process_construct", $1, $2, $3);	}
						;
process_definition		: PROCESSOR LP parameters_process_def RP {	$$ = insert_Node("process_definition", $1, $2, $3, $4);	}
						;
parameters_process_def	: ISA EQUAL SQ isa_value SQ COMMA CLOCK_SPEED COLON clock_value COMMA L1_MEMORY EQUAL l1_value memory_optional_l2 {	$$ = insert_Node("parameters_process_def", $1, $2, $3, $4, $5, $6, $7, $8, $9, $10, $11, $12, $13, $14);	}
						;
memory_optional_l2		: COMMA L2_MEMORY EQUAL l1_value name_optional {	$$ = insert_Node("memory_optional_l2", $1, $2, $3, $4, $5);	}
						| name_optional {	$$ = insert_Node("memory_optional_l2", $1);	}
						;
isa_value				: ARM {	$$ = insert_Node("isa_value", $1);	}
						| AMD {	$$ = insert_Node("isa_value", $1);	}
						| CDC {	$$ = insert_Node("isa_value", $1);	}
						| MIPS {	$$ = insert_Node("isa_value", $1);	}
						;
clock_value				: NUM_ID {	
									$$ = insert_Node("clock_value", $1);	
									$$->type = INT;
									$$->val = $1->val;
									$$->code = "li $a0,"+to_string($1->val)+"\n";
								}
						;
l1_value				: mutable {	$$ = insert_Node("l1_value", $1);	}
						| memory_definition {	$$ = insert_Node("l1_value", $1);	}
						;
process_call		    : mutable DOT IS_RUNNING LP RP {	$$ = insert_Node("process_call", $1, $2, $3, $4, $5);	}
						| mutable DOT SUBMIT_JOBS LP param_process_submit_discard_jobs RP {	$$ = insert_Node("process_call", $1, $2, $3, $4, $5, $6);	}
						| mutable DOT GET_CLOCK_SPEED LP RP {	$$ = insert_Node("process_call", $1, $2, $3, $4, $5);	}
						| RUN LP param_runprocess RP {	$$ = insert_Node("process_call", $1, $2, $3, $4);	}
						| mutable DOT DISCARD_JOB LP param_process_submit_discard_jobs RP {	$$ = insert_Node("process_call", $1, $2, $3, $4, $5, $6);	}
						;
param_process_submit_discard_jobs : mutable  {	$$ = insert_Node("param_process_submit_discard_jobs", $1);	}
						| LS lists RS {	$$ = insert_Node("param_process_submit_discard_jobs", $1, $2, $3);	}
						;
param_runprocess		: mutable {	$$ = insert_Node("param_runprocess", $1);	}
						| LS lists RS {	$$ = insert_Node("param_runprocess", $1, $2, $3);	}
						;
lists					: mutable COMMA lists {	$$ = insert_Node("lists", $1, $2, $3);	}
						| mutable {	$$ = insert_Node("lists", $1);	}
						;

link_construct		: mutable EQUAL link_definition {	$$ = insert_Node("link_construct", $1, $2, $3);	}
					;
link_definition		: LINK LP parameters_link_def RP {	$$ = insert_Node("link_definition", $1, $2, $3, $4);	}
					;
parameters_link_def : start_pointnt COMMA end_pointnt COMMA bandwidthnt COMMA channel_capacitynt name_optional {	$$ = insert_Node("parameters_link_def", $1, $2, $3, $4, $5, $6, $7, $8);	}
					;
start_pointnt 		: DQ start_value DQ {	$$ = insert_Node("start_pointnt", $1, $2, $3);	}
					|  START_POINT EQUAL DQ start_value DQ {	$$ = insert_Node("start_pointnt", $1, $2, $3, $4, $5);	}
					;
start_value 		: ID {
					    $$ = add_node("constant" ,$1);
					    $$->type = CHAR;
					    $$->val = $1->val;
					    $$->code = "li $a0,"+to_string($1->val)+"\n";
					}
					;
end_pointnt 		: DQ end_value DQ {	$$ = insert_Node("end_pointnt", $1, $2, $3);	}
					| END_POINT EQUAL DQ end_value DQ {	$$ = insert_Node("end_pointnt", $1, $2, $3, $4, $5);	}
					;
end_value 			: ID {
					    $$ = add_node("constant" ,$1);
					    $$->type = CHAR;
					    $$->val = $1->val;
					    $$->code = "li $a0,"+to_string($1->val)+"\n";
					}
					; 
bandwidthnt 		: bandwidth_value {	$$ = insert_Node("bandwidthnt", $1);	}
					| BANDWIDTH EQUAL bandwidth_value {	$$ = insert_Node("bandwidthnt", $1, $2, $3);	}
					;
bandwidth_value 	: NUM_ID{	
									$$ = insert_Node("bandwidth_value", $1);	
									$$->type = INT;
									$$->val = $1->val;
									$$->code = "li $a0,"+to_string($1->val)+"\n";
							}
					| FLOAT_ID 
					{				$$ = insert_Node("bandwidth_value", $1);
									$$->type = FLOAT;
									$$->val = $1->val;
									$$->code = "li $a0,"+to_string($1->val)+"\n";
					}
					; 
channel_capacitynt 	: channel_capacity_value {	$$ = insert_Node("channel_capacitynt", $1);	}
					| CHANNEL_CAPACITY EQUAL channel_capacity_value {	$$ = insert_Node("channel_capacitynt", $1, $2, $3);	}
					;
channel_capacity_value 	: FLOAT_ID {
									$$ = insert_Node("bandwidth_value", $1);
									$$->type = FLOAT;
									$$->val = $1->val;
									$$->code = "li $a0,"+to_string($1->val)+"\n";
									}
						| NUM_ID{	
									$$ = insert_Node("channel_capacity_value", $1);	
									$$->type = INT;
									$$->val = $1->val;
									$$->code = "li $a0,"+to_string($1->val)+"\n";
								}
					;

cluster_construct		: mutable EQUAL CLUSTER  LP parameters_cluster_def RP {	$$ = insert_Node("cluster_construct", $1, $2, $3, $4, $5, $6);	}
						;						
parameters_cluster_def	: processorsnt COMMA topologynt COMMA link_bandwidth_value COMMA link_capicity_value name_optional {	$$ = insert_Node("cluster_construct", $1, $2, $3, $4, $5, $6, $7, $8);	}	
						;
processorsnt			: PROCESSORS EQUAL param1_value {	$$ = insert_Node("processorsnt", $1, $2, $3);	}
						| param1_value  {	$$ = insert_Node("processorsnt", $1);	} 
						;
topologynt				: TOPOLOGY EQUAL DQ topology_value DQ {	$$ = insert_Node("topologynt", $1, $2, $3, $4, $5);	}
						| DQ topology_value DQ {	$$ = insert_Node("topologynt", $1, $2, $3);	}
						;	
param1_value		 	: mutable {	$$ = insert_Node("param1_value", $1);	}
						| LS lists RS {	$$ = insert_Node("param1_value", $1, $2, $3);	}
						; 
topology_value			: STAR {	$$ = insert_Node("topology_value", $1);	}
						| BUS {	$$ = insert_Node("topology_value", $1);	}
						| RING {	$$ = insert_Node("topology_value", $1);	}
link_bandwidth_value	: expression {	$$ = insert_Node("link_bandwidth_value", $1);	}
link_capicity_value		: expression {	$$ = insert_Node("link_capicity_value", $1);	}
job_construct		: mutable EQUAL job_definition {	$$ = insert_Node("job_construct", $1, $2, $3);	}
					;
job_definition		: JOB LP parameters_job_def RP {	$$ = insert_Node("job_definition", $1, $2, $3, $4);	}
					;
parameters_job_def	: JOB_ID EQUAL job_id_value COMMA FLOPS_REQUIRED EQUAL flops_required_value COMMA DEADLINE EQUAL deadline_value COMMA MEM_REQUIRED EQUAL mem_required_value COMMA AFFINITY EQUAL affinity_value  {	$$ = insert_Node("parameters_job_def", $1, $2, $3, $4, $5, $6, $7, $8, $9, $10, $11, $12, $13, $14, $15, $16, $17, $18, $19);	}
					;
job_id_value		:expression  {	$$ = insert_Node("job_id_value", $1);	}
					;
flops_required_value	:NUM_ID {	
									$$ = insert_Node("flops_required_value", $1);	
									$$->type = INT;
									$$->val = $1->val;
									$$->code = "li $a0,"+to_string($1->val)+"\n";
							}
						;
deadline_value		:expression {	$$ = insert_Node("deadline_value", $1);	}
					; 
mem_required_value	:NUM_ID {	
									$$ = insert_Node("mem_required_value", $1);	
									$$->type = INT;
									$$->val = $1->val;
									$$->code = "li $a0,"+to_string($1->val)+"\n";
							}
					;
affinity_value		: LS amd_value COMMA cdc_value COMMA mips_value COMMA dec_value RS  {	$$ = insert_Node("parameters_link_def", $1, $2, $3, $4, $5, $6, $7, $8, $9);	}
					;
amd_value		: FLOAT_ID {				
									$$ = insert_Node("bandwidth_value", $1);
									$$->type = FLOAT;
									$$->val = $1->val;
									$$->code = "li $a0,"+to_string($1->val)+"\n";
							}
				| NUM_ID{	
									$$ = insert_Node("amd_value", $1);	
					    			$$->type = INT;
					    			$$->val = $1->val;
					    			$$->code = "li $a0,"+to_string($1->val)+"\n";
							}
				;
cdc_value		: FLOAT_ID {
									$$ = insert_Node("bandwidth_value", $1);
									$$->type = FLOAT;
									$$->val = $1->val;
									$$->code = "li $a0,"+to_string($1->val)+"\n";
					}
				| NUM_ID{	
									$$ = insert_Node("cdc_value", $1);	
					    			$$->type = INT;
					    			$$->val = $1->val;
					    			$$->code = "li $a0,"+to_string($1->val)+"\n";
							}
				;
mips_value		: FLOAT_ID {				$$ = insert_Node("bandwidth_value", $1);
									$$->type = FLOAT;
									$$->val = $1->val;
									$$->code = "li $a0,"+to_string($1->val)+"\n";
					}
				| NUM_ID{	
									$$ = insert_Node("mips_value", $1);	
					    			$$->type = INT;
					    			$$->val = $1->val;
					    			$$->code = "li $a0,"+to_string($1->val)+"\n";
							}
				;
dec_value		: FLOAT_ID {		$$ = insert_Node("bandwidth_value", $1);
									$$->type = FLOAT;
									$$->val = $1->val;
									$$->code = "li $a0,"+to_string($1->val)+"\n";
					}
				| NUM_ID{	
									$$ = insert_Node("dec_value", $1);	
					    			$$->type = INT;
					    			$$->val = $1->val;
					    			$$->code = "li $a0,"+to_string($1->val)+"\n";
							}
				;
job_call		:mutable DOT GET_MEMORY LP RP {	$$ = insert_Node("job_call", $1, $2, $3, $4, $5);	}
				;

memory_construct		: mutable EQUAL memory_definition  {	$$ = insert_Node("memory_construct", $1, $2, $3);	}
						;
memory_definition		: MEMORY LP parameters_memory_def RP  {	$$ = insert_Node("memory_definition", $1, $2, $3, $4);	}
						;
parameters_memory_def	: memory_typent COMMA mem_sizent name_optional  {	$$ = insert_Node("parameters_memory_def", $1, $2, $3, $4);	}
						;
memory_typent			: SQ mem_value SQ  {	$$ = insert_Node("memory_typent", $1, $2, $3);	}
						| MEMORY_TYPE EQUAL SQ mem_value SQ  {	$$ = insert_Node("memory_typent", $1, $2, $3, $4, $5);	}
						;
mem_sizent 		 		: mem_size_value  {	$$ = insert_Node("mem_sizent", $1);	}
						| MEM_SIZE EQUAL mem_size_value  {	$$ = insert_Node("mem_sizent", $1, $2, $3);	}
						;
mem_value				: PRIMARY  {	$$ = insert_Node("mem_value", $1);	}
						| SECONDARY  {	$$ = insert_Node("mem_value", $1);	}
						| CACHE  {	$$ = insert_Node("mem_value", $1);	}
						;
mem_size_value			: NUM_ID  {	
									$$ = insert_Node("mem_size_value", $1);	
					    			$$->type = INT;
					    			$$->val = $1->val;
					    			$$->code = "li $a0,"+to_string($1->val)+"\n";
							}
						| FLOAT_ID {				$$ = insert_Node("bandwidth_value", $1);
									$$->type = FLOAT;
									$$->val = $1->val;
									$$->code = "li $a0,"+to_string($1->val)+"\n";
					}
						;
memory_call				: mutable DOT GET_AVAILABLE_MEMORY LP RP  {	$$ = insert_Node("memory_call", $1, $2, $3, $4, $5);	}
						;

%%

int main(){
	//yydebug = 1;
	yyparse();
	return 0 ;
}
