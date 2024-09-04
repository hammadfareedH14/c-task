#include<iostream>
using namespace std;
int main()
{
  int x,y,z,temp;
  cout << "enter the value of x,y,z ";
  cin >> x >> y >> z;
  if(x>y)
{
  temp = x;
  x=y;
  y=temp; 	
}
  if(y>z)
{
  temp =y;
  y=z;
  y =temp;                                   
}
  if(x>y)
{
  temp = x;
  x = y;
  y=temp; 	
}
  cout <<"the assending order is:"<< x << y << z <<endl;
}

