/* Fact Digit Sum

Problem Statement :

Given a positive integer ‘N’. You need to find the smallest positive integer ‘X’
such that the sum of the factorial of its digit is equal to ‘N’.

For Example-: Consider ‘N’ = 7, then ‘X’ = 13, because sum of factorial of its 
digits will be 1! + 3! = 1 + 6 = 7, and it is the smallest such integer.

SOLUTION : 

Run while loop starting from 1 -> 
n=1; 
while(n>0)
    {
    
    }
extract every digit of n and add its factorial to another variable.
If the sum equals the input number, return N, otherwise N++

*/

#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    int fact=1;
    while(n>0)
    {
        fact=fact*n;
        n--;
    }
    return fact;
}
int factDigitSum(int n) {
 	int i=1;
    while(true)
    {
        int num=i;
        int sum=0;
        while(num>0)
        {
            int d=num%10;
            sum+=fact(d);
            num=num/10;
        }
        if(sum==n)
        {
            break;
        }
        i++;
        
    }
    return i;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<factDigitSum(n)<<endl;
    }
}