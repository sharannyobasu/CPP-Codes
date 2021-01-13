

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int count[n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        int j=0;
        while(arr[i]>0)
        {
            int last_bit=(arr[i])&1;
            count[j]+=last_bit;
            j++;
            arr[i]=arr[i]>>1;
        }
    }
    int p=1;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        count[i]=count[i]%3;
        ans+=(count[i]*p);
        p=p<<1;
    }
    
    cout<<ans;
    
}