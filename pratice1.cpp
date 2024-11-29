#include<iostream>
using namespace std;
class tree{
    public :
    char data;
    tree * left;
    tree * right;
    tree(){
        left = nullptr;
        right = nullptr;
    }
};

char * insert(tree ** t, char * a){
    if(*a == '\0'){
        return a;
    }

    
        while(1){
            char * q = "null";
            if(*t == nullptr){
                tree* nt = new tree;
                nt ->data = *a;
                nt->left = nullptr;
                nt->right = nullptr;
                *t = nt;
            }

            else{
                if('a'<=*a && 'z'>=*a){
                    return a;
                }

                q=insert(&(*t)->left,a+1);
                q= insert(&(*t)->right,q+1);
                return q;
            }
        }
    }


void inOrder(tree * root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

int main(){
    tree *t = nullptr;
    char  a [] = "+-*abd*fm";
    insert(&t , a);
    inOrder(t);

    
}