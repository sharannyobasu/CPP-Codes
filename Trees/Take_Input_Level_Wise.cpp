/*      TAKE INPUT IN BINARY TREE LEVEL WISE        */


#include<iostream>
#include<vector>
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

void printree(node*root)
{
    if(!root)
    {
        return;
    }
    
    cout<<root->data<<" -> ";
    if(root->left)
    {
        cout<<"Left : "<<root->left->data<<", ";
    }
    if(root->right)
    {
        cout<<"Right : "<<root->right->data<<" ";
    }
    cout<<endl;
    printree(root->left);
    printree(root->right);
}

node*takeInputLevelWise()
{
    int rootdata;
    cout<<"Enter root data : ";
    cin>>rootdata;
    
    if(rootdata==-1)
    {
        return NULL;
    }
    queue<node*>q;
    node*root=new node(rootdata);
    q.push(root);
    while(!q.empty())
    {
        node*aux=q.front();
        q.pop();
        cout<<"Enter left child of "<<aux->data<<" : ";
        int leftchild;
        cin>>leftchild;
        if(leftchild!=-1)
        {
            node*child=new node(leftchild);
            aux->left=child;
            q.push(child);
        }
        cout<<"Enter right child of "<<aux->data<<" : ";
        int rightchild;
        cin>>rightchild;
        if(rightchild!=-1)
        {
            node*child=new node(rightchild);
            aux->right=child;
            q.push(child);
        }
    }
    return root;
}

int main()
{
    node*root=takeInputLevelWise();
    printree(root);
}
