#include <iostream>
using namespace std;

void ShellSort(int arr[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j = i;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {20, 35, -15, 7, 55, 1, -22};
    int n = sizeof(arr) / sizeof(arr[0]);

    ShellSort(arr, n);

    cout << "Sorted array: ";
    print(arr, n);

    return 0;
}
