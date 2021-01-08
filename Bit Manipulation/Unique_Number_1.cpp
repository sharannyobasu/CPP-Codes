/* UNIQUE NUMBER 1st Method 

Here we XOR every element in the array to see which number is coming only once
or which one is unique. By XORing, the repeating numbers get cancelled.
Example : 7^7 =0, 1^1=0.

*/

#include<iostream>
using namespace std;

int main()
{
    int arr[]={2,3,4,5,6,2,3,4,6};
    int n=sizeof(arr)/sizeof(int);
    
    int ans=arr[0];
    
    for(int i=1;i<n;i++)
    {
        ans=ans^arr[i];
    }
    
    cout<<ans;
}