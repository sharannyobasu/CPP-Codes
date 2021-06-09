/*  LOWEST COMMON ANCESTOR OF A BINARY TREE     

LOWEST MEANS LOWEST LEVEL COMMON NODE CONTAINING BOTH THE VALUES.

NOTE : This is considering both the node values to be present in the tree.

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

node*lowest_common_ancestor(node*root, int a, int b)
{
    if(!root)
    {
        return NULL;
    }
    if(root->data==a or root->data==b)
    {
        return root;
    }
    node* left_ans=lowest_common_ancestor(root->left, a, b);
    node* right_ans=lowest_common_ancestor(root->right, a, b);
    
    if(left_ans and right_ans)
    {
        return root;
    }
    if(left_ans)
    {
        return left_ans;
    }
    return right_ans;
}


int main()
{
    node*root=buildtree();
    printree(root);
    node*result=lowest_common_ancestor(root, 10, 7);
    cout<<endl<<result->data;
}