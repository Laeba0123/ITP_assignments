//Write a C++ program to input a decimal number and convert it into binary and octal number system using loops.

#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    int binary[32], i = 0, n = num; 
    while (n > 0) {
        binary[i++] = n % 2;
        n /= 2;
    }

    int octal[32], j = 0;
    n = num;
    while (n > 0) {
        octal[j++] = n % 8;
        n /= 8;
    }

    cout << "Binary: ";
    for (int k = i - 1; k >= 0; k--) {
        cout << binary[k];
    }
    cout << endl;

    cout << "Octal: ";
    for (int k = j - 1; k >= 0; k--) {
        cout << octal[k];
    }
    cout << endl;
}