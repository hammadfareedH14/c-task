// tutorial 7: c++ refrence variable and type casting.
#include<iostream>
using namespace std;
//int  c = 45;// global variable because outside of function.
int main()
{

	// *************** build in data types  ************* // 
int a,b,c;

   cout <<" enter the value of  a: " << endl;
   cin >> a;
   cout <<" enter the value of b: " << endl;
   cin >> b;
   c  = a + b;
   cout <<" the sum is c: " << c  << endl;
  // cout <<"  the global of c: " << ::c << endl; // scope resoluation operator(::) mean globalc varaibale .
   // ************** float, double, long double litrels **************//
   float d= 34.5f;
   long double e =34.4;
   cout <<"  the value of d is: "  << d << endl;
   cout<< "the value of e  is: "  << e  << endl;
   
   cout << " the size of 34.4  is " << sizeof(34.4)  << endl;
   cout << " the size of 34.4f is " << sizeof(34.4f) << endl;
   cout << " the size of 34.4F is " << sizeof(34.4F) << endl;
   cout << " the size of 34.4l is " << sizeof(34.4l) << endl;

//  ************* refrence variable in C++ ****************

       float x  = 455;
       float &y = x;
     cout << x << endl;
	 cout << y << endl; 
	 
	 // ********** type casting variable.
	 int z= 45;
	 float no = 45.46;
	 cout << " the value of z is" << (float)z  << endl;
	 cout << " the value of z is" << float(z)  << endl;
	 cout << " the value of no is" << (int)no  << endl;
	 cout << " the value of no is" << int (no) << endl;1
 return 0;
}

