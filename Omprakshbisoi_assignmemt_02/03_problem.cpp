#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;
    int original[100], copy[100];

    for (int i = 0; i < n; ++i) {
        cin >> original[i];
    }

    for (int i = 0; i < n; ++i) {
        copy[i] = original[i];
    }

    for (int i = 0; i < n; ++i) {
        cout << copy[i] << " ";
    }
    cout << endl;

    return 0;
}
