 #include<iostream>
 using namespace std;
 
 int main()
 {
   double n;
   double sum = 0.0;
  cout <<"enter the n (number): ";
  cin >> n;
  for(int i= 1;i<=n;i++)
  {
  	//sum of squares.
    sum+=i*i;
  }
   cout << "the exponent is: " << sum << endl; 
 }
