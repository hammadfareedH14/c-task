  // check discount for senior cittizens.
  #include<iostream>
  using namespace std;
  int main()
  {
    // declare variable
    int BirthYear,bill,CurrentYear,age;
    // prompt the user to enter. 
    cout << "enter the birth year and  current year and bill" << endl;
    cin >> BirthYear >> CurrentYear >> bill;
    // age calculate.
    age = CurrentYear - BirthYear;
    // cout << "the age is: " << age << endl; // (just for check)
    //conditions. 
    if(age >= 60 && bill>50)
    {
    cout << "you are eligible for discount. " << endl;     	
    }
    else
    {
    cout << "you are not eligible for discount. "<< endl;
	}
  }
