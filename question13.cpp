  // dispaly a number 1 mean january 2 for febuary.
 #include<iostream>
 using namespace std;
 int main()
 {
   // declare variable.
   int MonthNumber;
   // input
   cout << "enter the number of month.(month number is 1-12 only ) " << endl;
   cin >> MonthNumber;
	// apply conditions
	cout << "the month name is:";
	if(MonthNumber==1)
	{
	cout <<"JANUARY" << endl;
	}
	else if(MonthNumber==2)
	{
	cout <<"FEBRUARY" << endl;
	}
	else if(MonthNumber==3)
	{
	cout <<"MARCH" << endl;
	}
	else if(MonthNumber==4)
	{
	cout <<"APRIL" << endl;
	}
	else if(MonthNumber==5)
	{
	cout <<"MAY" << endl;
	}
	else if(MonthNumber==6)
	{
	cout <<"JUNE" << endl;
	}
	else if(MonthNumber==7)
	{
	cout <<"JULY" << endl;
	} 
	else if(MonthNumber==8)
	{
	cout <<"AUGUST" << endl;
	}
	else if(MonthNumber==9)
	{
	cout <<"SEPTEBER" << endl;
	}
	else if(MonthNumber==10)
	{
	cout <<" OCTOBER" << endl;
	}
	else if(MonthNumber==11)
	{
	cout <<"NOVEMBER" << endl;
	}
	else if(MonthNumber==12)
	{
	cout <<"DECEMBER" << endl;
	}
	else
	{
	cout <<"INVALID INPUT(please enter 1-12 only because  1 year is equal to 12 month.)" << endl;
	}
 }
