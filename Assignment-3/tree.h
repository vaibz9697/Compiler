#include <iostream>
#include <vector>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;
struct node{
	node* children[20];
	string node_name;
	string node_val; // for semantic analysis
	int line_no;
	int node_no;
	bool is_int;
	bool is_bool;
	node() {		// constructor
		is_int=false;
		is_bool=false;
	}
};
