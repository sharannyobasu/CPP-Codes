/* Set ith bit to 1

Create a mask, right shift it with i times.
Then OR the original number with mask.

*/

#include<iostream>
using namespace std;

int main()

{
    int n;
    cin>>n;
    int i;
    cin>>i;
    int mask=1<<i;
    cout<<(n|mask);
    
}