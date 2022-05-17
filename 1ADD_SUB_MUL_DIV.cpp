//Q1. Write a program In C++ for simple calculator performing addition, subtraction, multiplication, division operations?


#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    int add = a+b;
    int sub = a-b;
    int mul = a*b;
    int div = a/b;

    cout<<"addition is: "<<add<<"\t substraction:"<<sub<<"\tmultiplication: "<<mul<<"\t division: "<<div;

}