/* Some more methods

use max(a,b) to find max of 2 nos, min(a,b) to find smaller

use reverse(arr,arr+n) to reverse the array.
n can be any number, it will reverse elements from i=0 to i=n-1 while the other elements remain the same.

*/

#include <iostream>
#include<algorithm>

using namespace std;
int main() {
    int a=1;
    int b=2;
    cout<<max(a,b)<<endl; //max()
    cout<<min(a,b)<<endl; //min()

    int arr[]={1,2,3,4,5,6}; 
    int n=sizeof(arr)/sizeof(int);

    reverse(arr+1,arr+4); //reverse(starting number,ending number)
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
