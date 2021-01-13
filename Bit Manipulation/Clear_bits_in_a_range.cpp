/* CLEAR RANGE OF BITS FROM ith to jth position (ith and jth from the right)

First take complement of 0 (1111....11111)
Then right shift it by j times
then create a variable, right shift 1 i-1 times, subtract  from it
and store it in that variable.
OR the above two variables and store it in third variable.
Do original number AND third variable.
*/

#include<iostream>
#include<algorithm>
using namespace std;

int range_of_bits(int n, int i, int j)
{
    int ones=(~0);
    int mask=(ones<<(j));
    int b=(1<<i-1)-1;
    mask=mask|b;
    n=n&mask;
    return n;
    
}

using namespace std;

int main()
{
int n;
cin>>n;
int i,j;
cin>>i>>j;
cout<<range_of_bits(n,i,j);


}