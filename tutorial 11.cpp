// tutorial 10: break and continue staement
// break staement
#include<iostream>
using namespace std;
int main() 
{
	
for(int i = 0; i < 4; i++) 
{
	if(i==2) 
	{
	break;
   }
   	cout << i << endl;
}
// example of continue staement.
  for(int i = 5; i <= 10; i++) 
{
	if(i==8) 
	{
	continue;
   }
   	cout << i << endl;
}
}
