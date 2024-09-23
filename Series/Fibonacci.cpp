#include <iostream>

using namespace std;

class FibonacciPrinter {
public:
    // Method to print Fibonacci series up to 'n' terms
    void printFibonacci(int n) {
        int a = 0, b = 1;

        // Handle special case for n <= 0
        if (n <= 0) {
            cout << "Number of terms must be positive." << endl;
            return;
        }

        // Print the first term
        cout << a;

        // Print the rest of the series
        for (int i = 1; i < n; ++i) {
            cout << " " << b;
            int next = a + b;
            a = b;
            b = next;
        }

        cout << endl;
    }
};

int main() {
    int terms;

    cout << "Enter the number of Fibonacci terms to print: ";
    cin >> terms;

    // Create a FibonacciPrinter object
    FibonacciPrinter fibPrinter;

    // Print the Fibonacci series
    fibPrinter.printFibonacci(terms);

    return 0;
}
