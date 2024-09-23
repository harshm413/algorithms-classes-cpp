#include <iostream>

using namespace std;

class DigitSumCalculator {
public:
    int sumOfDigits(int number) {
        int sum = 0;

        while (number != 0) {
            sum += number % 10;
            number /= 10;
        }

        return sum;
    }
};

int main() {
    int inputNumber;

    cout << "Enter a number: ";
    cin >> inputNumber;

    DigitSumCalculator digitSumCalculator;
    int result = digitSumCalculator.sumOfDigits(inputNumber);

    cout << "Sum of digits: " << result << endl;

    return 0;
}
