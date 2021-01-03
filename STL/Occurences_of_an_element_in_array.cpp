/* Number of occurences in array

Just do upper_bound(arr,arr+n,key) - lower_bound(arr,arr+n,key)

*/

//SOURCE CODE : 

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int arr[]={1,2,3,4,5,6,6,6,6,6,6,6,7,8};
	int n=sizeof(arr)/sizeof(int);
	
	int key;
	cout<<"Enter the number you want to find : ";
	cin>>key;
	
	int* lb=lower_bound(arr,arr+n,key);
	
	int* ub=upper_bound(arr,arr+n,key);
	
	cout<<"Number of occurences of your chosen number is : "<<ub-lb<<endl;
}

