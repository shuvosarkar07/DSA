#include <iostream>
using namespace std;

void findUnique(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count == 1) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 14, 7, 10, 23, 27, 32, 23};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original arr: ";
    printArr(arr, n);

    cout << "Unique elements: ";
    findUnique(arr, n);

    return 0;
}