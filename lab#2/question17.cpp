#include<iostream>
using namespace std;
int main()
{
	long long n;
  int count = 0;
  cout << "enter the value of n ";
  cin >> n;
  do
  {
    n/=10;
	++count;	
  } while (n!= 0);
  cout << "the count the number of integer " << count << endl;	
}
