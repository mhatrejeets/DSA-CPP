#include <iostream>
#include<queue>
using namespace std;

class tree
{
public:
    int value;
    tree *left;
    tree *right;

    tree(int x)
    {
        value = x;
        left = right = NULL;
    }
};

void inorder(tree *temp)
{
    if (temp == NULL)
    {
        return;
    }
    else
    {
        inorder(temp->left);
        cout << temp->value << " ";
        inorder(temp->right);
    }
}

int maxHeight(tree * root){
    if((root == NULL) || (root->left == NULL&& root->right==NULL)){
        return 0;
    }

    else{
        int lh = maxHeight(root->left);
        int rh = maxHeight(root->right);

        if(lh>rh){
            return lh+1;
        }
        else{
            return rh+1;
        }
    }

}

void leaf(tree *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {

        if (root->left == nullptr && root->right == nullptr)

            cout << root->value << " ";

        leaf(root->left);
        leaf(root->right);
    }
}

void mirror(tree *root)
{
    if (!root)
        return;

    mirror(root->left);
    mirror(root->right);
    tree * temp = root->left;
    root->left = root->right;
    root->right = temp;
}

void levelorder(tree * root){
    queue<tree*>q;
    q.push(root);

    while(!q.empty()){
        tree * curr = q.front();
        cout<<curr->value<<" ";
        q.pop();
    

    if(curr->left){
        q.push(curr->left);

    }

    if(curr->right){
        q.push(curr->right);
    }
    }
}

int main()
{
    tree *root;
    root = new tree(40);
    root->left = new tree(20);
    root->right = new tree(50);
    root->left->left = new tree(10);
    root->left->right = new tree(25);
    root->right->left = new tree(45);
    root->right->right = new tree(65);


    cout << "inorder : ";
    inorder(root);
    cout << "\n";

    cout << "Height : ";
    cout << maxHeight(root);
    cout << "\n";

    cout << "Leafnode : ";
    leaf(root);
    cout << "\n";

    cout<<"LO before :" ;
    levelorder(root);

    mirror(root);

    cout<<"LO after :" ;
    levelorder(root);
    cout << "\ninorder : ";
    inorder(root);
    cout << "\n";

    return 0;
}