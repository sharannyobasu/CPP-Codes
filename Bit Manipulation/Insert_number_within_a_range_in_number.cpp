/* insert RANGE OF BITS FROM ith to jth position (ith and jth from the right)


*/

#include<iostream>
#include<algorithm>
using namespace std;

int range_of_bits(int n, int i, int j, int num)
{
    int ones=(~0);
    int mask=(ones<<(j+1));
    int b=(1<<i)-1;
    mask=mask|b;
    n=n&mask;
    num=(num<<i);
    n=n|num;
    return n;
    
}

using namespace std;

int main()
{
int n;
cin>>n;
int num;
cin>>num;
int i,j;
cin>>i>>j;
cout<<range_of_bits(n,i,j,num);




}