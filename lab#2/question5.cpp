//
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the value of n " << endl;
	cin >> n;
	
	for(int i=2;i<=n*2;i+=2)
	{
		cout <<  "even number " << i << endl; 
	}
}
