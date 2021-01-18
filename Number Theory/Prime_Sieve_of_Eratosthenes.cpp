#include<iostream>
#define ll long long
#include<algorithm>
using namespace std;

void prime_sieve(int p[1000000])
{
    p[0]=p[1]=0;
    p[2]=1;
    for(int i=3;i<1000000;i+=2)
    {
        p[i]=1;
    }
    
    for(ll i=3;i<1000000;i++)
    {
        if(p[i]==1)
        {
            for(ll j=i*i;j<1000000;j+=i)
            {
                p[j]=0;
            }
        }
    }
}

int main()
{
    int p[1000000]={0};
    int csum[1000000]={0};
    prime_sieve(p);
    
    for(int i=1;i<1000000;i++)
    {
        csum[i]=csum[i-1]+p[i];
    }
    int t;
    cin>>t;
    while(t--)
    {
        int start;
        int end;
        cin>>start>>end;
        cout<<csum[end]-csum[start-1]<<endl;
    }
    
}