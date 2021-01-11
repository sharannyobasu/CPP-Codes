/* COUNTING NUMBER OF SET BITS OF A NUMBER

Method 2 : Just take the number n, AND with (n-1). This will remove the
rightmost set bit will keep removing the right most set bit untill number reaches 0.
Increment count at each loop.

*/


#include <iostream>

using namespace std;

void checksetbit(int n)
{
    int count=0;
    while(n>0)
    {
        count++;
        n=n&(n-1);
    }
    cout<<count;
}

int main()
{
    int n;
    cin>>n;
    
    checksetbit(n);
    return 0;
}
