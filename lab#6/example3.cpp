#include<iostream>
using namespace std;

int calculate_factorial_recursive(int n) {
    if (n <= 1) {
        return 1;  // Base case: factorial of 0 and 1 is 1
    }
    
    return n * calculate_factorial_recursive(n - 1);  // Recursive call for factorial
}

int main() {
    int result = calculate_factorial_recursive(6);
    cout << result << endl;
    return 0;
}
