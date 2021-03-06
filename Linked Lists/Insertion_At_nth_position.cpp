/*  Insert a node at nth position

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

void insertatn(node*&head, int n, int d)  // Insert a node at nth position (head, position, value)
{
    if(head==NULL)
    {
        head=new node(n);
        return;
    }
    node*temp=head;
    for(int i=0;i<n-2;i++)
    {
        temp=temp->next;
    }
    node*after=new node(d);
    after->next=temp->next;
    temp->next=after;
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
    //head=reverserecursive(head);
    insertatn(head, 3, 45);
    print(head);
    
    
}











