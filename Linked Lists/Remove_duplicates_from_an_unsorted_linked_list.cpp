/*      REMOVE DUPLICATES FROM AN UNSORTED LINKED LIST    

WITH THE USE OF MAPS. */


#include<iostream>
#include<map>
using namespace std;

class node
{
    public:
    int data;
    node*next;
    node(int d)
    {
        data=d;
        next=NULL;
    }
};

void inserttail(node*&head, int d)
{
    if(head==NULL)
    {
        head=new node(d);
        return;
    }
    node*temp=head;
    while(temp->next)
    {
        temp=temp->next;
    }
    temp->next=new node(d);
}

void print(node*head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

// Remove duplicates function : Just compare nth node with n+1th node, if they are equal, delete n+1th node. else, go forward.

void removeDuplicatesfromUnsorted(node*&head)
{
    map<int, int>m;
    node*curr=head;
    node*prev=curr;
    m[curr->data]=1;
    curr=curr->next;
    while(curr)
    {
        if(m[curr->data])
        {
            prev->next=curr->next;
            delete curr;
        }
        else
        {
            m[curr->data]=1;
            prev=curr;
        }
        curr=curr->next;
    }
}

int main()
{
    node*head=NULL;
    inserttail(head, 7);
    inserttail(head, 2);
    inserttail(head, 5);
    inserttail(head, 2);
    inserttail(head, 3);
    inserttail(head, 4);
    inserttail(head, 2);
    inserttail(head, 5);
    inserttail(head, 1);
    inserttail(head, 3);
    inserttail(head, 1);
    removeDuplicatesfromUnsorted(head);
    print(head);
}