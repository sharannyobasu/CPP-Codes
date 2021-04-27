/*      CHECK IF LINKED LIST IS PALINDROME      

Intuition : Find the middle of ll, reverse the 2nd half of ll and 
compare the first half of ll with reversed second half.

Time complexity : 0(n) //n/2 iterations for finding mid, n/2 for
reversing the second half of ll, and n/2 for comparing the both halves

Space complexity : 0(1) // no extra space used.
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
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

bool palindrome(node*head)
{
    node*slow=head;
    node*fast=head;
    while(fast->next && fast->next->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    node*mid=slow->next;
    node*temp=head;
    node*curr=mid;
    node*nex=mid;
    node*prev=NULL;
    while(curr)
    {
        nex=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nex;
    }
    while(temp!=mid && prev)
    {
        if(temp->data==prev->data)
        {
            temp=temp->next;
            prev=prev->next;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    node*head=NULL;
    inserttail(head,1);
    inserttail(head,2);
    inserttail(head,3);
    inserttail(head,4);
    
    inserttail(head,3);
    inserttail(head,2);
    inserttail(head,1);
    print(head);
    
    if(palindrome(head))
    {
        cout<<"It is palindrome !"<<endl;
    }
    else
    {
        cout<<"Not a palindrome !"<<endl;
    }
}