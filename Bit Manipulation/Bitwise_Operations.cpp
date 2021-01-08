/* BITWISE OPERATORS

We have 4 operators AND,OR NOT and XOR, we also have other like <<, >> 

AND : will give 1 only when both numbers are 1

OR : Will give 1 when at least 1 number is 1

XOR : Will give 1 when only one digit is 1 
Right shift : Removes the last number and adds 0 to the left. It also divides
a number by 2. Eg; 4>>1 gives 2 as it removes the last value from 100 to make it 10.

Left shift : It adds zeros to the last
Eg; 3<<1 means add 1 zero to the end. It also means to double the number.

*/

#include<iostream>
using namespace std;

int main()
{
    int a=7;
    int b=3;
    cout<<(a&b)<<endl<<(a|b)<<endl<<(a^b)<<endl<<(a<<1)<<endl<<(a>>1)<<endl;
}