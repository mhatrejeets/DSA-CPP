#include <iostream>
using namespace std;
class node {
    public :
    int data;
    node *next;

    
};

void get (node * ptr){
    while(ptr != NULL ){
    cout<<"Element : "<< ptr-> data<<endl;
    ptr = ptr->next;
    }
}
node * deleteATvalue( int value, node * head ){
    node * p =head;
    node * q = head -> next;
    while (q->data!=value && q->next!= NULL ){
        p=p->next;
        q=q->next;
    }

    if(q->data==value ){
        p->next = q->next;
        delete (q);
    }
    return 0;
}
int main(){
    node *head;
    node *second;
    node *third;
    
    head=new node;
    second= new node;
    third= new node;

    head-> data =10;
    head-> next = second;

     second-> data =20;
    second-> next = third;

     third-> data =30;
    third -> next = NULL;

    get (head);
    cout<<endl<<endl;
    deleteATvalue( 30, head );
     get (head);
     return 0;

}