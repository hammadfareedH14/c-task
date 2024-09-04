 // task 1.cpp

   #include<iostream>
   #include<string>
   using namespace std;
   
   // Define a structure to represent a phone number
  struct phone 
   {
    int areacode;
    int exchange ;
    int number;
   };

int main() 
   {
	
    // Create two structure variables of type "phone"
    phone myNumber = {212, 767, 8900};
    phone yourNumber;

    // Prompt the user to input their phone number
    cout << "Enter your area code, exchange, and number: " << endl;
    cin >> yourNumber.areaCode >> yourNumber.exchange >> yourNumber.number;

    // Display both phone numbers
    cout << "My number is (" << myNumber.areaCode << ") " << myNumber.exchange << " -" << myNumber.number << endl;
    cout << "Your number is (" << yourNumber.areaCode << ") " << yourNumber.exchange << " - " << yourNumber.number << endl;

    return 0;
   }
