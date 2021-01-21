/* PRIME FACTORIZATION USING PRIME prime_sieve

First, pre-compute the prime sieve and then with the 
help of the sieve array, keep dividing the number.
If sieve[i] divides the number, print sieve[i] and also
divide number by sieve[i] for next iteration.

*/



#include<iostream>
#include<vector>
using namespace std;

vector<int> prime_sieve(int *arr, int n)
{
    arr[0]=0;
    arr[1]=0;
    arr[2]=1;
    for(int i=3;i<n;i+=2)
    {
        arr[i]=1;
    }
    for(int i=3;i<=n;i+=2)
    {
        if(arr[i])
        {
        for(int j=i*i;j<=n;j+=2*i)
        {
            arr[j]=0;
        }
        }
    }
    vector<int> primes;
    primes.push_back(2);
    for(int i=3;i<n;i+=2)
    {
        if(arr[i]==1)
        {
            primes.push_back(i);
        }
    }
    return primes;
}


vector<int> factorize(int m, vector<int> &primes)
{
    vector<int> factors;
    factors.clear();
    
    int i=0;
    int p=primes[0];
    while(p*p<=m)
    {
        //if(m%p==0)
        //{
            factors.push_back(p);
            while(m%p==0)
            {
                m=m/p;
            }
        //}
        i++;
        p=primes[i];
    }
    if(m!=1)
    {
        factors.push_back(m);
    }
    return factors;
}



int main()
{
    int N=1000000;
    int p[N];
    for(int i=0;i<N;i++)
    {
        p[i]=0;
    }
    vector<int> primes=prime_sieve(p,1000);
    
    int t;
    cin>>t;
    while(t--)
    {
        int no;
        cout<<"INPUT NUMBER : ";
        cin>>no;
        vector<int> factors=factorize(no, primes);
        for(auto f:factors)
        {
            cout<<f<<endl;
        }
    }
    return 0;
    
}