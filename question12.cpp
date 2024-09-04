  // find leap year.
  
  // leap year condition:
  // first condition: divisble by 4 
  // second condition: not divisible by 100
  // third conditions: if divisble by 4 and disible by 100 so check 400 sai bhi divide ho agr 100 sai divide hu tu .   
   #include<iostream>
   using namespace std;
   int main()
   {
   	 // declare variable.
   	 int year;
   	 // input
   	 cout << "enter a year " << endl;
   	 cin >> year;
   	 if(year % 4 == 0 && year%400 == 0)
   	{
   	   cout << "the year is leap " <<endl; 	
	}
	else
	{
		cout <<"the year is not leap year." << endl;
	}
	if(year%100 == 0)
	{
		cout << "the year is evenly divisble by 100 " <<endl;
	}
	else
	{
		cout << "the year is not divisble by 100 " << endl; 
   }
   }
