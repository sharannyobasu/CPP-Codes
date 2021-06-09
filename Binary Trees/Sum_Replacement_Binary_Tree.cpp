/*      SUM REPLACEMENT (ROOT DATA AS A SUM OF IT'S CHILD NODES)        */


#include<iostream>
using namespace std;


class node
{
    public : 
    int data;
    node*left;
    node*right;
    node(int d)
    {
        data=d;
        left=right=NULL;
    }
};

node*buildtree()
{
    int rootdata;
    cin>>rootdata;
    if(rootdata==-1)
    {
        return NULL;
    }
    node*root=new node(rootdata);
    root->left=buildtree();
    root->right=buildtree();
}

void printree(node*root)
{
    if(!root)
    {
        return;
    }
    cout<<root->data<<" ";
    printree(root->left);
    printree(root->right);
}

void sumreplace(node*root)
{
    if(!root)
    {
        return;
    }
    sumreplace(root->left);
    sumreplace(root->right);
    if(root->left)
    {
        root->data+=root->left->data;
    }
    if(root->right)
    {
        root->data+=root->right->data;
    }
    
}

int main()
{
    node*root=buildtree();
    printree(root);
    cout<<endl;
    sumreplace(root);
    printree(root);
}