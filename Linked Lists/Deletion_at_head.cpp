/*DELETE A NODE FROM HEAD OF LINKED LIST*/


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

void inserttail(node*&head, int data)
{
    node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new node(data);
}

//DELETION OF HEAD NODE FROM LINKED LIST

void deletehead(node*&head)
{
    if(head==NULL)
    {
        return;
    }
    node*temp=head->next;
    delete head;
    head=temp;
    
}


int main()
{
    node*head=NULL;
    x:
    cout<<"What do u want to do?\n1. Insert at head\n2. Insert at tail\n3. Delete Node at head\n4. Print Linked List\n";
    int choice;
    cin>>choice;

    switch(choice)
    {
        case 1:
        cout<<"Enter number you want to insert : ";
        int num;
        cin>>num;
        insert(head, num);
        break;
        case 2:
        cout<<"Enter number you want to insert : ";
        int num1;
        cin>>num1;
        inserttail(head, num1);
        break;
        case 3:
        
        deletehead(head);
        break;
        case 4:
        print(head);
    }
    cout<<"Do you want to add more details? (Y/N) : ";
    char c;
    cin>>c;
    if(c=='Y'||c=='y')
    {
        goto x;
    }
}