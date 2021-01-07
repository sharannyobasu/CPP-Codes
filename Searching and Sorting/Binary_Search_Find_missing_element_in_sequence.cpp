/* FIND MISSING NUMBER IN AP SERIES 

Detailed explaination is provided in gfg site.

Link : https://www.geeksforgeeks.org/find-missing-number-arithmetic-progression/

*/



#include<iostream>
#include<algorithm>
using namespace std;

int find_missing_element(int arr[], int s, int n, int diff)
{
    if(n<=s)
    {
        return -1;
    }
    int mid=(n+s)/2;
    if(arr[mid]-arr[mid-1]!=diff) // check whether element before mid is missing
    {
        return (arr[mid-1]+diff);
    }
    else if(arr[mid+1]-arr[mid]!=diff) // check whether element after mid is missing.
    {
        return (arr[mid]+diff);
    }
    else if((arr[mid]-arr[0])/diff==mid)  //to check if there is any missing value from start to mid.
    {
        return find_missing_element(arr,mid+1, n, diff); //calls recursively to right part (mid+1 to end)
    }
    else
    {
        return find_missing_element(arr,s,mid-1,diff); //calls recursively to left part (start to mid-1)
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int diff=(arr[n-1]-arr[0])/n;
    cout<<"Missing value is : "<<find_missing_element(arr,0, n-1, diff);
    
}