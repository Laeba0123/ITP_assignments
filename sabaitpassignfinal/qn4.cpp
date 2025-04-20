// Write a C++ program to rotate an array to the right by k positions.
#include <iostream>
#include <vector>
using namespace std;

void rotateArrayRight(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n; 
    vector<int> rotated(n);

    for (int i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }

    // Copy rotated array back to original array
    arr = rotated;
}

int main() {
    int n, k;
    cout << "Enter size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter number of positions to rotate: ";
    cin >> k;

    rotateArrayRight(arr, k);

    cout << "Array after rotating to the right by " << k << " positions:\n";
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
