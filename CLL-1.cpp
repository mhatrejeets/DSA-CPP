#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;

};

void display (node * head){
    node * ptr = head;
    do{
        cout<<"\n Element :"<<ptr-> data;
        ptr = ptr -> next;
    }while(ptr != head);
}

node * insertAThead(node* head, int data){
    node * ptr = new node;
    ptr -> data =data;
    node* p = head;
    while(p->next !=head){
        p=p->next;
    }
    ptr-> next = p -> next;
    p-> next = ptr;
    ptr -> next = head;
    head = ptr;
    return head; 
}
int main(){
node* head= new node;
node* second = new node;
node* third = new node;
node * fourth = new node;
node* fifth= new node;
node * sixth = new node;

head-> data =5;
head -> next = second;

second -> data = 6;
second -> next = third;

third -> data = 7;
third -> next= fourth;

fourth -> data =8;
fourth -> next = fifth;

fifth -> data = 9;
fifth -> next = sixth;

sixth -> data = 10;
sixth -> next = head;
display(head);
cout<<endl<<endl;
head=insertAThead(head,4);
display(head);
return 0;
}
