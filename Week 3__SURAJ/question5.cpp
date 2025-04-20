#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n, int newArr[]) {
    int index = 0;

    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;

        // Check if arr[i] is already in newArr
        for (int j = 0; j < index; j++) {
            if (arr[i] == newArr[j]) {
                isDuplicate = true;
                break;
            }
        }

        // If not a duplicate, add to newArr
        if (!isDuplicate) {
            newArr[index++] = arr[i];
        }
    }

    return index; // return size of newArr
}

int main() {
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    int arr[n], newArr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int newSize = removeDuplicates(arr, n, newArr);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << newArr[i] << " ";
    }
    cout << endl;

    return 0;
}