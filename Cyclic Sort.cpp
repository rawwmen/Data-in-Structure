#include <iostream>
#include <vector>
using namespace std;

// Function to sort the array
vector<int> cyclicSort(vector<int>& arr) {
    int i = 0;
    while (i < arr.size()) {
        int correctIndex = arr[i] - 1;
        if (arr[i] != arr[correctIndex]) {
            swap(arr[i], arr[correctIndex]); // Swapping the numbers
        } else {
            i++;
        }
    }
    return arr;
}

int main() {
    vector<int> arr = {5, 2, 3, 1, 7, 6, 4}; // Declaration and initialization of unsorted array

    // Function call and printing the sorted array
    for (int num : cyclicSort(arr)) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
