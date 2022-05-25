#include<iostream>
using namespace std;

void fibo( int n)
{
    int a=0, b=1,temp;
    cout<<a<<"\t"<<b<<"\t";
    for(int i=3;i<=n;i++)
    {
        int temp = a+b;
        cout<<temp<<"\t";
            a=b;
            b=temp;
    }
}
int main()
{
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    fibo(n);    //calling fibo function and passing values 
}