/*      PRINT NODES OF A BINARY TREE LEVEL WISE

METHOD : 

1. First we will calculate the height of the binary tree.

2. We will input k, the level whose nodes we want to print and 
pass it as a recursive function func(node*root, k).

As the function calls to the left or right nodes like func(root->left, k-1),
func(root->right, k-1), k will decrease and when k reaches 1,
we know we have to print root value. We then print root value and then return

We will do this for all levels from 1 to k with the help of a for loop.
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

void printlevel(node*root, int k)
{
    if(!root || k<1)
    {
        return;
    }
    if(k==1)
    {
        cout<<root->data<<" ";
        return;
    }
    printlevel(root->left, k-1);
    printlevel(root->right, k-1);
}

int main()
{
    node*root=builtree();
    int height=heightNode(root);
    cout<<"Height of Binary tree is : "<<height<<endl;
    cout<<"Level wise nodes of the binary tree are : "<<endl;
    for(int i=1;i<=height;i++)
    {
        cout<<"Level "<<i<<" : ";
        printlevel(root, i);
        cout<<endl;
    }
    
    //input : 8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
    // Output : Height of binary tree is 4
}