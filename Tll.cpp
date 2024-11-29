#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
};

node* insert(node* head, int data) {
    node* newNode = new node;
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } 
    else {
        node* ptr = head;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }

    return head;
}

int del( node * head, int index){
    node * prev = new node;
    node * curr = new node;
    int data;
    prev = head;
    

    for(int i=0; i<index-2; i++){
        prev = prev-> next;
        curr= prev->next;
        }
    prev -> next = curr->next;
    data = curr -> data;
    delete(curr);

    return data;
    

}

node * insertAtIndex ( node * head, int index,int data){
    node * prev = new node;
    node * curr = new node;
    node * new_node = new node;
    
    prev = head;
    

    for(int i=0; i<index-2; i++){
        prev = prev-> next;
        curr= prev->next;
        }
    prev -> next = new_node;
    new_node ->next = curr;
    new_node -> data = data;


    return head;
    

}


void get(node* ptr) {
    cout << "The Elements are :" << endl;
    while (ptr != NULL) {
        cout << "Element: " << ptr->data << endl;
        ptr = ptr->next;
    }
}

int main() {
    node* head = NULL; 
    int choice = 99;

    while (choice != -1) {
        cout<<"Insert Data at Tail "<<endl;
        cout << "\n";
        cout << "Enter data: ";
        int data;
        cin >> data;

        head = insert(head, data);

        cout << "Enter Your choice (-1 to exit): ";
        cin >> choice;
        cout << endl;
    }

    get(head); 

    
    choice =99;
    while (choice != -1) {
        cout<<"Delete at end "<<endl;
        cout << "\n";
        cout << "Enter index : ";
        int index;
        cin >> index;

        int data = del(head, index);

        cout<<"The data deleted is "<< data <<endl;

        cout << "Enter Your choice (-1 to exit): ";
        cin >> choice;
        cout << endl;
    }
    get(head); 

    choice =99;
    while (choice != -1) {
        cout<<"Enter at index "<<endl;
        cout << "\n";
        cout << "Enter index : ";
        int index;
        cin >> index;

        cout << "Enter data : ";
        int data;
        cin >> data;

        head = insertAtIndex(head, index,data);

        

        cout << "Enter Your choice (-1 to exit): ";
        cin >> choice;
        cout << endl;
    }
    get(head); 

    return 0;
}
