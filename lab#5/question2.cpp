#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  cout << "enter the value of a and b: " << endl;
  cin >> a >>b;
  c=b;
  b=a;
  a=c;
  cout <<"("<<a<<","<<b<<")"<<endl;	
}
