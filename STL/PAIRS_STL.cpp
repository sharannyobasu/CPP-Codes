/* PAIR CONTAINERS IN C++ STL


*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{

    pair<int,int> p; //declaring a pair
    p.first=23; //this calls the first value of pair
    p.second=59; //this calls the second value

    cout<<p.second<<" "<<p.first; //prints the second value and then first value

pair<int,char> p1;
p1.first=10;
p1.second='b';
cout<<endl<<p1.first<<" "<<p1.second;


pair<int,char> p2(p1); //creates a pair p2 which copies contents of p1 into itself
cout<<endl<<p2.first<<" "<<p2.second;


pair <int, string> p3=make_pair(100, "solace"); //make_pair makes a pair of 2 elements. Make sure that you use the same data type as that mentioned pair<over here>
cout<<endl<<p3.first<<" "<<p3.second;

pair<pair<int,int>,string> p4; //pair inside pair, here a pair is inserted as the first element in p4, whereas string takes up the second position.
p4.first.first=111;
p4.first.second=234;
p4.second="ten";

cout<<endl<<p4.first.first<<" "<<p4.first.second<<" "<<p4.second;

// pair<p2,int> p5; // this will give error as p2 cannot be inserted as p5 needs to know the data types.
// p5.second=34;
// cout<<endl<<p5.first.first<<" "<<p5.second;

}