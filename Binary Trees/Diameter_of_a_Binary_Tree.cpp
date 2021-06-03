/*      DIAMETER OF A BINARY TREE       

Complexity : 0(N^2)
*/


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

int diameter(node*root)     // main calling function
{
    if(!root)
    {
        return 0;
    }
    int h1=height(root->left);
    int h2=height(root->right);
    int op1=h1+h2;
    int op2=diameter(root->left);
    int op3=diameter(root->right);
    return max(op1, max(op2,op3));
}

int main()
{
    node*root=buildtree();
    printree(root);
    cout<<endl<<diameter(root);
}