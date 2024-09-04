
 // swap two number
 // header file iostream 
 #include<iostream>
 //standard namespace
 using namespace std;
// main function
 int main()
 {
	 // declare variables
	 int a,b,temp;
	 // input 
	 cout << "the input of a and b  before swap " << endl;
	 cin >> a >> b;
	 
	 // swap two number
	  temp = a;
	  a = b;
	  b = temp;
	  // dispaly output.
	  cout << "after swap " << a <<","<< b << endl; 
	   
 }
