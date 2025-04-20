/* Print all the elements of an array using recursion*/

#include <iostream>
using namespace std;
// Recursive function to print array elements
void print(int arr[], int index, int size) {
    if (index == size) {
        return; // Base case: stop when index reaches size
    }
    cout << arr[index] << " ";
    print(arr, index + 1, size); // Recursive call
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Array elements are: ";
    print(arr, 0, n); // Start recursion from index 0
    cout << endl;
    return 0;
}


//OUTPUT
/*Enter the number of elements in the array: 5
Enter 5 elements:
1 2 3 4 5
Array elements are: 1 2 3 4 5*/
