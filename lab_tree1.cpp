#include<iostream>
using namespace std;
class node{
    public :
    int data;
    node*left;
    node * right;
    node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};

void preOrder(node * root){
    if(root !=NULL){
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
    }
}

void inOrder(node * root){
    if(root !=NULL){
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
    }
}

void postOrder(node * root){
    if(root !=NULL){
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
    }
}

int main(){
    node * root = new node(10);
    root->left = new node (20);
    root->right = new node (30);
    root->left->left = new node(40);
    root->right->left = new node(60);
    root->right ->right = new node(90);
    cout<<"\nThe pre-order is : ";
    preOrder(root);
    cout<<"\nThe in-order is : ";
    inOrder(root);
    cout<<"\nThe post-order is : ";
    postOrder(root);
    return 0;
}