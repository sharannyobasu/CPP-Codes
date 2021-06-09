/*      NUMBER OF LEAF NODES IN BINARY TREE     */


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

int leaf_nodes_count(node*root)
{
    if(!root)
    {
        return 0;
    }
    if(!root->left and !root->right)
    {
        return 1;
    }
    int left_count=leaf_nodes_count(root->left);
    int right_count=leaf_nodes_count(root->right);
    return left_count+right_count;
}

int main()
{
    node*root=buildtree();
    printree(root);
    cout<<endl;
    cout<<"No. of leaf nodes : "<<leaf_nodes_count(root);
}