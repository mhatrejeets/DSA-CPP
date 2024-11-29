#include <iostream>
using namespace std;
class node{
    public :
    int data;
    node* right;
    node * left;
    node(int value){
        data = value;
        left=NULL;
        right = NULL;
    }
};


void preOrder(node * root){
    if(root !=NULL){
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
    }
}

void inOrder(node * root){
    if(root !=NULL){
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
    }
}

void postOrder(node * root){
    if(root !=NULL){
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
    }
}

node* smallestElement(node *root){
    while(root->left != NULL){
        root= root->left;
    }
    return root;
}

node* largestElement(node *root){
    while(root->right != NULL){
        root= root->right;
    }
    return root;
}


void insertNode (node * root , int value){
    node * prev = NULL;
    while(root != NULL){
        prev = root;
        if(root-> data > value){
            root = root->left;
        }

        else if (root->data<= value){
            root = root->right;
        }
    }
    node * ptr = new node (value);
    if(prev ->data > value){
        prev->left = ptr;
    }
    else{
        prev ->right = ptr;
    }
}

int inputNum(){
    cout<<"\nEnter the number : ";
    int num;
    cin>>num;
    return num;

}

int main(){
    cout<<"Enter the root of the tree : ";
    int root_val;
    cin>>root_val;
    node * root = new node (root_val);
    cout<<"\n\n\n1.To insert the elements. \n2.To display elements.\n3. to get smallest element \n4. to get largewst element \5. To exit \nEnter choice : ";
    int choice;
    cin>>choice;

    while(choice != 5){
        switch(choice){
            case 1 :    
                insertNode(root, inputNum());
                break;

            case 2 :
                cout<<"\nThe pre-order is : ";
                preOrder(root);
                cout<<"\nThe in-order is : ";
                inOrder(root);
                cout<<"\nThe post-order is : ";
                postOrder(root);
                break;

            case 3 :
                cout<<"\nThe smallest element is "<<smallestElement(root)->data;
                break;

            case 4 :
                cout<<"\nThe largest element is "<<largestElement(root)->data;
                break;

            default :
                cout<<"\n Invalid entry.";
                break;

        }

        cout<<"\n\n\n1.To insert the elements. \n2.To display elements.\n3. to get smallest element \n4. to get largewst element \n 5. To exit \nEnter choice : ";
        cin>>choice;
    }
    cout<<"\nThank You.";
    return 0;
}