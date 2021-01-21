/* PRIME FACTORIZATION USING OPTIMIZED APPROACH

Here, we take the number N and divide it with numbers starting from 2
to sq root(N)

We also keep a count of how many times i is dividing n. We
then divide n by i for the next step, and insert the divisor, 
along with the times divisor divided n, into a vector pair.

*/


#include<iostream>
#include<vector>
using namespace std;

void printfactors(int n)
{
    vector <pair<int, int>> factors; //vector of pairs
    int count;
    for(int i=2;i*i<=n;i++) //from 2 to root of n
    {
        count=0;
        
            while(n%i==0) //keeps dividing untill it cant
            {
              count++; //keeps account of how many times i is dividing n
              n=n/i;
              //cout<<"Value is : "<<n<<endl;
            }
            if(count>0)
            {
            factors.push_back(make_pair(i,count));
            }
    }
    if(n!=1) //when the above loop ends, we add 1 and n to vector.
    {
        factors.push_back(make_pair(n,1));
    }
    for(auto p:factors)
    {
        cout<<p.first<<"*"<<p.second<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    printfactors(n);
    return 0;
}
