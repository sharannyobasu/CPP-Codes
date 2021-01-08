/* Clear bit to 0

Create a mask, right shift it with i times, then apply bitwise NOT on it
Then AND the original number with mask.

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
    mask=~mask;
    cout<<(n&mask);
    
}