/*  APPEND LAST K ELEMENTS TO FRONT OF LINKED std::list     */


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

void insert_at_end(node*&head, int d)
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
    temp->next=new node(d);
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
void last_element_to_front(node*&head)  //  Remove last element and push it to the head of linked list
{
    node*temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    node*last=temp->next;
    temp->next=NULL;
    last->next=head;
    head=last;
}




int main()
{
    node*head=NULL;
    int n;
    cin>>n;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        insert_at_end(head, a);
    }
    int k;
    cin>>k;
    while(k--)
    {
        last_element_to_front(head);
    }
    
    print(head);
    
}















