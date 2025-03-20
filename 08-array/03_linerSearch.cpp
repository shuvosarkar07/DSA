#include <iostream>
using namespace std;

int main() {

    int marks[5] = {66, 87, 56, 78, 49};
    int size = 5;
    int target = 78;

    int targetIndex = -1;

    for (int i=0; i<size; i++) {
        if (marks[i] == target) {
            targetIndex = i;
            break;
        }
    }

    if (targetIndex == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index " << targetIndex << endl;
    }

    return 0;
}