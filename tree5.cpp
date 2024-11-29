#include<iostream>
using namespace std;
class node {
    public:
    int data;
    node * left;
    node * right;
};

node * createNode (int data ){
    node * ptr = new node;
    ptr->data = data;
    ptr->left = NULL;
    ptr ->right = NULL;
    return ptr;
}

int input(){
    cout<<"\nEnter number :";
    int num;
    cin>>num;
    return num;
}
node * searchNode(node * root , int key){
    if(root == NULL){
        return NULL;
    }

    if(root->data == key ){
        return root;
    }

    if(root -> data > key ){
        return searchNode(root->left , key);
    }

    if(root->data < key){
        return searchNode(root->right , key);
    }
}

void insertNode (node * root , int value){
    node * prev = NULL;
    while(root != NULL){
        prev = root;
        if (root -> data == value){
            cout<<"The given value "<<value<<" is already in the tree .";
            return;
        }
        else if(root-> data > value){
            root = root->left;
        }

        else{
            root = root->right;
        }
    }
    node * ptr = createNode(value);
    if(prev ->data > value){
        prev->left = ptr;
    }
    else{
        prev ->right = ptr;
    }
}

void checkSearch(node * root){
    node * ptrs = searchNode(root, input());
                if(ptrs != NULL){
                    cout<<"\nNode is present at : "<<ptrs<<" memory location.";
                }
                else{
                    cout<<"\nThe value is not present in BST";
                }
}
bool isBST (node * root){
    static node * prev = NULL;
    if(root != NULL){
        if(!isBST(root->left)){
            return false;
        }
        else if (prev != NULL && root-> data <=prev ->data){
            return false;
        }
        prev = root;
        return isBST(root->right);

    }
    else {
        return true;
    }
}
node * deleteNode (node * root, int value){
    if (root == NULL){
        return NULL;
    }

    if (root -> data == value){
        if(root->left ==NULL && root->right== NULL){
            delete root;
            return NULL;
        }
    

        if(root->left != NULL && root->right == NULL){
            node * temp = root->left;
            delete root;
            return temp;
        }

        if(root ->left ==NULL && root ->right != NULL){
            node * temp = root -> right;
            delete root;
            return temp;
        }

        if(root->left != NULL && root->right != NULL){
            node * ptr = root->right;
            while(ptr->left!= NULL){
                ptr=ptr->left;
            }
            root->data = ptr->data;
            
            root->right = deleteNode(root->right, ptr->data);
        }

        return root;

    }

    else if(root->data >value){
        root->left = deleteNode(root->left , value);
    }

    else if (root->data <value){
        root->right = deleteNode(root -> right, value);
    }

    return root;

}

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

int main(){
    cout<<"\nEnter the value of the root node : ";
    int rVal;
    cin>>rVal;
    node* root = createNode(rVal);
    int choice;
    do{
        cout<<"\n\nEnter - \n1. To insert an element. \n2. To delete an element.\n3. To search node for any given key.\n4. To check wether the tree is a BST.\n5. To display BST in preodered manner.\n6. To display BST in inodered manner.\n7. To display BST in postodered manner.\n8. To exit.\n";
        cin>>choice;
        switch(choice){
            case 1:
                insertNode(root,input());
                break;

            case 2:
                deleteNode(root,input());
                break;

            case 3:
                checkSearch(root);
                break;

            case 4:
                if(isBST(root)){
                    cout<<"\nThe given tree is a BST";
                }
                else{
                    cout<<"\nThe given tree is NOT a BST";
                }
                break;

            case 5:
                cout<<"\nThe preordered representation of the BST is as follows: ";
                preOrder(root);
                break;

            case 6:
                cout<<"\nThe inordered representation of the BST is as follows :";
                inOrder(root);
                break;

            case 7:
                cout<<"\nThe postordered representation of the BST is as follows :";
                postOrder(root);
                break;

            default:
                if(choice!=8){
                cout<<"\nInvalid Entry.";
                }
                break;

        }
    }while(choice !=8);

    cout<<"\nThank You";

    return 0;
}