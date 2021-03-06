/*  REVERSE A LINKED LIST USING RECURSION OPTIMIZED 

Reference : Algo++

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

node* reverserecursive(node*head)  // Reverse a linked list using recursive method
{
    if(head==NULL or head->next==NULL)
    {
        return head;
    }
    
    node*shead=reverserecursive(head->next);
    
    node*temp=head->next;
    temp->next=head;
    head->next=NULL;
    return shead;
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
    head=reverserecursive(head);
    print(head);
    
    
}











