//Q6. Write a program in C++ to Find Largest Number Among Three Numbers
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the number: ";
    cin>>a>>b>>c;
    if(a>=b && a>=c)
    {
        cout<<"a is greater than b and c: "<<a;
    }
    else if(b>=a && b>=c)
    {
        cout<<"b is greater than a and c: "<<b;
    }
    else
    {
        cout<<"c is greater than a and b: "<<c;
    }
}
