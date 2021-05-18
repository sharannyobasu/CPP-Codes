/*      CYCLICALLY LEFT ROTATE (ANTI-CLOCK) DOUBLY LINKED LIST BY N NODES        */


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

void inserthead(node*&head, int t)
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


node* rotate(node*&head, int k)
{
    int c=1;
    node*curr=head;
    while(c<k and curr->next)
    {
        curr=curr->next;
        c++;
    }
    node*stamp=curr;
    while(curr->next)
    {
        curr=curr->next;
    }
    curr->next=head;
    head->prev=curr;
    head=stamp->next;
    stamp->next=NULL;
    head->prev=NULL;
    return head;
}


int main()
{
    node*head=NULL;
    inserthead(head,6);
    inserthead(head,2);
    inserthead(head,9);
    inserthead(head,10);
    inserthead(head,13);
    print(head);
    node*n=rotate(head, 2);
    print(n);

}