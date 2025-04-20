#include <iostream>
using namespace std;

// Function to print all elements of the array using recursion
void printArray(int arr[], int size, int index = 0) {
    // Base case: If index equals the size, stop recursion
    if (index == size) {
        return;
    }
    cout << arr[index] << " ";  // Print the current element
    printArray(arr, size, index + 1);  // Recursively call for the next index
}

int main() {
    int size;
    
    // Ask the user for the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size];  // Declare an array of the specified size
    
    // Ask the user to input the elements of the array
    cout << "Enter " << size << " elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    cout << "Elements of the array: ";
    printArray(arr, size);  // Call the recursive function to print elements
    cout << endl;
    
    return 0;
}