/* BINARY SEARCH USING STL

Use the #include<algorithm> as header file.
The function binary_search(array, array+num of elements, umber you wanna search) will determine whether the number is present in your array or not.

*/

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int arr[]={1,2,3,4,5,6,7,8};
	int n=sizeof(arr)/sizeof(int);
	
	int key;
	cout<<"Enter the number you want to find : ";
	cin>>key;
	
	bool present=binary_search(arr,arr+n,key);
	if(present)
	{
		cout<<"Present !";
	}
	else
	{
		cout<<"Absent !";
	}
}




