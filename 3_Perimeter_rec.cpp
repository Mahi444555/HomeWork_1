/*Q3. Write a program In C++ to Find the Area and Perimeter of a
Rectangle using Width and Length */

#include<iostream>
using namespace std;
//#include<conio.h>
int main()
{
    float a,b,c,d,perimeter;//where these all are sides of rectangle
    cout<<"ente the sides of rectangle: ";
    cin>>a>>d;            //only taking opposite side from user 
    
    a=c;          //recangle i.e. opposite sides are equal hence i'm assigning that...
    b=d;

    perimeter = 2*(a+b);
    cout<<"perimeter is: "<<perimeter;

}