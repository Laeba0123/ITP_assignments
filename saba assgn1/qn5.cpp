//Write a C++ program to check if a Number is Perfect square using loops

#include <iostream>
using namespace std;

int main() {
    int n , i=0 ;
    cout << "Enter a number: ";
    cin >> n;

    if (n< 0) {
        cout << "Negative numbers are not perfect squares" << endl;
        return 0; 
    }

    while (i * i < n) {
        i++;
    }

    if (i * i == n) {
        cout << n << " is a perfect square!" << endl;
    } else {
        cout << n << " is not a perfect square!" << endl;
    }

    return 0;
}
