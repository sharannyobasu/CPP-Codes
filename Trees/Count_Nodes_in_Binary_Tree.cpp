/*      COUNT NODES IN BINARY TREE      */


#include<iostream>
#include<vector>
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

int height(node*root)
{
    if(!root)
    {
        return 0;
    }
    int l=height(root->left);
    int r=height(root->right);
    return 1+max(l,r);
}

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

int count(node*root)        //main calling function
{
    if(!root)
    {
        return 0;
    }
    return 1+count(root->left)+count(root->right);
}

int main()
{
    node*root=buildtree();
    printree(root);
    cout<<endl<<count(root);
}