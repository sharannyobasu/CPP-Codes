#include<iostream>

using namespace std;

bool sorted(int a[],int n)
{
    if(n==0 or n==1)
    {
        return true;
    }
    if(a[0]<a[1] && sorted(a+1,n-1))
    {
        return true;
    }
    return false;

}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(sorted(a,n))
    {
        cout<<"Array is sorted !";
    }
    else
    {
        cout<<"Not sorted !";
    }
}