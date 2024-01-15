#include <iostream>
#include <vector>

using namespace std;

class HeapSort {
private:
    vector<int> heap;

    void heapify(int n, int i) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && heap[left] > heap[largest])
            largest = left;

        if (right < n && heap[right] > heap[largest])
            largest = right;

        if (largest != i) {
            swap(heap[i], heap[largest]);
            heapify(n, largest);
        }
    }

    void buildHeap() {
        int n = heap.size();
        for (int i = n / 2 - 1; i >= 0; i--) {
            heapify(n, i);
        }
    }

public:
    HeapSort(vector<int>& arr) : heap(arr) {}

    void sort() {
        int n = heap.size();

        buildHeap();

        for (int i = n - 1; i > 0; i--) {
            swap(heap[0], heap[i]);
            heapify(i, 0);
        }
    }

    void display() {
        for (int i = 0; i < heap.size(); i++) {
            cout << heap[i] << " ";
        }
        cout << endl;
    }
};