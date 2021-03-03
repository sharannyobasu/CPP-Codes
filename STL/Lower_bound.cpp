
/* LOWER BOUND Function STL

It returns the first value which is >= key.
Use lower_bound(arr,arr+n,key)

*/

//SOURCE CODE : 

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int arr[]={1,2,3,4,6,7,8};
	int n=sizeof(arr)/sizeof(int);
	
	int key;
	cout<<"Enter the number you want to find : ";
	cin>>key;
	
	int* it=lower_bound(arr,arr+n,key);
	cout<<"Element found at index : "<<it-arr<<endl;
}

