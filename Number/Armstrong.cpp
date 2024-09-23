#include <iostream>
#include <cmath>

using namespace std;

class ArmstrongChecker {
public:
    bool isArmstrong(int number) {
        int originalNumber = number;
        int sum = 0;
        int digits = 0;

        while (number != 0) {
            number /= 10;
            digits++;
        }

        number = originalNumber;

        while (number != 0) {
            int digit = number % 10;
            sum += pow(digit, digits);
            number /= 10;
        }

        return sum == originalNumber;
    }
};

int main() {
    int inputNumber;

    cout << "Enter a number: ";
    cin >> inputNumber;

    ArmstrongChecker armstrongChecker;

    if (armstrongChecker.isArmstrong(inputNumber)) {
        cout << inputNumber << " is an Armstrong number." << endl;
    } else {
        cout << inputNumber << " is not an Armstrong number." << endl;
    }

    return 0;
}
