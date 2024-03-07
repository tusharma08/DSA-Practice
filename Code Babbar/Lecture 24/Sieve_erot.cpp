#include <iostream>
#include <vector>
using namespace std;

vector<int> sieve_of_eratosthenes(int n) {
    vector<bool> primes(n+1, true); // Initialize all numbers from 0 to n as prime
    vector<int> prime_numbers;

    primes[0] = primes[1] = false; // 0 and 1 are not prime

    for (int p = 2; p * p <= n; ++p) {
        if (primes[p] == true) {
            // If primes[p] is not changed, then it is a prime
            // Update all multiples of p starting from p*p
            for (int i = p * p; i <= n; i += p) {
                primes[i] = false;
            }
        }
    }

    // Collect all prime numbers
    for (int i = 0; i <= n; ++i) {
        if (primes[i]) {
            prime_numbers.push_back(i);
        }
    }

    return prime_numbers;
}

int main() {
    int n ;
    cin >>n;
    vector<int> primes = sieve_of_eratosthenes(n);
    cout << "Prime numbers up to " << n << " are: ";
    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << endl;

    return 0;
}
