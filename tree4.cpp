#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
};

node * create_node (int data){
    node * new_node  = new node;
    new_node -> data = data;
    new_node ->left= NULL;
    new_node -> right = NULL;

     return new_node;
}

void preorder (node * root){
    if(root != NULL){
        cout<<root->data;
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder (node * root){
    if(root != NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data;
    }
}

void inorder (node * root){
    if(root != NULL){
        inorder(root->left);
        cout<<root->data;
        inorder(root->right);
    }
}

bool isBST(node * root){
    static node * prev = NULL;
    if(root!= NULL){
        if(!isBST(root->left)){
            return false;
        }

        if(prev != NULL && root->data <= prev->data){
                return false;
        }

        prev = root;
        return isBST(root->right);
    }
    else{
        return true;
    }

}

node * search (node * root, int key){
    if (root == NULL){
        return NULL;
    }
    else if(root->data==key){
        return root;
    }
    else if(root->data > key){
        return search(root->left,key);
    }
    else{
        return search(root->right,key);
    }
    
}

node * searchiter(node * root , int key){
    while (root != NULL){
        if(key == root->data){
            return root;
        }
        else if (key<root -> data){
            root = root ->left;
        }
        else {
            root = root ->right;
        }
    }
    return NULL;
}

void insert(node * root, int value){
    node * prev = NULL;
    while(root != NULL){
        prev = root;
        if(value == root->data){
            cout<<"\n Root data  should not be equal to value, insertion is not possible.";
            return;
        }
        else if(value < root ->data){
            root = root->left;
        }
        else{
            root = root->right;
        }

    }
    node * ptr = create_node(value);
    if(prev->data > value){
        prev->left = ptr;
    }
    else{
        prev ->right= ptr;
    }
    
}

node* deletionnode(node* root, int key) {
    if (root == NULL) {
        return NULL;
    }

    if (root->data == key) {
        // 0 child nodes
        if (root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }

        // 1 child node
        if (root->left != NULL && root->right == NULL) {
            node* temp = root->left;
            delete root;
            return temp;
        }

        if (root->left == NULL && root->right != NULL) {
            node* temp = root->right;
            delete root;
            return temp;
        }

        // 2 child nodes
        if (root->left != NULL && root->right != NULL) {
            // Find the in-order successor
            node* successor = root->right;
            while (successor->left != NULL) {
                successor = successor->left;
            }

            // Replace the data of the root with the in-order successor's data
            root->data = successor->data;

            // Recursively delete the in-order successor from the right subtree
            root->right = deletionnode(root->right, successor->data);

            return root;
        }
    } else if (root->data > key) {
        root->left = deletionnode(root->left, key);
    } else if (root->data < key) {
        root->right = deletionnode(root->right, key);
    }

    return root;
}

int main(){
    node* root = new node;
    root->data = 3;
    node * n1 = create_node(1);
    node * n2 = create_node(6);
    node * n3 = create_node(0);
    node * n4 = create_node(2);
    node* n5 = create_node(5);
    node * n6 = create_node(7);
    node* n7 =create_node(4);

            //           3
            //        /     \
            //       1        6
            //     /  \      /   \
            //    0   2      5    7
            //             /
            //             4

    root->left= n1;
    root->right = n2;
    n1->left = n3;
    n1->right = n4;
    n2->left = n5;
    n2->right = n6;
    n5->left = n7;

    insert(root,8);
    deletionnode(root,6);

    cout<<"\nThe preorder will be : ";
    preorder(root);
    cout<<"\nThe inorder will be : ";
    inorder(root);
    cout<<"\nThe postorder will be : ";
    postorder(root);

    if(isBST(root)){
        cout<<"\n IS BST";
    }
    else{
        cout<<" \n IS NOT BST";
    }
    
    int key = 5;

    node * sear = search(root,key);
    if (sear != NULL) {
        cout<<" \npresent at "<<sear;
    }
    else {
        cout << "\n Element is not present";    
        } 

    node * searc = searchiter(root,key);
    if (searc != NULL) {
        cout<<"\npresent at "<<sear;
    }
    else {
        cout << "\n Element is not present";    
        }   

        return 0;

}