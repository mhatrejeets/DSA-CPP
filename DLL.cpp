#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node * prev;
    node * next;

};

// void display (node * head){
//     node * ptr = head;
//     do{
//         cout<<"\n Element :"<<ptr-> data;
//         ptr = ptr -> next;
//     }while(ptr != head);
// }

// 

void display(node* head){//display from head to end and again from end to head
    node*ptr= head;
    while(ptr->next !=NULL){
        cout<<"Element :"<<ptr-> data<<endl;
        ptr=ptr->next;
    }
 while(ptr !=NULL){
       cout<<"Element :"<<ptr-> data<<endl;
        ptr=ptr->prev;
    }
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
head-> prev=NULL;

second -> data = 6;
second -> next = third;
second-> prev=head;

third -> data = 7;
third -> next= fourth;
third-> prev=second;

fourth -> data =8;
fourth -> next = fifth;
fourth-> prev=third;

fifth -> data = 9;
fifth -> next = sixth;
fifth-> prev=fourth;

sixth -> data = 10;
sixth -> next = NULL;
sixth-> prev=fifth;
display(head);
cout<<endl<<endl;
// head=insertAThead(head,4);
// display(head);
return 0;
}
