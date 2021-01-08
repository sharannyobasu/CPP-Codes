/* Check ith bit

Just right shift the number i times and AND with 1

*/

#include<iostream>
using namespace std;

int main()

{
    int n;
    cin>>n;
    int i;
    cin>>i;
    int c=n>>i;
    cout<<(c&1);
    
}