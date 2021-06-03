/*      PRINT LEFT VIEW OF BINARY TREE USING RECURSION        */


#include<bits/stdc++.h>
#include<queue>
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
    return root;
}

void printLeftView(node*root, int level)
{
    static int maxLevel=0;
    if(!root)
    {
        return;
    }
    if(level>maxLevel)
    {
        cout<<root->data<<" ";
        maxLevel=level;
    }
    printLeftView(root->left, level+1);
    printLeftView(root->right, level+1);
}



int main()
{
    node*root=buildtree();
    static int maxLevel=-1;
    printLeftView(root, 1);
    cout<<endl;
}