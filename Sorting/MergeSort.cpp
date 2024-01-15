#include <iostream>
#include <vector>

using namespace std;

class MergeSort {
public:
    void sort(vector<int>& arr) {
        if (arr.size() <= 1) {
            return;
        }

        int mid = arr.size() / 2;
        vector<int> left(arr.begin(), arr.begin() + mid);
        vector<int> right(arr.begin() + mid, arr.end());

        sort(left);
        sort(right);

        merge(arr, left, right);
    }

private:
    void merge(vector<int>& arr, const vector<int>& left, const vector<int>& right) {
        int i = 0, j = 0, k = 0;

        while (i < left.size() && j < right.size()) {
            if (left[i] <= right[j]) {
                arr[k++] = left[i++];
            } else {
                arr[k++] = right[j++];
            }
        }

        while (i < left.size()) {
            arr[k++] = left[i++];
        }

        while (j < right.size()) {
            arr[k++] = right[j++];
        }
    }
};