// tutoraial 9: 
#include <iostream>
using namespace std;

int main() {
    // Example of using if-else statements
   int age;
    cout << "Tell me your age: ";
    cin >> age;
if (age <= 18 && age >= 0)
    {
        cout << "You cannot come to my party." << endl;
    } else if (age == 18) {
        cout << "You are an adult." << endl;
     } else if (age > 1) {
        cout << "You are not born yet." << endl;
    } else {
        cout << "You are 19+ to come with a special pass." << endl;
    }
  
  // switch case statement.
  switch(age)
  {
  case 18:
  cout << " you are 18 " << endl;
  break; 
   case 19:
  cout << " you are 19 " << endl;
    break; 
   case 20:
  cout << " you are 20 " << endl;
    break; 
   case 21:
  cout << " you are 21 " << endl;
    break; 
  default:
  cout << " no special cases " << endl; 
    break; 
	
  }
  cout << " done with switch case " << endl;
    return 0;
}

