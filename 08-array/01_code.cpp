#include <iostream>
using namespace std;

int main() {

    int marks[5] = {10, 20, 30, 40, 50};
    int size = sizeof(marks) / sizeof(marks[0]);

    for (int i=0; i<size; i++) {
        cout << marks[i] << endl;
    }

    return 0;
}