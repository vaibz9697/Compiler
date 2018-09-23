#include "tree.h"

node *inserting_leaf_Node(string name, string value ,  val_type type=NONE)
{
    static int no = 1;
    node *new_node;
    new_node = new node();
    new_node->children[0] = NULL;
    new_node->children[1] = NULL;
    new_node->children[2] = NULL;
    new_node->children[3] = NULL;
    new_node->children[4] = NULL;
    new_node->children[5] = NULL;
    new_node->children[6] = NULL;
    new_node->children[7] = NULL;
    new_node->children[8] = NULL;
    new_node->children[9] = NULL;
    new_node->children[10] = NULL;
    new_node->children[11] = NULL;
    new_node->children[12] = NULL;
    new_node->children[13] = NULL;
    new_node->children[14] = NULL;
    new_node->children[15] = NULL;
    new_node->children[16] = NULL;
    new_node->children[17] = NULL;
    new_node->children[18] = NULL;
    new_node->children[19] = NULL;
    new_node->node_name=name;
    new_node->node_val=value;
    new_node->node_no = no * 10 + 1;
    no++;
    return new_node;
}
