/*  FIND MIDDLE ELEMENT OF A LINKED LIST 

USING TORTOISE HARE METHOD

*/


#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;
    node(int d)
    {
        data=d;
        next=NULL;
    }
};

void insert(node*&head, int d)
{
    if(head==NULL)
    {
        head=new node(d);
        return;
    }
    
    node*n=new node(d);
    n->next=head;
    head=n;
}

node*middle(node*head)
{
    if(head==NULL || head->next ==NULL)
    {
        return head;
    }
    node*fast=head->next;
    node*slow=head;
    while(fast!=NULL and fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
    
}
void print(node*&head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
}
void reverse(node*&head)
{
    if(head==NULL)
    {
        return;
    }
    node*curr=head;
    node*temp=NULL;
    node*after=NULL;
    while(curr!=NULL)
    {
        after=curr->next;
        curr->next=temp;
        temp=curr;
        curr=after;
    }
    head=temp;
}


int main()
{
    node*head=NULL;
    insert(head, 123);
    insert(head, 124);
    insert(head, 125);
    insert(head, 126);
    insert(head, 127);
    insert(head, 128);
    insert(head, 129);
    insert(head, 130);
    insert(head, 131);
    insert(head, 132);
    reverse(head);
    print(head);
    node*mid=middle(head);
    cout<<"Middle element in linked list is : "<<mid->data;
}

















