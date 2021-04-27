/*      STACK IMPLEMENTATION USING LINKED LISTS     */


#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node*next;
    node(int data)
    {
        this->data=data;
        next=NULL;
    }
};

class Stack
{
    public:
    node*head;
    int size;
    
    Stack()
    {
        head=NULL;
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
    
    void push(int d)
    {
        if(head==NULL)
        {
            head=new node(d);
            size++;
            return;
        }
        node*n=new node(d);
            n->next=head;
            head=n;
            size++;
    }
    
    void pop()
    {
        if(head==NULL)
        {
            cout<<"Underflow. Cannot Pop !"<<endl;
            return;
        }
        cout<<"Element popped : "<<head->data<<endl;
        node*n=head->next;
        delete head;
        head=n;
        size--;
    }
    
    int top()
    {
        if(head==NULL)
        {
            return -1;
        }
        return head->data;
    }
    
};


int main()
{
    Stack s1;
    cout<<s1.isempty()<<endl; //1 as stack is empty
    s1.push(63);    //63
    s1.push(53);    //53 63
    s1.push(43);    //43 53 63
    s1.push(33);    //33 43 53 63
    s1.push(23);    //23 33 43 53 63 (Top to bottom)
    
    cout<<s1.top()<<endl; //23
    cout<<s1.getSize()<<endl; //5
    s1.pop(); //23 popped. Existing stack  33 43 53 63
    s1.pop(); //33 popped. Existing stack  43 53 63
    cout<<s1.top()<<endl; //43
    cout<<s1.getSize()<<endl; //3
    cout<<s1.isempty()<<endl; //0 (As stack is not empty)
    s1.pop(); //43 popped. Existing stack  53 63
    s1.pop(); //53 popped. Existing stack  63
    s1.pop(); //63 popped. Existing stack  nil
    s1.pop(); //Nothing to pop as stack has no elements.
    
    
}