/*      MIRROR OF A BINARY TREE   

TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(h) (h -> height of tree)
WORST CASE TIME COMPLEXITY : O(N), when tree is highly skewed

*/


#include<bits/stdc++.h>
#include<vector>
#include<queue>
#include<stack>
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

void mirror(node*root)
{
    if(!root)
    {
        return;
    }
    mirror(root->left);
    mirror(root->right);
    node*temp=NULL;
    temp=root->right;
    root->right=root->left;
    root->left=temp;
    
}

int main()
{
    node*root=buildtree();
    printree(root);
    cout<<endl;
    mirror(root);
    printree(root);
}