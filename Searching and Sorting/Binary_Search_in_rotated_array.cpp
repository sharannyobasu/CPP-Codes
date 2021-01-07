/* Rahul had a sorted array of numbers from which he had to find a given number quickly. His friend by mistake rotated the array. Now Rahul doesn't have time to sort the elements again. Help him to quickly find the given number from the rotated array.

Hint - Think Binary Search!



Input Format
The first line contains N - the size of the array. the next N lines contain the numbers of the array.The next line contains the item to be searched.


Output the index of number in the array to be searched. Output -1 if the number is not found.


Input :
5
4 5 1 2 3
2

Output : 
3             // Because arr[3] is 2, which was the key


*/


#include<iostream>
#include<algorithm>
using namespace std;

int binary_search_in_rotated_array(int arr[],int n, int key)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        if(arr[s]<=arr[mid]) /*if yes, then array from start till mid is sorted.
                            If not, then array from mid till end is sorted */
        {
            if(arr[s]<=key and key<=arr[mid]) //executes when left to mid is sorted
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        else{
            if(arr[mid]<=key and key<=arr[e]) //executes when mid to end is sorted
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    
    cout<<"Found at : "<<binary_search_in_rotated_array(arr, n, key);
}



