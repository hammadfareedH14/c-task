// swap two number without using third varibale
#include<iostream>
using namespace std;
int main()
{
	// declare vriable 
	int a,b;
	// input 
	cout <<" enter the value of A and B before swap is:" <<endl;
	cin >> a>>b;
	// swap variable.
	a = a+b;
	b = a-b;
	a = a-b;
	// dsiplay 
	cout <<"the vale of A and B is after swap : " <<a << " " <<b<< endl; 
}
