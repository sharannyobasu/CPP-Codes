/*  FIND k-th NODE FROM END OF LINKED LIST USING 2 POINTERS

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

node*kthelementfromend(node*head, int k)
{
    node*fast=head;
    node*slow=head;
    for(int i=0;i<k;i++)
    {
        fast=fast->next;
    }
    
    while(fast!=NULL)
    {
        fast=fast->next;
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
    print(head);
    node*kthelement=kthelementfromend(head, 6);
    cout<<"The kth element from end of linked list is : "<<kthelement->data<<endl;
    node*kthelement1=kthelementfromend(head, 4);
    cout<<"The kth element from end of linked list is : "<<kthelement1->data<<endl;
}

















