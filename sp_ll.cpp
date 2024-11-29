#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;
};

int isEmpty(node*top){
    if(top==NULL){
        return 1;
    }
    return 0;
}

int isFull(node* top){
    node * j=new node;
    if(j==NULL){
        return 1;
    }

    return 0;
}

node * push(node*top,int data){
    if(isFull(top)==1){
        cout<<"Stack-Overflow, no new element can be added."<<endl;
    }
    else{
    node * np = new node;
    np -> data = data;
    np -> next = top;
    top = np;
    }
    return top;
}

node * pop(node * top){
    if(isEmpty(top)==1){
        cout<<"Stack-Underflow, no elements can be removed. "<<endl;
    }
    else{
        node* np = top;
        int value = np-> data;
        cout<<"Element "<<value<<" is popped."<<endl;
        top = np -> next;
        delete  np;
            
    }
     return top;   
}

void display(node* ptr){
    while(ptr->next !=NULL){
        cout<<"Element : "<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
int main(){
    node *top =NULL;
    top = push(top,0);
    top = push(top,1);
    top= push(top,2);
    top= push(top,3);
    display(top);
    top=pop(top);
    top=pop(top);

    display(top);
    return 0;
}