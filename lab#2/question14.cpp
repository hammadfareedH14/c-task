#include<iostream>
using namespace std;
int main()
{
 int x,y;
cout <<  " enter a coordinate(coordinate mean X and Y) ";
cin >>x>>y;
if(x>0 && y>0) 
{
cout<<"first quardant(+,+)" << endl;
}
if(x<0 && y>0)
{
cout<<"second quardant(-,+)" << endl;
}
if(x<0 && y<0)
{
cout<<"third quardant(-,-)" << endl;
}
if(x>0 && y<0)
{
cout<<"fourth quardant(+,-)" << endl;
}
 }
