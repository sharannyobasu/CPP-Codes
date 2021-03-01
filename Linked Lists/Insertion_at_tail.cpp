/* INSERT NODE AT THE BEGINNING OR AT THE END OF LINKED LIST*/


#include<iostream>
using namespace std;
class node{
 public:
 
 int data;
 node*next=NULL;
 node(int d)
 {
     data=d;
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
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}


void inserttail(node*&head, int d)
{
    node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    
    node*tail=new node(d);
    temp->next=tail;
    
}

int main()
{
    node*head=NULL;
    insert(head, 77);
    insert(head, 65);
    insert(head, 81);
    insert(head, 23);
    inserttail(head, 100);
    print(head);
}