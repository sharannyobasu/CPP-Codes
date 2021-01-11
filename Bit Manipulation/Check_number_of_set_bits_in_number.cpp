/* COUNTING NUMBER OF SET BITS OF A NUMBER

Method 1 : Just take the number, AND with 1 (to see whether last
digit is set or not) and if n&1 returns 1, increment count, else
right shift n by 1 and move to the next iteration.

*/


#include <iostream>

using namespace std;

void checksetbit(int n)
{
    int count=0;
    while(n>0)
    {
        if(n&1) //returns 1 if last digit is 1, returns false if last digit is 0.
        {
            count++;
        }
        n=(n>>1); // eg; 1110 becomes 111, the last digit is removed.
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
