 // perfect square.
#include <iostream>
using namespace std;
int main() 
{
    // Step 1: Input
    int positive_integer;
    cout << "Enter a positive integer: ";
    cin >> positive_integer;
    
    int i = 1;

    while (i * i < positive_integer / i) {
        i++;
    }

    if (i * i == positive_integer) {
        cout << "The given integer is a perfect square." << endl;
    } else {
      cout << "The given integer is not a perfect square." << endl;
    }
}
