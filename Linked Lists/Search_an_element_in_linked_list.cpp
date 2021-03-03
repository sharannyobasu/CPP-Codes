

/*      Search a value in Linked List        */


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

void insert_at_head(node*&head, int d)
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


void print(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

// Search a node in LINKED LIST

bool search(node*&head, int key)
{
    if(head==NULL)
    {
        return false;
    }
    //node*temp=head;
    while(head!=NULL)
    {
        if(head->data==key)
        {
            return true;
        }
        head=head->next;
    }
    return false;
}

int main()
{
    node*head=NULL;
    insert_at_head(head,100);
    insert_at_head(head,20);
    insert_at_head(head,30);
    insert_at_head(head,670);
    insert_at_head(head,210);
    print(head); // 210 670 30 20 100
    if(search(head, 670))
    {
        cout<<"\nFound yeah!"; // 670 is present
    }
    else
    {
        cout<<"\nNot found !";
    }
    
    if(search(head, 112))
    {
        cout<<"\nFound yeah!";
    }
    else
    {
        cout<<"\nNot found !"; // 112 is not present
    }
    
}
