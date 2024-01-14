#include <iostream>

using namespace std;

class HCFCalculator {
public:
    HCFCalculator(int a, int b) : num1(a), num2(b) {}

    int calculateHCF() {
        int dividend = num1;
        int divisor = num2;

        while (divisor != 0) {
            int remainder = dividend % divisor;
            dividend = divisor;
            divisor = remainder;
        }

        return dividend;
    }

private:
    int num1;
    int num2;
};