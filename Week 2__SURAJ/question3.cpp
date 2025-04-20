#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of the array: ";
    cin >> n;

    int original[n], copy[n];

    // Input elements into original array
    cout << "Enter elements of the original array:\n";
    for (int i = 0; i < n; ++i)
        cin >> original[i];

    // Copy elements to new array
    for (int i = 0; i < n; ++i)
        copy[i] = original[i];

    // Display copied array
    cout << "Copied array elements:\n";
    for (int i = 0; i < n; ++i)
        cout << copy[i] << " ";

    return 0;
}