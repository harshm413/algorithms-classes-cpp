#include <iostream>

using namespace std;

class FactorialCalculator {
public:
    // Method to calculate factorial, takes number as an argument
    int calculateFactorial(int num) {
        int factorial = 1;

        // Iteratively calculate factorial
        for (int i = 2; i <= num; ++i) {
            factorial *= i;
        }

        return factorial;
    }
};

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    // Create a FactorialCalculator object
    FactorialCalculator factCalc;

    // Calculate and print the factorial
    cout << "Factorial of " << number << " is: " << factCalc.calculateFactorial(number) << endl;

    return 0;
}
