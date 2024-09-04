// febionaci series
#include<iostream>
using namespace std;
int main()
 {
 // Input
 int N;
 cout << "Enter the value of N: ";
 cin >> N;
  // Base case: the 0th and 1st Fibonacci numbers are N
  if (N <= 1) 
 {
  cout << "The " << N << "th Fibonacci number is: " << N << endl;
  return 0;
 }
 // Initialize variables
 int a = 0;
 int b = 1;
 // Calculate Fibonacci numbers iteratively
 for (int i = 2; i <= N; ++i) 
 {
 int temp = b;
 b = a + b;
 a = temp;
 }
 // Output the Nth Fibonacci number
 cout << "The " << N << "th Fibonacci number is: " << b <<endl;
 }
	
