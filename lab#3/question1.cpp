 // find gcd(greatest common divisor): two factor are same called gcd  
#include<iostream>
using namespace std;
int main()
{
  int a,b,temp;
cout<<"enter the value of a:";
cin >> a; 
cout<<"enter the value of b:";
cin >> b;
  
  // calculate GCD(greatest common divisor.)
  	 while(b !=0)
  {
    temp = b;
	b= a % b;
	a = temp;	 	
  }
    cout << "the GCD of " << a <<" and " << b << " is " << a << endl;
}
