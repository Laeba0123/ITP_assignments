#include <iostream>
using namespace std;

void displayElements(int arr[], int index, int size) {
    if (index == size)
        return;

    cout << arr[index] << " ";
    displayElements(arr, index + 1, size);
}

int main() {
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    displayElements(arr, 0, n);

    return 0;
}
