#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
};

int isEmpty(node * top){
    if(top==NULL){
        return 1;
    }
    return 0;
}

int isFull(node *top){
    node *x = new node;
    if (x==NULL){
        return 1;
    }
    delete x;
    return 0;
}

node* push(node* top, int data){
    if(isFull(top)==1){
        printf("Stack Overflow\n");
        return top;
    }
    else{
        node* n = new node;
        n->data = data;
        n->next = top;
        top = n;
        return top;
    }
}


node* pop(node * top){
    if(isEmpty(top)==1){
        cout<<"\n Stack Underflow.";
        return top;
    }
    else{              
    node * nnode = top;
    top=top->next;
    int data = nnode->data;
    cout<<"Element :"<<data<<" is poped"<<endl;
    delete nnode;
    return top;
    }
    
}

void display(node * top){
    node *ptr= top;
    while(ptr !=NULL){
        cout<<"Element : "<<ptr->data<<endl;
        ptr=ptr->next;
    }    
}

int main(){
    node *top = NULL;
    cout<<"\n Enter 1 : To push. \n Enter 2 : To pop. \n Enter 3 : To display \n";
    cout<<"Enter choice : ";
    int choice;
    cin>>choice;
    while(choice !=4){
        switch(choice){
            case 1:
                cout<<"Enter data :";
                int data;
                cin>>data;
                top = push(top,data);
                break;

            case 2 :
                top = pop(top);
                break;

            case 3 :
                display(top);
                break;

            default :
                cout<<endl<<"Invalid Entry" <<endl;


        }
        cout<<"\n Enter 1 : To push. \n Enter 2 : To pop. \n Enter 3 : To display \n";
        cout<<"Enter choice : ";
        cin>>choice;
    }

    cout<<"\n Thank You. \n";
    return 0;
}
