#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int n;
    cin>>n;
    int ans=1;
    while(n>0)
    {
        
        if(n&1)
        {
            ans=ans*a;
        }
        n=(n>>1);
        a=a*a;
        
    }
    cout<<ans;
}