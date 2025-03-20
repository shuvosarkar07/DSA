#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int arr[] = {22, 33, 44, 55, 66, 77, 88, 99, 100, 111};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    int largestValue = INT_MIN;
    int smallestValue = INT_MAX;
    int largestIndex = 0;
    int smallestIndex = 0;

    for (int i=0; i<arr_size; i++) {
        if (arr[i] > largestValue) {
            largestValue = arr[i];
            largestIndex = i;
        }

        if (arr[i] < smallestValue) {
            smallestValue = arr[i];
            smallestIndex = i;
        }
    }   

    cout << "Largest element is " << largestValue << " at index " << largestIndex << endl;
    cout << "Smallest element is " << smallestValue << " at index " << smallestIndex << endl;
    
    return 0;
}