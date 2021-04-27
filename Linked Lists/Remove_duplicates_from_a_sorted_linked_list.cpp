/*      REMOVE DUPLICATES FROM A SORTED LINKED LIST     */


#include<iostream>
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

// Remove duplicates function : Just compare nth node with n+1th node, if they are equal, delete n+1th node. Else, go forward.

void removeDuplicates(node*&head)
{
    node*temp=head;
    while(temp->next)
    {
        if(temp->data==temp->next->data)
        {
            node*n=temp->next;
            temp->next=n->next;
            delete n;
        }
        else
        {
            temp=temp->next;
        }
    }
}

int main()
{
    node*head=NULL;
    inserttail(head, 1);
    inserttail(head, 2);
    inserttail(head, 2);
    inserttail(head, 2);
    inserttail(head, 3);
    inserttail(head, 4);
    inserttail(head, 5);
    inserttail(head, 5);
    inserttail(head, 6);
    removeDuplicates(head);
    print(head);
}