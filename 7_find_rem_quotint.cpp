//Q7. Write a program in C++ toFind Quotient and Remainder
#include<iostream>
using namespace std;
int main()
{
    int number,rem,quoti;
    cout<<"enter the number: ";
    cin>>number;

    rem = number%10;
    quoti = number/10;

    cout<<"remainder: "<<rem<<"\t"<<"quotient: "<<quoti;
     
}