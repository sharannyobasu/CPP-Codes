/*      SHORTEST DISTANCE BETWEEN 2 NODES IN BINARY TREE

1. First find LCA of the 2 nodes.
2. Then find distance from lca to the first node
3. Find distance from lca to the second node.
4. Return sum of the above 2 distances.

*/


#include<iostream>
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

node*lca(node*root, int a, int b)
{
    if(!root)
    {
        return NULL;
    }
    if(root->data==a or root->data==b)
    {
        return root;
    }
    node*left_ans=lca(root->left, a, b);
    node*right_ans=lca(root->right, a, b);
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

int search(node*root, int key, int distance)
{
    if(!root)
    {
        return -1;
    }
    if(root->data==key)
    {
        return distance;
    }
    int left=search(root->left, key, distance+1);
    if(left!=-1)
    {
        return left;
    }
    int right=search(root->right, key, distance+1);
    if(right!=-1)
    {
        return right;
    }
    return -1;
}

int find_distance(node*root, int a, int b)
{
    node*lca_node=lca(root, a,b);
    int d1=search(lca_node, a, 0);
    int d2=search(lca_node, b, 0);
    return d1+d2;
}

int main()
{
    node*root=buildtree();
    printree(root);
    cout<<endl;
    cout<<find_distance(root, 7,13);
}
