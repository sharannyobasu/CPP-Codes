/*      FIND NEXT GREATER ELEMENT OF AN ARRAY USING STACKS      */


#include<iostream>
#include<stack>
using namespace std;


void next_greater_element(int arr[], int n)
{
    stack <int> s;
    int nge[n]={0};
    for(int i=0;i<n;i++)
    {
        if(!s.empty())
        {
            if(arr[s.top()]>=arr[i])
            {
                s.push(i);
            }
            else
               {
                while(!s.empty() and arr[s.top()]<arr[i])
                {
                    nge[s.top()]=arr[i];
                    s.pop();
                }
                s.push(i);
            }
        }
        else
        {
            s.push(i);
        }
       }
       while(!s.empty())
       {
           int x=s.top();
           nge[x]=-1;
           s.pop();
       }
       for(int i=0;i<n;i++)
       {
           cout<<nge[i]<<" ";
       }
       cout<<endl;
}


int main()
{
    int arr[5]={6, 8, 0, 1, 3};
    next_greater_element(arr, 5);
}