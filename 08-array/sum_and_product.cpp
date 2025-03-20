// write a functin to calcualte the sum and product of an array.

#include <iostream>
using namespace std;

void print_sum_and_product(int arr[], int n)
{
    int sum = 0;
    int product = 1;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array: ";
    printArr(arr, n);

    print_sum_and_product(arr, n);

    return 0;
}