// write a c++ program to Print all elements of an array using recursion.

#include <iostream>
using namespace std;

void printArray(int arr[], int size, int index = 0) {
    
    if (index == size) {
        return;
    }

    
    cout << arr[index] << " ";

    
    printArray(arr, size, index + 1);
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Elements of the array are: ";
    printArray(arr, n);  
    cout << endl;

    return 0;
}
