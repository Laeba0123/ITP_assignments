/* Write a c++ program to rotate an array to the right by k positions*/

#include <iostream>
using namespace std;

void rotateRight(int arr[], int size, int k) {
   
    int temp[size];
    for (int i = 0; i < k; i++) {
        temp[i] = arr[size - k + i];
    }
    for (int i = k; i < size; i++) {
        temp[i] = arr[i - k];
    }
    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int size, k;
    
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size];
    
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter number of positions within"<<size<<"to rotate the array right: ";
    cin >> k;
    
    rotateRight(arr, size, k);
    
    cout << "Array after rotation:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}


//OUTPUT

/* Enter the size of the array: 6
Enter 6 elements:
9 8 7 6 5 4 
Enter number of positions within6to rotate the array right: 2
Array after rotation:
5 4 9 8 7 6 */