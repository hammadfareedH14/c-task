#include<iostream>
using namespace std;
int main()
{
 float a,b,c,d;
 cout << "enter the value of a and b: " << endl;
 cin >> a >>b;
 // third value 
 if(a>=1 && a<=1000)
 {
 	c=a;
 	cout << "the value of c is the value of a: " << c;
 }
 else if(b>=1001 && b<=2000)
 {
 	c=b;
   cout << "the value of c is value of b: " << c;
 }
  cout <<" because third value not allowed " << endl;
  // calculate average
  d= (a+b+c)/3;
 // display
 cout << "the average of three number is: " << d <<endl;
   	
}
