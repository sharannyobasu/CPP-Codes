/*      PRINT HEIGHT OF A BINARY TREE

METHOD : RECURSION, where height of left and right node is compared
and max value out of them, + 1 is returned */


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

int heightNode(node*root)
{
    if(!root)
    {
        return 0;
    }
    int heightleft=0;
    int heightright=0;
    heightleft=heightNode(root->left);
    heightright=heightNode(root->right);
    int x=max(heightleft, heightright);
    return x+1;
    
}

int main()
{
    node*root=builtree();
    cout<<"Height of Binary tree is : "<<heightNode(root);
    
    //input : 8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
    // Output : Height of binary tree is 4
}