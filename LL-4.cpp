#include<iostream>
using namespace std;
class node{
    public :
    int data;
    node *next;
};

void get(node * ptr){
    while( ptr != NULL ){
        cout<<"Element  : "<< ptr-> data<<endl;
        ptr = ptr->next;
    }
}

/// @brief 
/// @param data 
/// @param head 
/// @return 
node *insertAThead (int data, node * head) {
    node * ptr = new node;
    ptr ->data = data;
    ptr -> next = head;
    return ptr;
}

node * insertATindex(int data, node* head, int index){
    node * ptr =new node;
    node * p = head;
    ptr->data = data;
    int i =0;
    while(i != index - 1){
        p = p -> next;
        i++;
    }
    ptr->next = p->next;
    p->next =ptr;
    return head;
}

node * insertATend(int data ,node * head){
    node * end =new node;
    node *p = head;
    while(p->next !=NULL){
        p=p->next;
    }
    end -> data =data;
    p->next = end;
    end-> next = NULL;
    return head;
}
node * insertAFTERnode(int data,node*head,node*prevnode){
    node * ptr = new node;
    ptr -> data = data;
    ptr -> next = prevnode -> next;
    prevnode -> next = ptr;
    return head;
}
int main(){
    node *head = new node;
    node *second = new node;
    node *third = new node;
    node *fourth = new node;
    node *fifth= new node;
    node *sixth = new node;

    head->data =10;
    head-> next = second;

    second -> data = 11;
    second -> next = third;

    third ->data = 12;
    third -> next = fourth;

    fourth -> data = 13;
    fourth -> next = fifth;

    fifth -> data = 14;
    fifth -> next = sixth;

    sixth -> data = 15;
    sixth -> next = NULL;

    get(head);
    head=insertAThead(5,head);
    cout<<endl<<endl;
    get(head);
    cout<<endl<<endl<<endl;
    insertATindex(15, head , 3);
    get(head);
    cout<<endl<<endl<<endl;
    insertATend(200, head);
    get(head);
    cout<<endl<<endl<<endl;
    insertAFTERnode(500, head, fourth);
    get(head);
    return 0;
}