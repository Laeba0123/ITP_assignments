/*9. Print all elements of an array using recursion.*/

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

void printArray(int ar[], int n) {
    if (n == 0) return;
    cout << ar[0] << " ";
    printArray(ar + 1, n - 1);
}

int main() {
    int num;
    cout<<"Enter size of array ";
    cin>>num;
    int arr[num];
    cout<<"Enter array";
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"All the elements of array are ";
    printArray(arr, n);
    return 0;
}