#include <iostream>

using namespace std;

class NumberPalindromeChecker {
public:
    bool isPalindrome(int number) {
        if (number < 0) {
            return false;
        }

        int originalNumber = number;
        int reversedNumber = 0;

        while (number > 0) {
            int digit = number % 10;
            reversedNumber = reversedNumber * 10 + digit;
            number /= 10;
        }

        return originalNumber == reversedNumber;
    }
};

int main() {
    int inputNumber;

    cout << "Enter a number: ";
    cin >> inputNumber;

    NumberPalindromeChecker palindromeChecker;

    if (palindromeChecker.isPalindrome(inputNumber)) {
        cout << inputNumber << " is a palindrome." << endl;
    } else {
        cout << inputNumber << " is not a palindrome." << endl;
    }

    return 0;
}
