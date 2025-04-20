#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int smallest = arr[0];
    int secondSmallest = INT_MAX;

    for (int i = 1; i < n; ++i) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest) {
            secondSmallest = arr[i];
        }
    }

    cout << "Second smallest element: " << secondSmallest << endl;

    return 0;
}
