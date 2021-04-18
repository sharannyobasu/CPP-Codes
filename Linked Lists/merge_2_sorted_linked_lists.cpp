/* MERGE 2 SORTED LINKED LISTS */


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

void insert(node*&head, int d){
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
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

node*merge(node*head1, node*head2)
{
    if(head1==NULL)
    {
        return head2;
    }
    if(head2==NULL)
    {
        return head1;
    }
    node*head3;
    if(head1->data < head2->data)
    {
        head3=head1;
        head3->next=merge(head1->next, head2);
    }
    else if(head1->data>head2->data)
    {
        head3=head2;
        head3->next=merge(head1, head2->next);
    }
    return head3;
}


main(void)
{
    node*head1=NULL;
    insert(head1, 9);
    insert(head1, 7);
    insert(head1, 5);
    insert(head1, 3);
    insert(head1, 1);
    print(head1);
    
    node*head2=NULL;
    insert(head2, 10);
    insert(head2, 8);
    insert(head2, 6);
    insert(head2, 4);
    insert(head2, 2);
    print(head2);
    
    node*head3=merge(head1, head2);
    print(head3);
}