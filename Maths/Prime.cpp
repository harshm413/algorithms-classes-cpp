#include <iostream>

using namespace std;

class PrimeChecker {
public:
    // Method to check if a number is prime
    bool isPrime(int num) {
        if (num <= 1) {
            return false; // 0, 1, and negative numbers are not prime
        }

        // Check for factors other than 1 and the number itself
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                return false; // Found a factor, not prime
            }
        }

        return true; // No factors found, number is prime
    }
};

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    // Create a PrimeChecker object
    PrimeChecker primeCheck;

    // Check and print if the number is prime or not
    if (primeCheck.isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}
