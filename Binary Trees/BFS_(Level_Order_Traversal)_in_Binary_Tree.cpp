/*      BINARY TREE BFS TRAVERSAL (LEVEL ORDER TRAVERSAL)

METHOD : Time Complexity O(n)

1. We push the root in queue, and then run a while loop till queue is empty.
2. Then we take an auxillary node to copy the front of queue, print its data
and pop the front.
3. After popping, we check if there was any left node of the popped node
(we still have a copy of popped node in auxillary node)., if there is a left
node, we will push it to the queue, same for the right node.

4. So in this way the queue will store the nodes level wise and will also
print the data level wise

TIME COMPLEXITY : O(n), which is better than the previous level based print.
Level based print function is void printlevel(), see below.
*/


#include<iostream>
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

void printlevel(node*root, int k)  // this gives complexity of O(n^2)
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

void bfs(node*root) // This is the function we are talking about. This gives a better time complexity than printlevel()
{
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        node*aux=q.front();
        cout<<aux->data<<" ";
        q.pop();
        if(aux->left)
        {
            q.push(aux->left);
        }
        if(aux->right)
        {
            q.push(aux->right);
        }
    }
}

int main()
{
    node*root=builtree();
    int height=heightNode(root);
    cout<<"Height of Binary tree is : "<<height<<endl;
    bfs(root);
    
    
}