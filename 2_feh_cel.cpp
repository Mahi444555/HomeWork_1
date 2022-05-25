//Q2. Write a program In C++ to accept temperature in Celsius and convert to Fahrenheit?
#include<iostream>
using namespace std;
int main()
{
    float Fahrenheit,Celsius;
    cout<<"enter the fehrenhite : ";
    cin>>Fahrenheit;
    Celsius = ((Fahrenheit-32)*5)/9;
    cout<<Celsius;
}