/*      INTERSECTION OF 2 SORTED LL     */


#include<iostream>
#include<map>
using namespace std;

class node
{
    public:
    int data;
    node*next;
    node(int d)
    {
        data=d;
        next=NULL;
    }
};

void inserttail(node*&head, int d)
{
    if(head==NULL)
    {
        head=new node(d);
        return;
    }
    node*temp=head;
    while(temp->next)
    {
        temp=temp->next;
    }
    temp->next=new node(d);
}

void print(node*head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

// Function : Make a new node head, which will contain all the common elements of the 2 lls.

node* intersectionOfTwoLL(node*head1, node*head2)
{
    node*head=NULL;
    node*curr=NULL;
    while(head1 and head2)
    {
        if(head1->data==head2->data)
        {
            if(!head)
            {
                head=new node(head1->data);
                curr=head;
            }
            else{
                curr->next=new node(head1->data);
                curr=curr->next;
            }
            head1=head1->next;
            head2=head2->next;
        }
        else{
            if(head1->data>head2->data)
            {
                head2=head2->next;
            }
            else{
                head1=head1->next;
            }
        }
    }
    return head;
}

int main()
{
    node*head1=NULL;
    node*head2=NULL;
    inserttail(head1, 1);
    inserttail(head1, 2);
    inserttail(head1, 3);
    inserttail(head1, 4);
    inserttail(head1, 5);
    inserttail(head1, 7);
    inserttail(head2, 2);
    inserttail(head2, 3);
    inserttail(head2, 5);
    inserttail(head2, 7);
    inserttail(head2, 9);
    node*n=intersectionOfTwoLL(head1, head2);
    print(n);
}