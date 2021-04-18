/*      DETECT LOOP IN LINKED LIST USING TWO POINTER METHOD (TORTOISE HARE METHOD)      */


#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;
    node(int num)
    {
        data=num;
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

void inserttail(node*&head, int d)
{
    if(head==NULL)
    {
        head=new node(d);
        return;
    }
    node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        
    }
    node*n=new node(d);
    temp->next=n;
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

bool detect_loop(node*head)  //loop detection function
{
    node*slow=head;
    node*fast=head;
    while(slow && fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            return 1;
        }
    }
    return 0;
}



int main()
{
    node*head=NULL;
    insert(head,88);
    insert(head,87);
    insert(head,86);
    insert(head,85);
    insert(head,84);
    insert(head,83);
    inserttail(head, 89);
    inserttail(head, 90);
    inserttail(head, 91);
    node*tail=head;
    while(tail->next)
    {
        tail=tail->next;
    }
    tail->next=head->next->next->next;      // loop creation step
    //print(head);
    if(detect_loop(head))
    {
        cout<<"Loop present"<<endl;
        return 0;
    }
    cout<<"Loop absent";
    
}