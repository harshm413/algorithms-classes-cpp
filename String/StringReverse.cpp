#include <iostream>
#include <cstring>

using namespace std;

class StringReverser {
public:
    void reverseString(const string& str) {
        string reversedStr;

        for (int i = str.length() - 1; i >= 0; --i) {
            reversedStr += str[i];
        }

        cout << "Reversed string (std::string): " << reversedStr << endl;
    }

    void reverseCharArray(char str[]) {
        int length = strlen(str);
        for (int i = 0; i < length / 2; ++i) {
            // Swap characters
            char temp = str[i];
            str[i] = str[length - 1 - i];
            str[length - 1 - i] = temp;
        }

        cout << "Reversed string (char array): " << str << endl;
    }
};

int main() {
    string inputString;
    char inputArray[100];

    cout << "Enter a string (std::string): ";
    getline(cin, inputString);

    cout << "Enter a string (char array): ";
    cin.getline(inputArray, 100);

    StringReverser stringReverser;
    stringReverser.reverseString(inputString);
    stringReverser.reverseCharArray(inputArray);

    return 0;
}
