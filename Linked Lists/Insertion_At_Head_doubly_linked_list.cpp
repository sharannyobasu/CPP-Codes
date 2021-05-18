/*      INSERTION AT HEAD OF A DOUBLY LINKED LIST        */


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

void inserthead(node*&head, int t)
{
    if(!head)
    {
        head=new node(t);
        return;
    }
    node*temp=head;
    node*n=new node(t);
    n->next=head;
    head=n;
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


int main()
{
    node*head=NULL;
    inserthead(head,1);
    inserthead(head,2);
    inserthead(head,3);
    inserthead(head,4);
    inserthead(head,5);
    print(head);

}