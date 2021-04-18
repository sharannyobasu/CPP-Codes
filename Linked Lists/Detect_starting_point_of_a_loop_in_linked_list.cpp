/*      DETECT STARTING POINT OF A LOOP IN LINKED LIST       

Eg; If the linked list is 1 2 3 4 5 6 7 4 5 6 7.....(4 5 6 7 is in loop)
Output : 4  //as loop starts from 4 (1 2 3 4 5 6 7, 4 5 6 7, 4 5 6 7....)

*/

#include<iostream>
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
    if(head==NULL)
    {
        return;
    }
    
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

node*start(node*&head)
{
    node*slow=head;
    node*fast=head;
    slow=slow->next;
    fast=fast->next->next;
    while(slow && fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            break;
        }
    }
    fast=head;
    while(slow!=fast)
    {
        slow=slow->next;
        fast=fast->next;
    }
    return fast;
}


main(void)
{
    node*head=NULL;
    inserttail(head, 1);
    inserttail(head, 2);
    inserttail(head, 3);
    inserttail(head, 4);
    inserttail(head, 5);
    inserttail(head, 6);
    inserttail(head, 7);
    node*tail=head;
    while(tail->next)
    {
        tail=tail->next;
    }
    tail->next=head->next->next->next;
    //print(head);
    node*n=start(head);
    cout<<"Starting point of the loop is : "<<n->data;
    
}