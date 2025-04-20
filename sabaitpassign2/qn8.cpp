//write a c++ program to Find the sum of digits of a number using recursion.

#include <iostream>
using namespace std;


int sumOfDigits(int n) {
    if (n == 0) {
        return 0; 
    } else {
        return (n % 10) + sumOfDigits(n / 10); 
    }
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "The sum of the digits of " << number << " is: " << sumOfDigits(number) << endl;

    return 0;
}
