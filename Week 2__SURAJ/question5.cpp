#include <iostream>
#include <algorithm> // For sort
using namespace std;

int main() {
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    if (n < 2) {
        cout << "Array must have at least two elements.\n";
        return 0;
    }

    int arr[n];
    cout << "Enter " << n << " distinct elements:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    // Sort the array
    sort(arr, arr + n);

    cout << "Second smallest element is: " << arr[1] << "\n";

    return 0;
}