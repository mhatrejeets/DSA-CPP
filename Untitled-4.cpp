#include<iostream>
#include<string>
using namespace std;
class node {
    public:
    string job;
    float time;
    node * next;
};

node* enqueue(node* front, node* rear) {
    cout << "\n Enter the name of the job : ";
    string jobb;
    cin >> jobb;
    cout << "Enter the time : ";
    float timee;
    cin >> timee;

    node* ptr = front;
    // Check if the list is empty or the new node should be inserted at the beginning
    if (front->next == rear || front->next->time < timee) {
        node* nptr = new node;
        nptr->job = jobb;
        nptr->time = timee;
        nptr->next = front->next;
        front->next = nptr;
    } else {
        while (ptr->next != rear && ptr->next->time >= timee) {
            ptr = ptr->next;
        }

        node* zptr = ptr->next;
        node* nptr = new node;
        nptr->job = jobb;
        nptr->time = timee;
        ptr->next = nptr;
        nptr->next = zptr;
    }

    return front;
}

node * dequeue(node * front, node * rear){
    node * ptr = front;
    front = ptr->next;
    cout<<"\nThe deleted job is "<<"\n Job Name : "<<ptr->job<<"\t"<<"Time : "<<ptr->time;
    delete ptr;
    return front;
}

void display(node * front, node * rear){
    node * ptr=front;
    int i =1;

    while(ptr!=rear){
        cout<<"\n Job : "<<i<<"\t"<<"Name : "<<ptr->job<<"\t"<<"Time : "<<ptr->time;
        ptr= ptr->next;
        i++;
    }
}
int main(){
    node* front= new node;
    node * rear = new node;
    front->next = rear;


    enqueue(front,rear);
    enqueue(front,rear);
    enqueue(front,rear);
    enqueue(front,rear);
    enqueue(front,rear);
    enqueue(front,rear);
    enqueue(front,rear);
    enqueue(front,rear);
    enqueue(front,rear);
    

    display(front, rear);

    dequeue(front,rear);
    dequeue(front,rear);
    dequeue(front,rear);
    display(front, rear);
    return 0;

}

//how to insert an element in the linked list?
