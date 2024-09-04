
// tutorial 8: c++ constant, manipulators and operator procedence.
#include<iostream>
using namespace std;

int main()
{
	int a = 45;
	char c = 'c';
	cout <<" the value of c was: " << a  <<  endl;
	cout <<" the value of c was: "  << c << endl;
	a = 45;
	c = '43';
 	cout <<" the value of c is: "  << a << endl;
 	cout <<" the value of c is: "  << c << endl;

   // example of contant in c++.
   const float pi = 3.14;   
	cout <<" the value of pi was: "  << pi << endl;
	pi = 2.3;//a is constant so does not change.
 	cout <<" the value of pi is: "  << pi << endl;
  
  // manipulators
  // 'iostream' mai endl is manipulator.
  // iomanip mai setw is manipulator.
   
   // operator procedence in C++.
   
   //en.cppreference operator_precedence // YE WEBSITE OPERATOR PROCEDENCE
}
