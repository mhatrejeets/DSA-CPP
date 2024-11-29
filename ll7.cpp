#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;

    node(int data,node *next){
        this->data=data;
        this->next=next;
    }
};
void get (node * ptr){
    while(ptr != NULL ){
    cout<<"Element : "<< ptr-> data<<endl;
    ptr = ptr->next;
    }
}
int main(){
    node *head=new node(1,second);
    node *second= new node(2,third);
    node *third= new node (3,fourth);
    node* fourth= new node (4, NULL);
    get(head);
    return 0;
}