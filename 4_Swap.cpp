//Q4. Write a program In C++ to Swap Numbers Without Using Temporary Variables
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the numbers: ";
    cin>>a>>b;
    cout<<"before swapping a="<<a<<"b="<<b;
    a=a+b;  
    b=a-b;
    a=a-b;
    cout<<"after swapping is: "<<"a="<<a<<"\t"<<"b="<<b;
}