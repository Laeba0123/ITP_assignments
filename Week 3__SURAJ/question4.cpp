#include <iostream>
using namespace std;

void rotateRight(int arr[], int n, int k) {
    k = k % n; // In case k > n
    int temp[n];

    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n, k;
    cout << "Enter size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter number of positions to rotate: ";
    cin >> k;

    rotateRight(arr, n, k);

    cout << "Array after rotating right by " << k << " positions: ";
    printArray(arr, n);

    return 0;
}