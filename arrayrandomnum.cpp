  // example
  
  #include<iostream>
  #include<cstdlib>
  using namespace std;
  
  int main()
  {
  	srand(time(0)); // seed randomnumber.
  	
  	 int randomNumber[10]; // create array.
  	
	  for(int i=0;i<10;i++) 
	  {
	  	randomNumber[i] = rand()%100; 
	  }
	  
	  int highest = randomNumber[0];
	  for (int i =0;i<10;i++)
	  {
	  	if(randomNumber[i]>highest)
	  	
	  }
  }
  
  
