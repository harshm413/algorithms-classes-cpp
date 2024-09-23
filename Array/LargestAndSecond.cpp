#include <iostream>
#include <limits.h> // for INT_MIN

using namespace std;

class LargestFinder {
public:
    // Method to find and print the largest and second largest numbers
    void findLargestAndSecondLargest(int arr[], int size) {
        if (size < 2) {
            cout << "Array must contain at least two elements." << endl;
            return;
        }

        int largest = INT_MIN; // Initialize largest to the smallest integer
        int secondLargest = INT_MIN; // Initialize second largest to the smallest integer

        // Iterate through the array
        for (int i = 0; i < size; ++i) {
            if (arr[i] > largest) {
                secondLargest = largest; // Update second largest
                largest = arr[i]; // Update largest
            } else if (arr[i] > secondLargest && arr[i] != largest) {
                secondLargest = arr[i]; // Update second largest if arr[i] is not equal to largest
            }
        }

        if (secondLargest == INT_MIN) {
            cout << "There is no second largest element." << endl;
        } else {
            cout << "Largest: " << largest << endl;
            cout << "Second Largest: " << secondLargest << endl;
        }
    }
};

int main() {
    int size;

    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int arr[size]; // Declare an array of the given size

    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i]; // Input elements
    }

    // Create a LargestFinder object
    LargestFinder largestFinder;

    // Find and print the largest and second largest numbers
    largestFinder.findLargestAndSecondLargest(arr, size);

    return 0;
}
