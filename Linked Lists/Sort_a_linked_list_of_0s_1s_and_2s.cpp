/*      SORT A LINKED LIST OF 0s, 1s AND 2s     

Procedure : Create an array of 3 elements and at each iteration over the nodes of the ll,
increment the (node->data)th position by 1. This will give an array of how many 0, 1 and 2s are there in total
in the linked list.

Then, change the value of nodes to 0, 1 and 2 sequentially according to the size of the array.
Eg: arr[3]={3,1,2} means there are 3 zeros, 1 one and 2 twos in the linked list.
So we empty the array by first emptying all zeros, then ones then twos.

Resultant LL : 0->0->0->1->2->2

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

void inserttail(node *&head, int d)
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

node*sort012(node*&head)
{
    int arr[3]={0};
    int i=0;
    node*temp=head;
    while(temp)
    {
        arr[temp->data]++;
        temp=temp->next;
    }
    node*after=head;
    while(after)
    {
        if(arr[i]==0)
        {
            i++;
        }
        else
        {
            after->data=i;
            arr[i]--;
            after=after->next;
        }
    }
    return head;
}


int main()
{
    node*head=NULL;
    inserttail(head, 1);
    inserttail(head, 0);
    inserttail(head, 2);
    inserttail(head, 2);
    inserttail(head, 0);
    inserttail(head, 1);
    inserttail(head, 0);
    print(head);
    node*n=sort012(head);
    print(n);
}