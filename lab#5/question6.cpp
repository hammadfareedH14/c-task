#include<iostream>
using namespace std;
int main()
{
   char ch;
   cout<<"Enter a character in lowercase: "; 
   cin>>ch;
    // convert lower to upper character
    ch=ch-32;
   // convert upper to lower charcater 
   //ch=ch+32;
   cout<<"Entered character in uppercase: "<<ch;
}	

