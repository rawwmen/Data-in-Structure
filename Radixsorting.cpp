//Here's an implementation of Radix Sort in C++:

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void countingSort(vector<int>& arr, int exp) {
    vector<int> output(arr.size(), 0);
    vector<int> count(10, 0);

    for (int i = 0; i < arr.size(); i++)
        count[(arr[i] / exp) % 10]++;

    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (int i = arr.size() - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (int i = 0; i < arr.size(); i++)
        arr[i] = output[i];
}

void radixSort(vector<int>& arr) {
    int maxNum = *max_element(arr.begin(), arr.end());

    for (int exp = 1; maxNum / exp > 0; exp *= 10)
        countingSort(arr, exp);
}

int main() {
    vector<int> arr = {4725, 4586, 1330, 8792, 1594, 5729};
    radixSort(arr);

    cout << "Sorted array: ";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
