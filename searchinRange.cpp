#include <iostream>
using namespace std;

int searchInRange(int arr[], int size, int target, int start, int end) {
    if (size == 0) {
        return 0; // Array is empty
    }
    for (int i = start; i <= end; ++i) {
        if (arr[i] == target) {
            return 1; // Target element found in range
        }
    }
    return 2; // Target element not found in range
}

int main() {
    int arr[] = {12, 1, 4, 45, 84, 65, 41, 23, 78, 98};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 98;
    int start = 1;
    int end = 5;

    int result = searchInRange(arr, size, target, start, end);
    if (result == 0) {
        cout << "Array is empty" << endl;
    } else if (result == 1) {
        cout << "Target element present in an array within given range" << endl;
    } else if (result == 2) {
        cout << "Target element not there in an array within given range" << endl;
    }

    return 0;
}
