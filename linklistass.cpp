#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next ;
};

void search(node * head){
    int i=1;
    cout<<"\n Enter key: ";
    int key;
    cin>>key;
    int flag =0;
    node *ptr=head;
    while(ptr->next != NULL){
       
        if(ptr->data ==key){
            cout<<"The element "<<key<<"is at index"<<i<<endl;
        }
        ptr = ptr->next;
        
    }
    

}

void display(node * head){
    node * ptr = head;
    while(ptr!=NULL){
        cout<<"Data : "<<ptr->data<<endl;
        ptr = ptr -> next;

    }
}

node * insert(node * head){
    int data;
    cout<<"\n Enter data : ";
    cin>>data;
    node *ptr = head;
    node *new_Node = new node;
    while(ptr->next !=NULL){
        ptr = ptr -> next;
    }

    new_Node -> data = data;
    ptr -> next = new_Node;
    new_Node -> next = NULL;
    return head; 
}

node * del(node *head){
    cout<<"\n Enter the index of element : ";
    int index;
    cin>>index;
    node* prev = head;
    node * ptr = prev ->next;
    int i=2;
    while(i !=index){
        prev=prev->next;
        ptr=ptr->next;
        i++;
    }

    prev->next = ptr->next;
    int data = ptr->data;
    cout<<"The data "<<data<<" is deleted.";
    delete ptr;
    return head;
}

int main(){
    node * head = new node;
    head ->data = 1;
    head ->next = NULL;
    cout<<"\n Enter 1 : To add element \n Enter 2 : To delete element \n Enter 3 : To display elements \n Enter 4 : To search element. \n";
    int choice;
    cin>>choice;

    while(choice !=5){
        switch (choice){
            case 1:
                head = insert(head);
                break;

            //
            
            case 2:
                head = del(head);
                break;

            case 3: 
                display(head);
                break;

            case 4 :
                search(head);
                break;

            default :
                cout<<"\n Invalid entry \n";
                break;  

             

        }

        cout<<"\n Enter 1 : To add element \n Enter 2 : To delete element \n Enter 3 : To display elements \n Enter 4 : To search element. \n Enter 5 : To exit. \n ";
        cout<<"\n Enter choice :";
        cin>>choice;        

    }
    cout<<" \nThank You.";
    return 0;
}