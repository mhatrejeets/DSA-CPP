#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node * left;
    node* right;
};

node *create_node(node* root, int data){
    node*n = new node;
    n->data = data;
    n->left =NULL;
    n->right = NULL;
    return n;
}


void preorder_disp(node* root){
    if(root!=NULL){
        cout<<root->data<<"\t";
        preorder_disp(root->left);
        preorder_disp(root->right);
    }

}

void post_order(node * root){
    if(root != NULL){
        post_order(root->left);
        post_order(root->right);
        cout<<root->data<<"\t";

    }
}

void in_order(node* root){
    if(root!= NULL){
        in_order(root->left);
        cout<<root->data<<"\t";
        in_order(root->right);
    }
}

int main(){
    node * root = new node;
    root->data=0;
    node*n1 =create_node(root,4);
    node*n2 =create_node(root,2);
    node*n3 =create_node(root,8);
    node*n4 =create_node(root,9);
    node*n5 =create_node(root,5);
    node*n6 =create_node(root,1);
    node*n7 =create_node(root,6);
    node*n8 =create_node(root,7);
        //              0
        //              |
        //              4
        //          /        \
        //         2            8
        //     /       \       /   \
        //     9       5    1        6
        //  /
        // 7     

        root->left= n1;
        root->right= NULL;
        n1->left= n2;
        n1->right = n3;
        n2->left=n4;
        n2->right = n5;
        n3->left= n6;
        n3->right= n7;
        n4->left= n8;
        n4->right=NULL;
        n5->left=NULL;
        n5->right=NULL;
        n6->left=NULL;
        n6->right=NULL;
        n7->left=NULL;
        n7->right=NULL;
        n8->left=NULL;
        n4->right=NULL;
        cout<<"The preordered list is :";
        preorder_disp(root);
        cout<<"\nThe postordered list is :";
        post_order(root);
        cout<<"\nThe in ordered list is :";
        in_order(root);
    return 0;
}