#include <iostream>

using namespace std;

class NumberReverser {
public:
    int reverseNumber(int number) {
        int reversedNumber = 0;

        while (number != 0) {
            int digit = number % 10;
            reversedNumber = reversedNumber * 10 + digit;
            number /= 10;
        }

        return reversedNumber;
    }
};

int main() {
    int inputNumber;

    cout << "Enter a number: ";
    cin >> inputNumber;

    NumberReverser numberReverser;
    int reversedNumber = numberReverser.reverseNumber(inputNumber);

    cout << "Reversed number: " << reversedNumber << endl;

    return 0;
}
