// Write a C++ program to remove duplicates from an array and create a new array and store all distinct elements.
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_set<int> seen;
    vector<int> uniqueArr;

    for (int val : arr) {
        if (seen.find(val) == seen.end()) {
            seen.insert(val);
            uniqueArr.push_back(val);
        }
    }

    cout << "Array with distinct elements:\n";
    for (int val : uniqueArr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
