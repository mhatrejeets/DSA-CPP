#include<iostream>
using namespace std;
class node{
    public :
    int data;
    node *next;
};

void get(node *ptr){
    while(ptr!=NULL){
        cout<< ptr->data<<endl;
        ptr = ptr->next;
    }
}

node *insertAt_head (int data, node *head) {
    node *ptr = new node;
    ptr -> data = data;
    ptr ->next =head;
    return ptr;
}

int main(){
    node *head= new node;
    node *second= new node;
    node *third= new node;
    node *fourth =new node;


    head->data=10;
    head->next= second;

    second->data=50;
    second->next= third;

    third->data=80;
    third->next= fourth;

    fourth -> data=100;
    fourth -> next =NULL;

    get(head);
    cout<<endl;
    head = insertAt_head (5,head);
     get(head);
    return 0;
}