/* MONEY CHANGE PROBLEM 

You are given an amount and have to come up with the least number of coins with the given denominations.
For this you have to take lower_bound() but insert a function of comparator that accepts numbers that are lesser than OR EQUAL to the key.
Insert this in a while loop untill the money left is 0.

Print the coins used in each case
*/



#include<iostream>
#include<algorithm>

using namespace std;

bool compare(int a, int b)
{
	return a<=b;
}

int main()
{
	int coins[]={1,2,5,10,20,50,100,200,500,2000};
	int n=sizeof(coins)/sizeof(int);
	int money;
	cout<<"Enter amount you want to change : ";
	cin>>money;
	
	while(money>0)
	{
	int lb=lower_bound(coins,coins+n, money,compare)-coins-1; // takes the previous index of the key where the lowerbound function terminates.
	cout<<coins[lb]<<endl;
	
	money=money-coins[lb];
}
}
