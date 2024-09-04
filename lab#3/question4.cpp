 // square 1 to n
#include <iostream>
using namespace std;
int main() 
 {
 // Input 
 int n;
 cout << "Enter the value of N: ";
 cin >> n;
 // Iterate from 1 to N and print the square of each position
 for (int i = 1; i <= n; i++) 
 {
 int term = i * i;
 cout << term << " ";
 }
 return 0;
}
