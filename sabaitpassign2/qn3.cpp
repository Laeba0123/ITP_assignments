//  Write a C++ program to copy the elements of one array into another array.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int original[n], copy[n];

    cout << "Enter elements of the original array:\n";
    for (int i = 0; i < n; i++) {
        cin >> original[i];
    }

    // Copying elements
    for (int i = 0; i < n; i++) {
        copy[i] = original[i];
    }

    // Displaying the copied array
    cout << "Elements of the copied array:\n";
    for (int i = 0; i < n; i++) {
        cout << copy[i] << " ";
    }
    cout << endl;

    return 0;
}
