#include <iostream>

using namespace std;

class LCMCalculator {
public:
    LCMCalculator(int a, int b) : num1(a), num2(b) {}

    int calculateGCD() {
        int a = num1, b = num2;
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    int calculateLCM() {
        int a = (num1 < 0) ? -num1 : num1;
        int b = (num2 < 0) ? -num2 : num2;
        return (a * b) / calculateGCD();
    }

private:
    int num1;
    int num2;
};