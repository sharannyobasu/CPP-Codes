/*      ZIG ZAG LEVEL ORDER TRAVERSAL BINARY TREE     */


#include<bits/stdc++.h>
#include<vector>
#include<queue>
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

vector<vector<int>> zig_zag_traversal(node*root)
{
    queue<node*>q;
    int level=0;
    vector<int>temp;
    vector<vector<int>>ans;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node*aux=q.front();
        q.pop();
        if(aux)
        {
            temp.push_back(aux->data);
            if(aux->left)
            {
                q.push(aux->left);
            }
            if(aux->right)
            {
                q.push(aux->right);
            }
        }
        else if(!aux)
        {
            if(level%2==0)
            {
                ans.push_back(temp);
            }
            else
            {
                reverse(temp.begin(), temp.end());
                ans.push_back(temp);
            }
            level++;
            while(!temp.empty())
            {
                temp.pop_back();
            }
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
    printree(root);
    cout<<endl;
    vector<vector<int>>res=zig_zag_traversal(root);
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
        cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}