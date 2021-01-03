/* Sort an array using sort() function.

This is included in #include<algorithm> header file and is more efficient than bubble, insertion,selection sort.
It sorts in ascending order by default, but in case you wanna sort in in decreaseing order, add a comparator function and call it as a parameter in the sort function.
*/

#include<iostream>
#include<algorithm>
using namespace std;

bool comparator(int a, int b)
{
// 	cout<<"Comparing "<<a<<" and "<<b<<endl; // to understand the sequence of comparing
	return a>b; // ">" for descending and "<" for ascending sort.
}

int main()
{
	int arr[]={31,58,46,90,4,36,85,95};
	int n=sizeof(arr)/sizeof(int);
	
	sort(arr,arr+n,comparator);
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
