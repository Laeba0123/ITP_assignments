/*5. Write a C++ program to remove duplicates from an array and create a new array and store all distinct elements.*/

 #include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int ar[n];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    cout << "The distinct elements from the array are: ";
    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < i; j++) {
            if (ar[i] == ar[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            cout << ar[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
