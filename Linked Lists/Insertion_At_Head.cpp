/* INSERT NODE AT HEAD OF LINKED LIST

1) First create class and declare two parts of a node, the data and link part. Now, make a constructor to initialize them.

2) Then make a function of insert node at the head. If the head is NULL, initialize head with a new node then head will point
to that only as it is the one and only node.

3) If there are existing nodes, make a new node and store it in some variable (x), and initialize its link with the head.
Then assign its address to head so that head now points to the new node x, making it the first node.

*/


#include<iostream>
using namespace std;

class Node{
    public :
    int data;
    Node* next;
    
    Node(int d)
    {
        data=d;
        next=NULL;
    }
};


void insert(Node*&head, int d)
{
    if(head==NULL)
    {
        head=new Node(d);
        return;
    }
    
    Node *n=new Node(d);
    n->next=head;
    head=n;
}

void print(Node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" -> ";
        head=head->next;
    }
    
    
    
}


int main()
{
    Node*head=NULL;
    insert(head, 32);
    insert(head, 45);
    insert(head, 26);
    insert(head, 13);
    insert(head, 70);
    insert(head, 36);
    insert(head, 42);
    
    print(head);
    
    
}