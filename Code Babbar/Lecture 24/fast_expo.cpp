#include <iostream>
using namespace std;

// Function to compute a^n using fast exponentiation
long long fastExpo(int a, int n) {
    if (n == 0)
        return 1;
    else if (n % 2 == 0) {
        long long temp = fastExpo(a, n / 2);
        return temp * temp;
    } else {
        long long temp = fastExpo(a, (n - 1) / 2);
        return a * temp * temp;
    }
}

int main() {
    int base, exponent;
    
    // Input base and exponent
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
    
    // Compute and print the result
    long long result = fastExpo(base, exponent);
    cout << base << " raised to the power of " << exponent << " is " << result << endl;
    
    return 0;
}
