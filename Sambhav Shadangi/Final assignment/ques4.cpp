/*4. Write a C++ program to rotate an array to the right by k positions*/

 #include <iostream>
using namespace std;

int main() {
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;

    int ar[n], temp[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    cout << "Enter value of k: ";
    cin >> k;

    k = k % n;

    for (int i = 0; i < n; i++)
        temp[(i + k) % n] = ar[i];

    for (int i = 0; i < n; i++)
        ar[i] = temp[i];

    cout << "Array after rotating right by " << k << " positions is :\n";
    for (int i = 0; i < n; i++)
        cout << ar[i] << " ";
    cout << endl;

    return 0;
}
