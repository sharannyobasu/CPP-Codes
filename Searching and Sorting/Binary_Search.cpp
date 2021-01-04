/* BINARY SEARCH
What is binary search?
Binary means two options.

Key factor of binary search is that if given a sorted array can I 
improve upon the time and space complexity of linear search ???

It will search for the element after comparing with the middle element of the
selected array bound.

If middle is equal to key,it will print the middle 
if key is greater than middle, then left will become middle+1

If key is less than middle, then left will remain as it is and right will become middle -1.


Binary search works best on sorted arrays but WILL NOT WORK on
linked lists coz accessing the middle element requires traversing
element one after another to the middle element. We cannot access the 
middle element without traversing the previous elements of ll.
*/

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
int key;
cout<<endl<<"Enter key : ";
    cin>>key;

    int l=0;
    int r=n-1;
    while(l<=r)
    {
        int middle=(l+r)/2;
        if(arr[middle]==key)
        {
            cout<<"Element found at index "<<middle<<endl;
            break;
        }
        else if(arr[middle]>key)
        {
            r=middle-1;
        }
        else if(arr[middle]<key)
        {
            l=middle+1;
        }
    }
    if(r<l)
    {
        cout<<"Not found !!!";
    }
}