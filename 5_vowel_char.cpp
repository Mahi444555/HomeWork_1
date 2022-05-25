//Q5. Write a Program in C++ to Check Whether a character is Vowel or Consonant.
 #include<iostream>
 using namespace std;
 int main()
 {
     char ch;
     cout<<"enter the character :";
     cin>>ch;
     if(ch=='a'|| ch=='e' || ch=='i'|| ch=='o' || ch=='u')      //also make for capital i.e. ch=='a' && ch == 'A'
     {
         cout<<"it's vowel character";
     }
     else if(ch>=48 && ch<=52)
     {
          cout<<" it's number";
     }
     else
     {
         cout<<"its character or special symbol";
     }
     return 0;
 }