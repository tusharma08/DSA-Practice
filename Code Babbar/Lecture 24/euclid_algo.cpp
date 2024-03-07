#include <iostream>
using namespace std;

// Function to find the greatest common divisor using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    
    // Input two numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    // Find and print the GCD
    int result = gcd(num1, num2);
    cout << "GCD of " << num1 << " and " << num2 << " is " << result << endl;
    
    return 0;
}
