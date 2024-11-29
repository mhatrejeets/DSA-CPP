#include<iostream>
#include<stack>
using namespace std;

class node{
    public :
    int data;
    node * left;
    node * right;

    node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};

void inOrder (node * root){
    if(root == NULL){
        return;
    }

    node * curr_ptr = root;
    stack <node *> stk;

    while(curr_ptr != NULL || !stk.empty()){
        while(curr_ptr != NULL){
            stk.push(curr_ptr);
            curr_ptr = curr_ptr->left;
            
        }

        curr_ptr = stk.top();
        cout<<curr_ptr->data<<" ";
        stk.pop();

        curr_ptr = curr_ptr->right;

    }
}


void preOrder(node * root){
    if(root == NULL){
        return;
    }
    stack<node *> stk;
    stk.push(root);

    while(!stk.empty()){
        node * curr_ptr = stk.top();
        cout<<curr_ptr->data<<" ";
        stk.pop();

        if(curr_ptr->right){
            stk.push(curr_ptr->right);
        }

        if(curr_ptr->left){
            stk.push(curr_ptr->left);
        }
    }
}

void postOrder(node * root){
    if(root == NULL){
        return;
    }
    node * curr_ptr;
    stack <node *> s1, s2;
    s1.push(root);

    while(!s1.empty()){
        curr_ptr = s1.top();
        s1.pop();
        s2.push(curr_ptr);

        if(curr_ptr ->left){
            s1.push(curr_ptr->left);
        }

        if(curr_ptr->right){
            s1.push(curr_ptr->right);
        }

    }

    while(!s2.empty()){
        curr_ptr = s2.top();
        cout<<curr_ptr->data<<" ";
        s2.pop();
    }
}

int main(){
    node * root = new node (0);
    node* n1 = new node(1);
    node * n2 = new node(2);
    node * n3 = new node(3);
    node * n4 = new node(4);
    node * n5 = new node(5);

    root -> left = n2;
    root->right = n4;

    n2 -> right = n3;
    n2 -> left = n1;

    n4-> right = n5;

    cout<<"\nPre Order ";
    preOrder(root);
    cout<<"\n Inorder ";
    inOrder(root);
    cout<<"\n PostOrder : ";
    postOrder(root);
}