#include<iostream>
using namespace std;

int calculate_factorial_recursive(int n, int i = 2) {
    if (n <= 1) {
        return false;  
    }

    if (i <= n) {
        int m = 1;
        m *= i;
        return m * calculate_factorial_recursive(n, i + 1);
    }

    return 1;
}

int main() {
    int result = calculate_factorial_recursive(5);
    cout << result << endl;
    return 0;
}
