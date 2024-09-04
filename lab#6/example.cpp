     // prime number function
	 #include <iostream>
     using namespce std;
     bool is_prime(int n) 
	 {
     if (n <= 1) 
	 {
     return false;
     }
     for (int i = 2; i <= n; ++i) 
	 {	
        if (n % i == 0) 
	 {
      return false;
     }
     }
     return true;
     }
     int main()
     {
     int number;
     // Get user input
     cout << "Enter a number: ";
     cin >> number;
     // Check if the number is prime
     if (is_prime(number)) 
	 {
     cout << number << " is a prime number." << endl;
     } 
	 else 
	 {
     cout << number << " is not a prime number." << endl;
     }
     return 0;
     }

