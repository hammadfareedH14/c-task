#include<iostream>
using namespace std;

int main()
{
  double exponent,base,result = 1.0;
  cout <<"enter the base and exponent: ";
  cin >> base >> exponent;
  for(int i= 0;i<exponent;i++)
  {
  	result*=base;
  }
   cout << "the exponent is: " << result << endl; 
}

