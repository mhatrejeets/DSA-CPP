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

int insertNode(node * root, int prev_key, int data){
    if(root != NULL){
        if(root->data == prev_key){
            cout << "Enter the l or r : ";
            char ch;
            cin >> ch;
            if(ch == 'l'){
                if(root->left == NULL){
                    root->left = new node(data);
                    return 1;
                }
                else if(root->left !=NULL) {
                    cout << "\nInsertion not possible after the given previous index.";
                    return 0;
                }
            }
            else if(ch == 'r') {
                if(root->right == NULL){
                    root->right = new node(data);
                    return 1;
                }
                else if(root->right != NULL){
                    cout << "\nInsertion not possible after the given previous index.";
                    return 0;
                }
            }
            else {
                cout << "\nInvalid ";
                return 0;
            }
        }
        // Recursively check in the left and right subtrees
        if(insertNode(root->left, prev_key, data) == 1)
            return 1;
        return insertNode(root->right, prev_key, data);
    }
    return 0;
}


void insertNodeMain(node * root){
    cout<<"\nEnter the previous index - value : ";
    int prev_ind_value;
    cin>>prev_ind_value;
    cout<<"\nEnter the data to be inserted : ";
    int data;
    cin>>data;
    node * r1 = root;
    int a = insertNode(r1,prev_ind_value,data);
    if(a==0){
        cout<<"\nelement not added .";
    }
    else{
        cout<<"\nelement added .";
    }

}



int main(){
    cout<<"Enter the root of the tree : ";
    int root_val;
    cin>>root_val;
    node * root = new node (root_val);
    cout<<"\n1.To enter the elements. \n2.To display elements.\n3. to exit \nEnter choice : ";
    int choice;
    cin>>choice;

    while(choice != 3){
        switch(choice){
            case 1 :    
                insertNodeMain(root);
                break;

            case 2 :
                cout<<"\nThe pre-order is : ";
                preOrder(root);
                cout<<"\nThe in-order is : ";
                inOrder(root);
                cout<<"\nThe post-order is : ";
                postOrder(root);
                break;

            default :
                cout<<"\n Invalid entry.";
                break;

        }

        cout<<"\n\n1.To enter the elements. \n2.To display elements.\n3. to exit\nEnter choice : ";
        cin>>choice;
    }
    cout<<"\nThank You.";
    return 0;
}