// Write a C++ program to find maximum occurring integer in an array.

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Using unordered_map to count occurrences of each element
    unordered_map<int, int> freqMap;

    for (int i = 0; i < n; i++) {
        freqMap[arr[i]]++;
    }

    // Finding the element with the maximum frequency
    int maxFreq = 0;
    int maxElement = arr[0];

    for (const auto& pair : freqMap) {
        if (pair.second > maxFreq) {
            maxFreq = pair.second;
            maxElement = pair.first;
        }
    }

    cout << "The maximum occurring element is: " << maxElement << endl;

    return 0;
}
