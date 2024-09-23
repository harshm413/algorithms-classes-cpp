#include <iostream>

using namespace std;

class LeapYearChecker {
public:
    bool isLeapYear(int year) {
        if (year % 4 == 0) {
            if (year % 100 == 0) {
                return year % 400 == 0;
            }
            return true;
        }
        return false;
    }
};

int main() {
    int inputYear;

    cout << "Enter a year: ";
    cin >> inputYear;

    LeapYearChecker leapYearChecker;

    if (leapYearChecker.isLeapYear(inputYear)) {
        cout << inputYear << " is a leap year." << endl;
    } else {
        cout << inputYear << " is not a leap year." << endl;
    }

    return 0;
}
