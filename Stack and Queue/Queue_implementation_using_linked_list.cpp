/*      IMPLEMENT QUEUE USING LINKED LISTS      */


#include<iostream>
using namespace std;

class node{
    public :
    int data;
    node*next;
    node(int d)
    {
        data=d;
        next=NULL;
    }
};

class Queue
{
    node*head;
    node*tail;
    int size;
    public:
    Queue()
    {
        head=NULL;
        tail=NULL;
        size=0;
    }
    
    int getSize()
    {
        return size;
        
    }
    
    bool isempty()
    {
        return size==0;
    }
    
    void enqueue(int d)
    {
        if(!head)
        {
            head=new node(d);
            tail=head;
            size++;
            return;
            
        }
        
        tail->next=new node(d);
        tail=tail->next;
        size++;
    }
    
    int front()
    {
        if(!head)
        {
            return -1;
        }
        return head->data;
    }
    
    void dequeue()
    {
        node*n=head->next;
        delete head;
        head=n;
        size--;
        if(size==0)
        {
            head==NULL;
            tail==NULL;
        }
        
    }
};

int main()
{
    
    Queue q;
    cout<<q.isempty()<<endl;
    q.enqueue(46);
    q.enqueue(47);
    q.enqueue(48);
    q.enqueue(49);
    q.enqueue(50);
    q.enqueue(51);
    cout<<q.front()<<endl;
    cout<<q.getSize()<<endl;
    q.dequeue();
    cout<<q.front()<<endl;
    cout<<q.getSize()<<endl;
    cout<<q.isempty()<<endl;
}