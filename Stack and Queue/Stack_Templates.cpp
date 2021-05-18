/*      STACKS USING TEMPLATES      */


#include<iostream>
using namespace std;

template <typename T, typename V> // T and V can be any data type

class Pair{
    T x;
    V y;
    
    public:
    void setX(T x){
        this->x=x;
    }
    T getX()
    {
        return x;
    }
    void setY(V y)
    {
        this->y=y;
    }
    V getY()
    {
        return y;
    }
};


int main()
{
    Pair <int, double> p1;
    p1.setX(20);
    p1.setY(45.566);
    cout<<p1.getX()<<" "<<p1.getY()<<endl;
    Pair <double,double>p2;
    p2.setX(12.21);
    p2.setY(82.01);
    cout<<p2.getX()<<" "<<p2.getY()<<endl;
    
}