/* NEXT PERMUTATIONS

Given an array, it will print the next number lexicographically.
Example, your array is {1,2,4}.
now the function next_permutation(arr,arr+n) will arrange the array to its next lexicographicall number.
Here, according to array the number is 124, so next_permutation will sort it as 1,4,2 as 142 is the next permuational number according to digits and sequence of the array.


Not only arrays, this can also be done with vectors.
*/



#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main()
{
	int arr[]={2,4,1};
	int n=sizeof(arr)/sizeof(int);
	
	next_permutation(arr,arr+n);
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	vector <int> v {1,3,4};
	next_permutation(v.begin(),v.end());
	
	for(int x:v)
	{
		cout<<x<<" ";
	}
	
}
