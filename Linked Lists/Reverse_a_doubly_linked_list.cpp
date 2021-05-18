/*      REVERSE A DOUBLY LINKED LIST        */


#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node*next;
    node*prev;
    node(int d)
    {
        data=d;
        next=NULL;
        prev=NULL;
    }
};

void inserttail(node*&head, int t)
{
    if(!head)
    {
        head=new node(t);
        return;
    }
    node*temp=head;
    while(temp->next)
    {
        temp=temp->next;
    }
    temp->next=new node(t);
    temp->next->prev=temp;
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


/*      REVERSE FUNCTION        */

node*reversedll(node*&head)
{
    node*p=NULL;
    node*curr=head;
    while(curr)
    {
        curr->prev=curr->next;
        curr->next=p;
        p=curr;
        curr=curr->prev;  // V. Imp
    }
    
    return p;
}


int main()
{
    node*head=NULL;
    inserttail(head,1);
    inserttail(head,2);
    inserttail(head,3);
    inserttail(head,4);
    inserttail(head,5);
    print(head);
    printback(head);
    node*n=reversedll(head);
    print(n);
}