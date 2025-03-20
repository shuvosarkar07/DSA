// Write a function that takes an array of integers and its size as input, finds the minimum and maximum elements in the array, and swaps their positions. The function should modify the array in place. After swapping, print the modified array.



#include <iostream>
#include <limits.h>
using namespace std;

void swapMinMax(int arr[], int n) {
    int minIdx = 0;
    int maxIdx = 0;

    for(int i =0; i<n; i++) {
        if(arr[i] < arr[minIdx]) {
            minIdx = i;
        }

        if(arr[i] > arr[maxIdx]) {
            maxIdx = i;
        }    
    }

    swap(arr[minIdx], arr[maxIdx]);
}

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {23, 33, 7, 43, 15, 17};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original arr: ";
    printArray(arr, n);

    swapMinMax(arr, n);

    cout << "After swap: ";
    printArray(arr, n);

    return 0;
}