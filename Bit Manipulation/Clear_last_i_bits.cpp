/* Clear last i bits */

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
int n;
cin>>n;
int i;
cin>>i;
n=n>>i;
n=n<<i;
cout<<n;

}