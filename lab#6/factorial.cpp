#include<iostream>
using namespace std;
int calculate_factorial(int n)
{
	int m=1;
  for(int i=2;i<=n;i++)
{
  m*=i;  	
}
 return m;	
}
int main()
{
 int result = calculate_factorial(6);
 cout << result << endl;
}    
