#include<iostream>
using namespace std;

float sqroot(int n,int p)
{
    int s=0;
    int e=n-1;
    float ans=-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(mid*mid==n)
        {
            return mid;
        }
        if(mid*mid<n)
        {
            s=mid+1;
            ans=mid;
        }
        else if(mid*mid>n)
        {
            e=mid-1;
            ans=mid;
            
            
        }
    }
    
    float inc=0.1;
    for(int i=0;i<p;i++)
    {
        while(ans*ans<=n)
        {
            ans+=inc;
        }
        ans=ans-inc;
        inc=inc*0.1;
    }
    return ans;
}


int main()
{
    int n;
    cin>>n;
    int p;
    cout<<"Correct upto? : ";
    cin>>p;
    
    cout<<"Square root is : "<<sqroot(n,p);
}