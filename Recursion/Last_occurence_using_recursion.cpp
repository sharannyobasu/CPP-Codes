/* Last occurence using recursion 

For this first go to base case and search the first element of the array
If a[0] matches with key then return 0 or return -1.

In the parent case, -1 would mean that the key wasnt found in child case
so it will search in its a[0]. But if it gets 0, it will return
0+1 to its parents i. 

If a variable is last occuring at 7, then at 7th case it will get 0
which will get incremented each time the parent case is traversed.
So, above the 7th case lies 6 cases, so 0+1+1+1+1+1+1 (6 times 1).

It comes out as 6, or at a[6], number had occured last.
*/


#include<iostream>
using namespace std;

int lastocc(int a[], int n, int key)
{
    if(n==0)
    {
        return -1;
    }
    
    int i=lastocc(a+1,n-1,key);
    if(i==-1)
    {
        if(a[0]==key)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
    return i+1;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
    cout<<lastocc(a,n,key);
}