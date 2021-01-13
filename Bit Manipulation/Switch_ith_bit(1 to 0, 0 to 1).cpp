#include<iostream>
using namespace std;

int clearkey(int n, int k)
{
    int i=~(1<<k);
    n=(n&i);
    return n;
}

int updatebit(int n, int k)
{
    int i=(1<<k);
    n=(n^i);
    return n;
}

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    //cout<<clearkey(n,k);
    cout<<updatebit(n,k);
}
