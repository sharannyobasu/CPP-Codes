

/*      DELETE nth node from Linked List        */


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


void print(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

// DELETE Nth NODE FROM LINKED LIST

void deletenthnode(node*&head, int n)
{
    node*temp=head;
    for(int i=0;i<n-2;i++)
    {
        temp=temp->next;
        
    }
    
    node*after=temp->next;
    temp->next=after->next;
    delete after;
}

int main()
{
    node*head=NULL;
    insert(head,100);
    insert(head,20);
    insert(head,30);
    insert(head,670);
    insert(head,210);
    print(head); // 210 670 30 20 100
    cout<<endl; //Third element (30) gets deleted
    deletenthnode(head, 3); // 210 670 20 100
    print(head);
    
    
}
