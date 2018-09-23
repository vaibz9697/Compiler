#include "tree.h"
#include <iostream>
node* insert_Node(string name, node* a=NULL, node* b=NULL, node* c=NULL, node* d=NULL, node* e=NULL, node* f=NULL, node* g=NULL, node* h=NULL, node* i=NULL, node* j=NULL, node* k=NULL, node* l=NULL, node* m=NULL, node* n=NULL, node* o=NULL, node* p=NULL, node* q=NULL, node* r=NULL, node* s=NULL, node* t=NULL  , node* i=NULL, val_type type= NONE, int val=0  ) {
        static int no = 1;
        node *new_node;
        new_node = new node();

        new_node->children[0] = a;
        new_node->children[1] = b;
        new_node->children[2] = c;
        new_node->children[3] = d;
        new_node->children[4] = e;
        new_node->children[5] = f;
        new_node->children[6] = g;
        new_node->children[7] = h;
        new_node->children[8] = i;
        new_node->children[9] = j;
        new_node->children[10] = k;
        new_node->children[11] = l;
        new_node->children[12] = m;
        new_node->children[13] = n;
        new_node->children[14] = o;
        new_node->children[15] = p;
        new_node->children[16] = q;
        new_node->children[17] = r;
        new_node->children[18] = s;
        new_node->children[19] = t;
        new_node->node_name=name;
        new_node->node_no = no * 10;
        no++;
        // new_node->line_no=line;
        new_node->node_no = no * 10;
        new_node->type = type;
        new_node->val=val;
        return new_node;
    }


void print_nodes(struct node* root, std::ofstream& myfile)
{
        if(root == NULL)
                return;
        else
        {
                cout << "Parent Node " << root->node_no << "( " << root->node_name << " ) : "<<endl<<"Children Node : "<<endl;
                myfile << "Parent Node " << root->node_no << "( " << root->node_name << " ) : "<<endl<<"Children Node : "<<endl;
                if(root->children[0] == NULL)
                {
                        cout <<"\t"<< root->node_val<<endl;
                        myfile <<"\t"<< root->node_val<<endl;
                }
                for(int i=0 ; i<20 ; i++)
                {
                        if(root->children[i] != NULL)
                        {
                                cout <<"\t"<< root->children[i]->node_no << " (" << root->children[i]->node_name << ") " <<endl;
                                myfile <<"\t"<< root->children[i]->node_no << " (" << root->children[i]->node_name << ") "<<endl;;
                        }
                        else
                        {
                                cout << "\n\n";
                                myfile << "\n\n";
                                break;
                        }
                }
                for(int i=0;i<20; i++)
                {
                        if(root->children[i] != NULL)
                        {
                                print_nodes(root->children[i],myfile);
                                //break;
                        }
                }
        }

}
