#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cin >> n1;
    int array1[100];
    for (int i = 0; i < n1; ++i) {
        cin >> array1[i];
    }

    cin >> n2;
    int array2[100];
    for (int i = 0; i < n2; ++i) {
        cin >> array2[i];
    }

    int mergedArray[200];
    int total = n1 + n2;

    for (int i = 0; i < n1; ++i) {
        mergedArray[i] = array1[i];
    }
    for (int i = 0; i < n2; ++i) {
        mergedArray[n1 + i] = array2[i];
    }

    for (int i = 0; i < total / 2; ++i) {
        int temp = mergedArray[i];
        mergedArray[i] = mergedArray[total - 1 - i];
        mergedArray[total - 1 - i] = temp;
    }

    for (int i = 0; i < total; ++i) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}
