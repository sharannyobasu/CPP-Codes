/*      CHECK WHETHER BINARY TREE IS HEIGHT BALANCED TREE OR NOT        */


#include<bits/stdc++.h>
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

node* buildtree()
{
    int rootdata;
    //cout<<"Enter root data ";
    cin>>rootdata;
    if(rootdata==-1)
    {
        return NULL;
    }
    node*root=new node(rootdata);
    root->left=buildtree();
    root->right=buildtree();
}

int height(node*root)
{
    if(!root)
    {
        return 0;
    }
    return 1+(max(height(root->left), height(root->right)));
}

bool heightbalanced(node*root)
{
    if(!root)
    {
        return 1;
    }
    int leftheight=height(root->left);
    int rightheight=height(root->right);
    if(abs(leftheight-rightheight)<=1 and heightbalanced(root->left) and heightbalanced(root->right))
    {
        return 1;
    }
    return 0;
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


int main()
{
    node*root=buildtree();
    printree(root);
    cout<<endl<<height(root);
    if(heightbalanced(root))
    {
        cout<<endl<<"Tree is balanced !";
    }
    else
    {
        cout<<endl<<"Not balanced";
    }
}