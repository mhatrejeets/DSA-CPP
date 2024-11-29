#include<iostream>
#include<stack>
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

void postOrder(node * root){
    
    if (root == NULL) 
        return; 
  
    
    stack<node *> s1, s2; 
  
    
    s1.push(root); 
    node* curr_ptr; 
  
    // Run while first stack is not empty Pop an item from s1 and push it to s2
    while (!s1.empty()) { 
         
        curr_ptr = s1.top(); 
        s1.pop(); 
        s2.push(curr_ptr); 
  
        // Push left and right children 
        // of removed item to s1 
        if (curr_ptr->left) 
            s1.push(curr_ptr->left); 
        if (curr_ptr->right) 
            s1.push(curr_ptr->right); 
    } 
  
    // Print all elements of second stack 
    while (!s2.empty()) { 
        curr_ptr = s2.top(); 
        s2.pop(); 
        cout << curr_ptr->data << " "; 
    } 
}

void inOrder(node * root){
    stack <node*> st;
    node * curr_ptr =root;
    
    while(curr_ptr != NULL || !st.empty()){ //stack is not empty.
        //go to left
        while(curr_ptr != NULL){
            st.push(curr_ptr);
            curr_ptr = curr_ptr->left;
        }   

        curr_ptr = st.top();
        st.pop();
        //print curr ptr
        cout<<curr_ptr->data<<" ";

        // go to right
        curr_ptr = curr_ptr->right;
    } 
}

void preOrder(node * root){
    if(root == NULL){
        return;
    }
    else{
        stack<node*>stk;
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