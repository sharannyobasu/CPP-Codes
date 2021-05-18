/*      FIND PAIRS WITH GIVEN SUM IN DOUBLY LINKED LIST     */


#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node*next;
    node*prev;
    node(int d)
    {
        data=d;
        next=NULL;
        prev=NULL;
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
    node*n=new node(d);
    temp->next=n;
    n->prev=temp;
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

void checksum(node*head, int sum)
{
    node*first=head;
    node*last=head;
    int count=0;
    while(last->next)
    {
        last=last->next;
    }
    while(first and last and first!=last and last->next!=first)
    {
        if(first->data+last->data==sum)
        {
            count++;
            cout<<"("<<first->data<<", "<<last->data<<")"<<endl;
            first=first->next;
            last=last->prev;
        }
        else if(first->data+last->data>sum)
        {
            last=last->prev;
        }
        else
        {
            first=first->next;
        }
    }
    if(!count)
    {
        cout<<"No pairs found !"<<endl;
    }
}

int main()
{
    node*head=NULL;
    inserttail(head,1);
    inserttail(head,2);
    inserttail(head,3);
    inserttail(head,4);
    
    inserttail(head,5);
    inserttail(head,6);
    inserttail(head,7);
    print(head);
    int k;
    cout<<"Enter sum : "<<endl;
    cin>>k;
    checksum(head, k);
    
}