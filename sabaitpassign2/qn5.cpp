//Write a C++ program to find the second smallest elements in a given array of integers(all elements of array distinct).

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n < 2) {
        cout << "Array must have at least two elements to find the second smallest." << endl;
        return 0;
    }

    int arr[n];
    cout << "Enter elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize smallest and second smallest
    int smallest = INT_MAX, secondSmallest = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    cout << "The second smallest element is: " << secondSmallest << endl;

    return 0;
}
