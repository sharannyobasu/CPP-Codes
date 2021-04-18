/*      ADD 1 TO A NUMBER REPRESENTED BY A LINKED LIST       

Input : 3->4->5->1->0->9
Output : 3->4->5->1->1->0  (As 345109 + 1 = 345110)

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


node* add1(node*head)
{
    if(head->next==NULL)
    {
        if(head->data==9)
        {
            head->data=10;
            return head;
        }
        else
        {
            head->data++;
            return head;
        }
    }
    
    head->next=add1(head->next);
    
    node*nex=head->next;
    if(nex->data>=10)
    {
        nex->data=0;
        head->data++;
    }
    return head;
    
}


main(void)
{
    node*head=NULL;
    inserttail(head, 9);
    inserttail(head, 9);
    inserttail(head, 9);
    inserttail(head, 9);
    inserttail(head, 9);
    inserttail(head, 9);
    print(head);
    node*nex=add1(head);
    if(nex->data==10)
    {
        node*nhead=new node(1);
        nhead->next=nex;
        nex->data=0;
        nex=nhead;
    }
    print(nex);
}