#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
};

node * create_node (int data){
    node * new_node  = new node;
    new_node -> data = data;
    new_node ->left= NULL;
    new_node -> right = NULL;

     return new_node;
}

void preorder (node * root){
    if(root != NULL){
        cout<<root->data;
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder (node * root){
    if(root != NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data;
    }
}

void inorder (node * root){
    if(root != NULL){
        inorder(root->left);
        cout<<root->data;
        inorder(root->right);
    }
}

int isBST(node * root){
    static node *prev = NULL;
    if(root != NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data <= prev ->data){
            return 0;
        }

        prev =root;
        return (isBST(root->right));
    }
    else{
        return 1;
    }

}

int main(){
    node* root = new node;
    root->data = 3;
    node * n1 = create_node(1);
    node * n2 = create_node(6);
    node * n3 = create_node(0);
    node * n4 = create_node(2);
    node* n5 = create_node(5);
    node * n6 = create_node(7);
    node* n7 =create_node(4);

            //           3
            //        /     \
            //       1        6
            //     /  \      /   \
            //    0   2      5    7
            //             /
            //             4

    root->left= n1;
    root->right = n2;
    n1->left = n3;
    n1->right = n4;
    n2->left = n5;
    n2->right = n6;
    n5->left = n7;

    cout<<"\nThe preorder will be : ";
    preorder(root);
    cout<<"\nThe inorder will be : ";
    inorder(root);
    cout<<"\nThe postorder will be : ";
    postorder(root);

    if(isBST(root)){
        cout<<"\n IS BST";
    }
    else{
        cout<<" \n IS NOT BST";
    }
    
    return 0;

}