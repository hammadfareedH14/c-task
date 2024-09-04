 // palindromes number.
 #include<iostream>
 using namespace std;
 int main()
 {  
 int number, original;
	int reversed = 0;

    // Input a five-digit integer
    cout << "Enter a five-digit integer: ";
    cin >> number;  //12321

    original = number;  // store the original number

    // first method find reverse number.
    // Use a loop to reverse the number
 for (int i = 0; i < 5; ++i) 
 {
 int lastDigit = number % 10;
 reversed = reversed * 10 + lastDigit;
 cout << reversed << endl;  // not include in logic step by step explain calculation.
 number = number / 10;
 }
 if (reversed == original) 
 {
 cout << original << " is a palindrome." << endl;
 } 
 else 
 {
 cout << original << " is not a palindrome." << endl;
 }
 }

