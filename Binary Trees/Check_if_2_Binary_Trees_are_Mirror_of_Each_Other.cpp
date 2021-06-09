/*      CHECK IF 2 BINARY TREES ARE MIRROR OF EACH OTHER   

TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(h) (h -> height of tree)
WORST-CASE SPACE COMPLEXITY : O(N), when tree is highly skewed

*/


#include<bits/stdc++.h>
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

bool check_mirror(node*root1, node*root2)
{
    if(!root1 and !root2)
    {
        return true;
    }
    if(!root1 or !root2)
    {
        return false;
    }
    if(root1 and root2)
    {
        return (root1->data==root2->data and check_mirror(root1->left, root2->right) and check_mirror(root1->right, root2->left));
    }
}

int main()
{
    node*root1=buildtree();
    node*root2=buildtree();
    printree(root1);
    cout<<endl;
    printree(root2);
    cout<<endl;
    if(check_mirror(root1, root2))
    {
        cout<<"Trees are mirror of each other :)";
    }
    else
    {
        cout<<"Trees aren't mirror of each other :(";
    }
}