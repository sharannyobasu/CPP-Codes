/*      IMPLEMENTATION OF STACK (PUSH, POP, ISEMPTY, SIZE, OVERFLOW, UNDERFLOW )        */


#include<iostream>
using namespace std;


class stackusingarray{
    int *data;
    int nextIndex;
    int capacity;
    public:
    
    stackusingarray(int totalSize)
    {
        data=new int[totalSize];
        nextIndex=0;
        capacity=totalSize;
    }
    
    // return number of elements present in my stack
    
    void size()
    {
        cout<<"Size of stack is : "<<nextIndex<<endl;
    }
    
    void isempty()
    {
        
        if(nextIndex==0)
        {
            cout<<"Stack is empty"<<endl;
          
        }
        else
        {
            cout<<"Stack is not empty"<<endl;
           
        }
        
        
      
    }
    
    void push(int element)
    {
        if(nextIndex==capacity)
        {
            cout<<"Overflow ! Can't push "<<element<<endl;
            return;
        }
        data[nextIndex]=element;
        cout<<"Element pushed : "<<element<<endl;
        nextIndex++;
    }
    
    
    void pop()
    {
        if(nextIndex==0)
        {
            cout<<"Underflow ! Cannot pop anymore"<<endl;
            return;
        }
        nextIndex--;
        cout<<"Element popped : "<<data[nextIndex]<<endl;
    }
    
    void top()
    {
        cout<<"Top of the stack is : "<<data[nextIndex-1]<<endl;
    }
};

int main()
{
    stackusingarray s(4);
    s.pop();
    s.push(13);
    s.push(81);
    s.push(20);
    s.push(109);
    s.push(46);
    
    
    s.top();
    s.size();
    s.pop();
    s.size();
    s.pop();
    s.pop();
    s.push(31);
    s.size();
    s.isempty();
}