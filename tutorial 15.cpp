// tutorial 15: function and its prototypes.
#include<iostream>
using namespace std;

// function prototypes
int sum(int a, int b);

 int main()
{
	int num1,num2;
cout << "enter num1 value: " << endl;
cin >> num1; 	
cout << "enter num2 value: " << endl; 	
cin >> num2;
	
cout << "the sum is: " << sum(num1,num2) << endl; 	

return 0;
}

int sum(int a, int b)
{ 
 int c = a + b;
 return c;
}

