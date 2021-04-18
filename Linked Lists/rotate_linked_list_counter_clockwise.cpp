/*   ROTATE A LINKED LIST COUNTER CLOCKWISE   

Input : 
7
10 20 30 40 50 60 70
4

Output : 
50 60 70 10 20 30 40  (After 4th element numbers are pushed to the front)


*/



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
node* rotate(node* head, int k) // ROTATE COUNTER-CLOCKWISE
    {
        node*temp=head;
        for(int i=0;i<k-1;i++)
        {
            temp=temp->next;
        }
        node*checkpoint=temp;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=head;
        head=checkpoint->next;
        checkpoint->next=NULL;
        return head;
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

int main()
{
    node*head=NULL;
    int n;
    cin>>n;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        inserttail(head, a);
    }
    int k;
    cin>>k;
    head=rotate(head, k);
    
    print(head);
    
}















