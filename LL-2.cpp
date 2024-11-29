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

int main(){
    node *head= new node;
    node *second= new node;
    node *third= new node;

    head->data=10;
    head->next= second;

    second->data=50;
    second->next= third;

    third->data=80;
    third->next= NULL;
    get(head);
    return 0;
}