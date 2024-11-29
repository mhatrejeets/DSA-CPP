#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node* prev;
};

void search(node* head) {
    int i = 1;
    cout << "\n Enter key: ";
    int key;
    cin >> key;
    int flag = 0;
    node* ptr = head;
    while (ptr != NULL) {
        if (ptr->data == key) {
            cout << "The element " << key << " is at index " << i << endl;
            break; 
        }
        ptr = ptr->next;
        i++;
    }
}

void display(node* head) {
    node* ptr = head;
    while (ptr != NULL) {
        cout << "Data : " << ptr->data << endl;
        ptr = ptr->next;
    }
}

node* insert(node* head) {
    int data;
    cout << "\n Enter data : ";
    cin >> data;
    node* new_Node = new node;
    new_Node->data = data;
    new_Node->next = NULL;
    if (head == NULL) {
        new_Node->prev = NULL;
        head = new_Node;
    }
    else {
        node* ptr = head;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = new_Node;
        new_Node->prev = ptr;
    }
    return head;
}

node* del(node* head) {
    cout << "\n Enter the index of element : ";
    int index;
    cin >> index;
    
    if (index < 1) {
        cout << "Invalid index." << endl;
        return head;
    }
    
    if (index == 1) {
        if (head == NULL) {
            cout << "List is empty, nothing to delete." << endl;
            return head;
        }
        node* temp = head->next;
        delete head;
        temp->prev = NULL;
        head = temp;
    }
    else {
        node* previo = head;
        node* ptr = previo->next;
        int i = 2;
        while (i != index && ptr != NULL) {
            previo = previo->next;
            ptr = ptr->next;
            i++;
        }

        if (ptr != NULL) {
            node* ptrnxt = ptr->next;
            previo->next = ptrnxt;
            if (ptrnxt != NULL) {
                ptrnxt->prev = previo;
            }
            int data = ptr->data;
            cout << "The data " << data << " is deleted." << endl;
            delete ptr;
        }
        else {
            cout << "Index is out of range." << endl;
        }
    }
    return head;
}

int main() {
    node* head = NULL; 
    cout << "\n Enter 1 : To add element \n Enter 2 : To delete element \n Enter 3 : To display elements \n Enter 4 : To search element \n Enter 5 : To exit. \n";
    int choice;
    cin >> choice;

    while (choice != 5) {
        switch (choice) {
        case 1:
            head = insert(head);
            break;
        case 2:
            head = del(head);
            break;
        case 3:
            display(head);
            break;
        case 4:
            search(head);
            break;
        default:
            cout << "\n Invalid entry \n";
            break;
        }

        cout << "\n Enter 1 : To add element \n Enter 2 : To delete element \n Enter 3 : To display elements \n Enter 4 : To search element \n Enter 5 : To exit. \n";
        cout << "\n Enter choice :";
        cin >> choice;
    }
    cout << " \nThank You.";
    return 0;
}
