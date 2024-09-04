  #include<iostream>
  using namespace std;
  int main()
   {
   	// initilize and declare varible.
  	double  TargetScore = 250.0;
  	double  CurrentScore = 120.0;
  	double  TotalOvers = 50.0;
  	double  OverBowled = 20.0;    // batting team already faced overs.
	// declare variable and calcultae required run rate(RRR)
	int a = TargetScore - CurrentScore;
	int b = TotalOvers - OverBowled;
    double  RequiedrdRunRate = a /b;
	 // display 
	 cout << "the RRR of pakistan is  " <<RequiedrdRunRate << endl;     
   }
