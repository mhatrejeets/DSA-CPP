#include<iostream>
#include<stack>
#include <cstring>
#include <cstdlib>
using namespace std;

class tree{
    public:
    char value;
    tree* left;
    tree* right;

    tree(){
        //this->value=value;
        left=nullptr;
        right=nullptr;
    }
};

char* insert(tree** s, char* a){
    if(*a == '\0')
        return a;
    
    while(1){
        char* q = "null";
        if(*s == nullptr){
            tree* nn = new tree;
            nn->value=*a;
            nn->left=nullptr;
            nn->right=nullptr;
            *s = nn;
        } 
        else{
            if(*a>='a' && *a<='z'){
                return a;
            }
            q = insert(&(*s)->left,a+1);
            q = insert(&(*s)->right,q+1);
            return q;
        }
    }
}

void inorder(tree* c){
    if(c == nullptr)
        return;
    
    else{
        inorder(c->left);
        cout<<c->value;
        inorder(c->right);
    }
}

void postorder(tree* c){
    if(c == nullptr)
        return;
    
    else{
        postorder(c->left);
        postorder(c->right);
        cout<<c->value;
    }
}

int main(){
    tree* s = nullptr;
    char a[] = "++a*bcd";
    insert(&s,a);
    cout<<"Inorder :";
    inorder(s);
    cout<<"\n";

    cout<<"Postorder :";
    postorder(s);
    cout<<"\n";

    return 0;
}
