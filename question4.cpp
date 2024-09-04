
 #include<iostream>
 using namespace std;
 int main()
 {
 	 // declare variable
 	 int value, base,result;
 	 // input value 
 	 cout << "enetr a value and base " << endl;
	 cin >> value >> base;
	 //  and 1 assign to result
	  result = 1;
	 // loop i from 1 to base
	 for(int i=0;i<base;i++)
     {
     	// calculate result for find exponent.
	   	result*= value;
 	 } 
 	 // display output.
 	 cout << result << endl;

 }
