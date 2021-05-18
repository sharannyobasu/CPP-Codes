/*      QUEUE IMPLEMENTATION USING ARRAYS       */


#include<iostream>
using namespace std;

//template <typename T>
class queue
{
    int *data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;
    public:
    queue(int s)
    {
        data=new int[s];
        nextIndex=0;
        firstIndex=-1;
        size=0;
        capacity=s;
    }
    
    int getsize()
    {
        return size;
    }
    bool isempty()
    {
        return size==0;
    }
    
    void enqueue(int element)
    {
        if(size==capacity)
        {
            cout<<"Queue full !"<<endl;
            return;
        }
        data[nextIndex]=element;
        nextIndex=(nextIndex+1)%capacity;
        if(firstIndex==-1)
        {
            firstIndex=0;
        }
        size++;
        
    }
    int front()
    {
        if(isempty())
        {
            cout<<"Queue empty !"<<endl;
            return 0;
        }
        return data[firstIndex];
    }
    int dequeue()
    {
        if(isempty())
        {
            cout<<"Queue empty !"<<endl;
            return 0;
        }
        
        int c=data[firstIndex];
        firstIndex=(firstIndex+1)%capacity;
        size--;
        if(size==0)
        {
            firstIndex=-1;
        }
        return c;
    }
    
    
};

int main()
{
    queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    cout<<q.front()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.getsize()<<endl;
    cout<<q.isempty()<<endl;
    cout<<q.front()<<endl;
}
