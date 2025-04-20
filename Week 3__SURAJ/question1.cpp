#include <iostream>
using namespace std;

void rearrangeArray(int arr[], int size) {
    int j = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Original Array: ";
    printArray(arr, size);

    rearrangeArray(arr, size);

    cout << "Array after rearranging: ";
    printArray(arr, size);

    return 0;
}