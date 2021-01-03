/* ROTATE AN ARRAY ALONG A SPECIFIC INDEX

use rotate(arr, arr+index_you_want_to_start_with, arr+n);

if array is {1,2,3,4,5} and arr+3, then array will start from 0+3 = arr[3], ie; 4, 5, 1, 2, 3


*/



#include<iostream>
#include<algorithm>

using namespace std;


int main()
{
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(int);
	
	rotate(arr,arr+2,arr+n); // first value is 1 so it will jump 2 index to 3, therefore array will start from 3 and then 4, 5, then come back to first to print 1 and 2. So, overall array is 3,4,5,1,2
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
