/*      ZIG ZAG LEVEL ORDER TRAVERSAL BINARY TREE USING TWO STACKS   

TIME COMPLEXITY : O(n)

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

void levelOrderSpiralForm(node*root)
{
    stack<node*>s1;
    stack<node*>s2;
    s1.push(root);
    while(!s1.empty() or !s2.empty())
    {
        while(!s1.empty())
        {
            node*n=s1.top();
            s1.pop();
            cout<<n->data<<" ";
            if(n->right)
            {
                s2.push(n->right);
            }
            if(n->left)
            {
                s2.push(n->left);
            }
        }
        cout<<endl;
        while(!s2.empty())
        {
            node* n=s2.top();
            s2.pop();
            cout<<n->data<<" ";
            if(n->left)
            {
                s1.push(n->left);
            }
            if(n->right)
            {
                s1.push(n->right);
            }
        }
        cout<<endl;
    }
}


int main()
{
    node*root=buildtree();
    printree(root);
    cout<<endl;
    levelOrderSpiralForm(root);
}
