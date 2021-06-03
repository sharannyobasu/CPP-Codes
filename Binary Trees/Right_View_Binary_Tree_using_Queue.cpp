/*      RIGHT VIEW OF BINARY TREE USING QUEUE       */


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

vector <int> RightView(node*root)
{
    vector<int> ans;
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    if(!root)
    {
        return ans;
    }
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
            ans.push_back(aux->data);
            q.pop();
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        
    }
    return ans;
}

int main()
{
    node*root=buildtree();
    vector<int>v=RightView(root);       
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}