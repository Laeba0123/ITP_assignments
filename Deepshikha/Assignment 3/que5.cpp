/* Write a cpp program to remove duplicates from an array and create a new array and store
 all distinct elements*/


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int distinct[n]; 
    int dCount = 0;  

    for (int i = 0; i < n; i++) {
        int count = 0;

        // Checking if arr[i] is already in distinct[]
        for (int j = 0; j < dCount; j++) {
            if (arr[i] == distinct[j]) {
                count++; 
                break;   
            }
        }

        // If count is 0, element is not a duplicate
        if (count == 0) {
            distinct[dCount] = arr[i];
            dCount++;
        }
    }
    cout << "Array with distinct elements:\n";
    for (int i = 0; i < dCount; i++) {
        cout << distinct[i] << " ";
    }
    cout << endl;

    return 0;
}


//OUTPUT

/* Enter the number of elements in the array: 8
Enter 8 elements:
1 3 4 4 8 8 8 9
Array with distinct elements:
1 3 4 8 9   */