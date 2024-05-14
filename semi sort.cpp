#include <iostream>
#include <algorithm>
using namespace std;

void sortArray(int arr[], int len, string style) {
    int x;
    int tmparr[len];
    copy(arr, arr + len, tmparr);

    if (len % 2 == 0) {
        x = (len / 2) - 1;
    } else {
        x = len / 2;
    }

    sort(arr, arr + (x + 1));
    sort(tmparr + (x + 1), tmparr + len);

    if (style == "AD") {
        int c = len - 1;
        for (int i = (x + 1); i < len; i++) {
            arr[i] = tmparr[c];
            c--;
        }
        for (int i = 0; i < len; i++) {
            cout << arr[i] << " ";
        }
    } else {
        int c = 0;
        for (int i = x; i >= 0; i--) {
            tmparr[c] = arr[i];
            c++;
        }
        for (int i = 0; i < len; i++) {
            cout << tmparr[i] << " ";
        }
    }
}

int main() {
    string style;
    int len;

    cout << "Enter Sorting style (AD or DA): ";
    cin >> style;

    cout << "Enter the length of the array (greater than 1): ";
    cin >> len;

    int arr[len];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }

    cout << endl << "Sorted array: ";
    sortArray(arr, len, style);
    return 0;
}
