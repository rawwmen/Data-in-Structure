#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        printArray(arr, size); // Print the array after each iteration
    }
}

int main() {
    int inputArray[] = {6, 5, 3, 1, 8, 7, 2, 4};
    int length = sizeof(inputArray) / sizeof(inputArray[0]);

    cout << "Before Sorting: ";
    printArray(inputArray, length);

    cout << "\nValues for each Iteration:" << endl;
    insertionSort(inputArray, length);

    cout << "\nAfter Sorting: ";
    printArray(inputArray, length);

    return 0;
}
