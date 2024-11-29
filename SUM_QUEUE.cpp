#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;
};

node * enqueue (node * front, node * rear, int data){
    node * ptr = front;
    while(ptr->next!= rear){
        ptr= ptr->next;
    }
    node* new_node = new node;
    ptr->next = new_node;
    new_node ->data = data;
    new_node ->next = rear;
    
    cout<<endl<<data<<"Enqueue Sucessfully \n";
    return front;
}

node * dequeue (node* front , node * rear){
    node * ptr = front;
    front = front->next;
    cout<<endl<<ptr->data<<" has been dequed.\n";
    delete ptr;
    return front;
}

void display(node * front,node * rear){
    node * ptr = front;
    while(ptr!=rear){
        cout<<"Element : "<<ptr->data<<endl;
        ptr =ptr->next;
    }
}

node * fr(node* front, node * rear){
    front->data = 0;
    front ->next = rear;
    rear->data=0;
    rear->next = NULL;
    return front;
}

int sum(node * front, node * rear){
    node * ptr = front;
    int sum = 0;
    while(ptr!=rear){
        sum = sum + ptr->data;
        ptr= ptr->next;
    }
    return sum;
}

int main(){
    node * front = new node;
    node * rear = new node;
    front = fr(front,rear);

    int choice;
    cout<<"Enter 1. TO endueue \n Enter 2. To dequeue \n Enter 3. To Display \n Enter 4. To get sum.\n Enter 5 To exit\n";
    cout<<"Enter choice : ";
    cin>>choice;

    while(choice != 5){
        switch (choice){
            case 1:
                cout<<"Enter data";
                int data;
                cin>>data;
                front=enqueue(front,rear,data);
                break;

            case 2 :
            front=dequeue(front,rear);
            break;

            case 3 :
            display(front,rear);
            break;

            case 4 :
            cout<<"\n The sum is "<<sum(front,rear);


            default:
            cout<<"\n Invalid Entry\n";
            break;
        }
        cout<<"Enter 1. TO endueue \n Enter 2. To dequeue \n Enter 3. To Display \n Enter 4. To exit.\n Enter 5 To exit\n ";
    cout<<"Enter choice : ";
    cin>>choice;
    }
    cout<<"Thank You";
}