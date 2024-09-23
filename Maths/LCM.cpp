#include <iostream>

using namespace std;

class LCMCalculator {
public:
    // Method to calculate GCD, takes two numbers as arguments
    int calculateGCD(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    // Method to calculate LCM, takes two numbers as arguments
    int calculateLCM(int a, int b) {
        // Use absolute values of a and b
        int absA = (a < 0) ? -a : a;
        int absB = (b < 0) ? -b : b;
        
        // LCM formula: (a * b) / GCD(a, b)
        return (absA * absB) / calculateGCD(absA, absB);
    }
};

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Create an LCMCalculator object
    LCMCalculator lcmCalc;

    // Calculate and print the LCM
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcmCalc.calculateLCM(num1, num2) << endl;

    return 0;
}
