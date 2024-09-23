#include <iostream>

using namespace std;

class HCFCalculator {
public:
    // Method to calculate HCF, takes two numbers as arguments
    int calculateHCF(int a, int b) {
        int dividend = a;
        int divisor = b;

        // Euclidean algorithm to find HCF
        while (divisor != 0) {
            int remainder = dividend % divisor;
            dividend = divisor;
            divisor = remainder;
        }

        return dividend;
    }
};

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Create an HCFCalculator object
    HCFCalculator hcfCalc;

    // Calculate and print the HCF
    cout << "HCF of " << num1 << " and " << num2 << " is: " << hcfCalc.calculateHCF(num1, num2) << endl;

    return 0;
}
