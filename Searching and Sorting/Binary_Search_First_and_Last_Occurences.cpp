#include<iostream>
using namespace std;


int first_occurence(int arr[], int n, int key)
{
    int l=0;
    int r=n-1;
    int ans;
    while(r>=l)
    {
        int mid=(r+l)/2;
        if(arr[mid]==key)
        {
            ans=mid;
            r=mid-1;
        }
        else if(arr[mid]>key)
        {
            r=mid-1;
        }
        else if(arr[mid]<key)
        {
            l=mid+1;
        }
        
    }
    return ans;
}

int last_occurence(int arr[], int n, int key)
{
    int l=0;
    int r=n-1;
    int ans;
    while(r>=l)
    {
        int mid=(r+l)/2;
        if(arr[mid]==key)
        {
            ans=mid;
            l=mid+1;
        }
        else if(arr[mid]>key)
        {
            r=mid-1;
        }
        else if(arr[mid]<key)
        {
            l=mid+1;
        }
        
    }
    return ans;
}



int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<endl<<"Enter key : ";
    cin>>key;
    cout<<"First occurence : "<<first_occurence(arr,n,key);
    cout<<endl<<"Last occurence : "<<last_occurence(arr,n,key);
    
}

