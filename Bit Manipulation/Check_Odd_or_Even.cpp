/* Check whether number is odd or not_eq

Just AND the number with 1, if it comes 1 then it is odd
If it comes 0 then it is even.

*/

#include<iostream>
using namespace std;

int main()

{
    int n;
    cin>>n;
    if((n&1)==1)
    {
        cout<<"Odd !";
    }
    else
    {
        cout<<"Even !";
    }
}