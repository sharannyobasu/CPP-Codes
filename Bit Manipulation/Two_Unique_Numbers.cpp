/* 2 UNIQUE NUMBERS IN ARRAY USING BITMASKING

1. First input all the numbers and XOR them, store it in num.
2. All the repeating numbers will cancel out and XOR of 2 unique
numbers will be displayed.
3. To find out which 2 numbers are unique, we need to find out the ith
position where there is a set bit.

4. After getting that ith position, we store it in a variable pos
and create a mask 1<<pos.

5. We AND that mask with all elements of the array to get
one of the unique number. If arr[i]&mask is greater than 1, we
XOR it to the variable a, which was previously initialized to 0.

6. We now do XOR of num (from step 1) with a(from step 5) and
store it in x1.

7. Print x1 and a to get the 2 unique numbers.

*/


#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int num=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        num=(num^arr[i]);
    }
    cout<<num<<endl;
    int temp=num;
    int pos=0;
    while((temp&1)!=1)
    {
        pos++;
        temp=temp>>1;
    }
    int a=0;
    int mask=(1<<pos);
    for(int i=0;i<n;i++)
    {
        if((mask&arr[i])>0)
        {
            a=(a^arr[i]);
        }
    }
    int y=num^a;
    cout<<min(a,y)<<" "<<max(a,y);
}
