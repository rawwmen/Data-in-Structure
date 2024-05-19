#include <iostream>
#include <vector>
#include <algorithm> // For std::min and std::max

using namespace std;

// Function to find the minimum element in the array recursively
int MinArrRec(const vector<int>& A, int n) {
    if (n == 1) // If the size of the array is 1, return the only element
        return A[0];
    return min(A[n - 1], MinArrRec(A, n - 1)); // Recursively finding minimum
}

// Function to find the maximum element in the array recursively
int MaxArrRec(const vector<int>& A, int n) {
    if (n == 1) // If the size of the array is 1, return the only element
        return A[0];
    return max(A[n - 1], MaxArrRec(A, n - 1)); // Recursively finding maximum
}

int main() {
    int n;
    cin >> n; // Size of the array

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input array
    }

    int minElement = MinArrRec(arr, n); // Finding minimum element
    int maxElement = MaxArrRec(arr, n); // Finding maximum element

    vector<int> result = {minElement, maxElement}; // Array of [min, max]
    cout << "[" << result[0] << "," << result[1] << "]" << endl;

    return 0;
}
