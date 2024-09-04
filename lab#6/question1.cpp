#include<iostream>
using namespace std;
int main()
{
double percentage;
cout <<"enter the percentage:";
cin >> percentage;
if(percentage>100)
{
 cout << "invalide input " << endl;
 return 1; 	
}

if(percentage <=90 && percentage>= 100)
{
 cout << "your grade is A " << endl;  	
}
if(percentage <=80 && percentage>= 89)
{
 cout << "your grade is B " << endl;  	
}
if(percentage <=79 && percentage>= 70)
{
 cout << "your grade is c " << endl;  	
}
if(percentage <=69 && percentage>= 60)
{
 cout << "your grade is D " << endl;  	
}
if(percentage <=59 && percentage>=50)
{
 cout << "your grade is E " << endl;  	
}
if(percentage <=49 && percentage>=40)
{
 cout << "just pass no grade  "<< endl;  	
}
if(percentage <=39 && percentage>= 0)
{
 cout << " you are fail " << endl;  	
}    	
}   	 
