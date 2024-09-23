#include <iostream>
#include <cstring>

using namespace std;

class PalindromeChecker {
public:
    bool isPalindrome(const string& str) {
        int left = 0;
        int right = str.length() - 1;

        while (left < right) {
            if (str[left] != str[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

    bool isPalindrome(char str[]) {
        int length = strlen(str);
        int left = 0;
        int right = length - 1;

        while (left < right) {
            if (str[left] != str[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

int main() {
    string inputString;
    char inputArray[100];

    cout << "Enter a string (std::string): ";
    getline(cin, inputString);

    cout << "Enter a string (char array): ";
    cin.getline(inputArray, 100);

    PalindromeChecker palindromeChecker;

    if (palindromeChecker.isPalindrome(inputString)) {
        cout << "\"" << inputString << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << inputString << "\" is not a palindrome." << endl;
    }

    if (palindromeChecker.isPalindrome(inputArray)) {
        cout << "\"" << inputArray << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << inputArray << "\" is not a palindrome." << endl;
    }

    return 0;
}
