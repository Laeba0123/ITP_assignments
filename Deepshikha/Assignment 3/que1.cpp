/* Write a cpp program to move all the negative elements to one side of the array*/


#include <iostream>
using namespace std;

void negative(int arr[], int size) {
    int temp[size];
    int j = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            temp[j] = arr[i];
            j++;
        }
    }
    
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            temp[j] = arr[i];
            j++;
        }
    }
    
    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int size;
    
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size];
    
    cout << "Enter " << size << " elements \n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    cout << "\n Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    
    negative(arr, size);
    
    cout << "\nArray after moving negative elements to one side: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}

//OUTPUT
/* Enter the size of the array: 6
Enter 6 elements 
7 -1 0 -9 5 -3

 Original array: 7 -1 0 -9 5 -3
Array after moving negative elements to one side: -1 -9 -3 7 0 5 */
