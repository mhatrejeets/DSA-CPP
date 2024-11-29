#include<iostream>
using namespace std;
class node{
    public :
    int data;
    node *next;
};
void display(node *head){
    node * ptr = head;

    while(ptr !=NULL){
        cout<<"Element :"<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
node  *deletAThead(node * head){
    node *ptr = head;
    head=head->next;
    delete(ptr);
    return head; 
}
node * deleteATindex(int index,node *head){
    node *p=head;
    node *q=head->next;
    for(int i=0;i<index-1;i++){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    delete (q);
    return head;
}
node * deletionATend(node * head){
    node * prev= head;
    node * end= head-> next;
    int i=0;
    while(end->next != NULL){
        prev= prev->next;
        end = end ->next;
    }    
    prev -> next =NULL;
    delete(end);
    return head;
}
int main(){
    node *head=new node;
    node *second = new node;
    node *third = new node;
    node *fourth = new node;
    node *fifth = new node;
    node *sixth = new node;

    head->data =10;
    head-> next = second;

    second -> data =11;
    second -> next = third;

    third ->data = 12;
    third -> next =fourth;

    fourth -> data=13;
    fourth -> next = fifth;

    fifth ->data =14;
    fifth ->next = sixth;

    sixth ->data =15;
    sixth ->next = NULL;
    display(head);
    head=deletAThead(head);
    cout<<endl<<endl;
    display(head); 
    head=deleteATindex(2,head);   
     cout<<endl<<endl;
     display(head); 
     cout<<endl<<endl;
     head=deletionATend(head);
     display(head);
    return 0;
    }