/*      CREATING A TREE AND PRINTING ELEMENTS       */


#include<iostream>
#include<vector>
using namespace std;


class TreeNode
    {
        public:
        int data;
        vector <TreeNode*> children;
        TreeNode(int d)
        {
            data=d;
        }
};

void print(TreeNode* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" : ";
    for(int i=0;i<root->children.size();i++)
    {
        cout<<root->children[i]->data<<" ";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++)
    {
        print(root->children[i]);
    }
}

int main()
{

    TreeNode*root= new TreeNode(30);
    TreeNode* node1=new TreeNode(40);
    TreeNode* node2=new TreeNode(50);
    root->children.push_back(node1);
    root->children.push_back(node2);
    TreeNode* node3=new TreeNode(60);
    node1->children.push_back(node3);
    print(root);
    
    
}