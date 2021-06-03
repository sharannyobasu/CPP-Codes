/*      LEFT VIEW OF BINARY TREE USING QUEUE       */


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

vector <int> LeftView(node*root)
{
    vector<int> ans;
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    if(!root)
    {
        return ans;
    }
    ans.push_back(root->data);
    while(!q.empty())
    {
        node*aux=q.front();
        q.pop();
        if(aux->left)
        {
            q.push(aux->left);
        }
        if(aux->right)
        {
            q.push(aux->right);
        }
        if(q.front()==NULL)
        {
            q.pop();
            if(!q.empty())
            {
                q.push(NULL);
                node*temp=q.front();
                ans.push_back(temp->data);
            }
        }
        
    }
    return ans;
}

int main()
{
    node*root=buildtree();
    vector<int>v=LeftView(root);       
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}