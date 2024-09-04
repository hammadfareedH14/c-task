     // recursive prime number function
	 #include <iostream>
     using namespace std;
     bool is_prime_recursive(int n,int i=2) 
	 {
     if (n <= 1) 
	 {
     return false;
     }
     if(i==n)
     {
       return true;	
	 }
	 if(n % i == 0)
	 {
	  return false; 	
	 }
	 return is_prime_recursive(n,i+1);
     }
     
     int main()
     {
     int number;
     // Get user input
     cout << "Enter a number: ";
     cin >> number;
     // Check if the number is prime
     if (is_prime_recursive(number)) 
	 {
     cout << number << " is a prime number." << endl;
     } 
	 else 
	 {
     cout << number << " is not a prime number." << endl;
     }
     return 0;
     }
