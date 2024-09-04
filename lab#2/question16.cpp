#include<iostream>
using namespace std;
int main()
{
	double a,b,c;
	cout << "enter length of a ";
	cin >> a;
    cout << "enter length of b ";
	cin >> b;
	cout << "enter length of c ";
	cin >> c;
	if(a==b && b == c)
   {
     cout <<"the triangle is equilateral " << endl;
   }
   if(a==b && b!=c)
   {
     cout <<"the triangle is isosless " << endl;
   }
   if(a!=b && b!=c)
   {
     cout <<"the triangle is scalence " << endl;
   }	 
}
