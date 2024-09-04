  // alculate rizwan aggregate(merit point).
  
  //header file iostream
  #include<iostream>
  //standard namespace
  using namespace std;
  //main function
  int main()
  {
  	//initlize and rizwan mark.
	   double AdmissionTestMark = 85.5;
	   double MatricMark = 75.5;
	   double IntermediateMark = 90.0;
  	// initilize and obtain  weigth  
  	 double AdmissionTestWeight = 0.50;
  	 double MatricExamWeight = 0.10;
  	 double IntermediateExamWeight  = 0.40;
  	 // calculation and decalre aggregate.
  	 
  	 double aggregate = AdmissionTestMark*AdmissionTestWeight +
	                    MatricMark*MatricExamWeight + 
						IntermediateMark*IntermediateExamWeight; 
//  	  aggregat = 85*0.50 + 75*0.10 + 90*0.40;
  	 // display output
  	 cout << "the admission critera is " << aggregate <<endl;

  }
  
   
