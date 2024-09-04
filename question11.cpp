 //
  #include<iostream>
  using namespace std;
  int main()
  {
  	// declare number.
  	int num;
  	//input.
   cout << "enetr a number " << endl;
   cin >> num;
   // condition
   if(num>0)
   {
   	 cout << "the number is positive " << endl;
   }
   else
   {
   	 cout <<"the number is negative" << endl;
   }
   if(num%2 == 0)
   {
   	 cout << "the number is even " << endl;
   }
   else
   {
   	 cout <<"the number is odd" << endl;
   }
   if(num%3 == 0)
   {
   	 cout << "the number is multiple of 3 " << endl;
   }
   else
   {
   	 cout <<"the number is not multiple of3 " << endl;
   }
  }
