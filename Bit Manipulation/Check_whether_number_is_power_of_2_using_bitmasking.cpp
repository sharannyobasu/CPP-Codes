/* Check whether a number is power of 2 using bitmasking 

If the number has only 1 set bit, it means the number is 
power of 2, otherwise its not.

For this, we need to count set bits in number.
if count is 1, then number is power of 2, otherwise its not.
*/

#include<iostream>
#include<algorithm>
using namespace std;

void power_of_2(int n)
{
    int count=0;
    while(n>0)
    {
        count++;
        n=n&(n-1);
    }
    
    if(count==1)
    {
        cout<<"Power of 2";
    }
    else
    {
        cout<<"Not power of 2";
    }
    
}

using namespace std;

int main()
{
int n;
cin>>n;
power_of_2(n);


}