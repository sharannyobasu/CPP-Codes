/* CONVERT DECIMAL TO BINARY

For that we multiply p with n&1. After that we multiply p with 10 and also right shift n.


*/

#include<iostream>
#include<algorithm>
using namespace std;

int conversion(int n)
{
    int ans=0;
    int p=1;
    while(n>0)
    {
        int num=(n&1);
        ans=ans+(p*num);
        p*=10;
        n=n>>1;
    }
    
    return ans;
    
}

using namespace std;

int main()
{
int n;
cin>>n;
cout<<conversion(n);




}
