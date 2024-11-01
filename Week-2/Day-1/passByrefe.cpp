// Pass by reference
// -> In C++ a reference is an alternative name for an object or function, and its address is the address of the object or function it refers to. For sake of uncerstanding we are calling it address here.

#include <iostream>
using namespace std;

void changeArr(int arr[], int size) {
    cout << "in function\n";
    for (int i = 0; i < size; i++) {
        arr[i] = 2 * arr[i]; // Modify each element
    }
}

int main() {
    int arr[] = {1, 2, 3}; // Original array

    changeArr(arr, 3); // Call function to modify array

    cout << "in main\n";
    for (int i = 0; i < 3; i++) { // Print modified array: 2 4 6
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
