/* REVERSE A LINKED LIST 


Use prev, curr and next pointers to traverse between nodes

Reference video : https://youtu.be/XgABnoJLtG4

*/


#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;
    node(int d){
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


void reverse(node*&head)
{
    node*curr=head;
    node*before=NULL;
    node*after;
    while(curr!=NULL)
    {
        after=curr->next;
        curr->next=before;
        before=curr;
        curr=after;
    }
    head=before;
    
    
}

void print(node*head)

{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
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
    reverse(head);
    print(head);
    insert(head,5);
    print(head);
    
    reverse(head);
    print(head);
    
}









