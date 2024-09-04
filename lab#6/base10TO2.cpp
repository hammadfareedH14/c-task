// convert base 10 to 2.
#include <iostream>
using namespace std; 
int main()
{
    int a,b;
    cout << "BASE 10 TO BASE 2 CONVERTER" << endl;
    cout << "Enter the base 10 number you want to convert: "<<endl;
    cin >> a;
    while (a != 0)
    {
        b = a % 2;
        a = a / 2;
        cout << b;
    }

    return 0;
}
