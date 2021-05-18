/*      PREORDER INORDER POSTORDER TRAVERSAL IN BINARY TREE     

NOTE : Preorder means root first, then left right;
Inorder means Left, root in between then right;
Postorder means left, right then root at last

*/


#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node*left;
    node*right;
    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
    
};

node*builtree()
{
    int d;
    cin>>d;
    node*root=new node(d);
    if(d==-1)
    {
        return NULL;
    }
        root->left=builtree();
        root->right=builtree();
    
    return root;
}

void printPreOrder(node*root)
{
    if(!root)
    {
        return;
    }
    cout<<root->data<<" ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}

void printInOrder(node*root)
{
    if(!root)
    {
        return;
    }
    printInOrder(root->left);
    cout<<root->data<<" ";
    printInOrder(root->right);
    
}

void printPostOrder(node*root)
{
    if(!root)
    {
        return;
    }
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout<<root->data<<" ";
    
}

int main()
{
    node*root=builtree();
    printPreOrder(root); //preorder print
    cout<<endl;
    printInOrder(root);  //inorder print
    cout<<endl;
    printPostOrder(root);  //postorder print
}