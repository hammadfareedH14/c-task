#include <iostream>
using namespace std;
int main() 
{	
    int temp;
    int a = 5;
    int b = 10;
    cout << "Enter password: ";
    string password;
    cin >> password;
    if (password == "swap123") {
 temp=a;
 a=b;	
 b= temp;
 cout << "Values swapped successfully: " << "Value1 = " << a << ", value2 = " << b << endl;
 } 
 else 
{
 cout << "Invalid password. Unable to swap values." << endl;
}

}
