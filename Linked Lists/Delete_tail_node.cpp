/*  Delete tail node from linked list

Reference video : Algo++


*/


#include<iostream>
using namespace std;

class node{
    public :
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

void deletetail(node*&head)  // delete tail node from linked list
{
    node*temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    node*after=temp->next;
    temp->next=NULL;
    delete after;
}

int main()
{
    node*head=NULL;
    insert(head, 12);
    insert(head, 52);
    insert(head, 25);
    insert(head, 2);
    insert(head, 112);
    insert(head, 67);
    print(head);
    deletetail(head);
    print(head);
    
    
}











