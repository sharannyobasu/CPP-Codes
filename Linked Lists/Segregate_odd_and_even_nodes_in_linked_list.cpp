/*      SEGREGATE ODD AND EVEN NODES IN A LINKED LIST       */


#include<iostream>
using namespace std;

class node
{
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
    node*temp=head;
    while(temp->next)
    {
        temp=temp->next;
    }
    temp->next=new node(d);
}

void print(node*head)

{
    node*temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


node* segregate_odd_and_even(node *head) //segregate_odd_and_even function definition
{
    node*oddhead=NULL;
    node*evenhead=NULL;
    node*oh=NULL;
    node*eh=NULL;
    while(head)
    {
        if(head->data%2==0)
        {
            if(evenhead==NULL)
            {
                evenhead=head;
                eh=evenhead;
            }
            else
            {
                eh->next=head;
                eh=head;
            }
        }
        else
        {
            if(oddhead==NULL)
            {
                oddhead=head;
                oh=oddhead;
            }
            else
            {
                oh->next=head;
                oh=head;
            }
        }
        head=head->next;
    }
    
    if(evenhead && oddhead)
    {
        eh->next=oddhead;
        oh->next=NULL;
        return evenhead;
    }
    else if(oddhead)
    {
        return oddhead;
    }
    else
    {
        return evenhead;
    }
    
}

main(void)
{
    node*head=NULL;
    insert(head,10);
    insert(head,11);
    insert(head,12);
    insert(head,13);
    insert(head,14);
    insert(head,15);
    insert(head,16);
    print(head);
    node*n=segregate_odd_and_even(head);  //function called
    print(n);
}
















