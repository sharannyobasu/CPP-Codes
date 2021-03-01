/* BINARY SEARCH USING RECURSION */


#include<iostream>
using namespace std;

int binary_search(int a[],int left, int right,int key)
{
    
    
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(a[mid]==key)
        {
            return mid;
        }
        else if(a[mid]>key)
        {
            return binary_search(a,left, mid-1,key);
        }
        else
        {
            return binary_search(a,mid+1,right,key);
        }
    }
    

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
    int key;
    cin>>key;
    cout<<binary_search(a,0,n,key);
}