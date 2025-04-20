#include <iostream>
using namespace std;

// Function to calculate the sum of digits using recursion
int sumOfDigits(int n) {
    if (n == 0) {
        return 0; // Base case: if the number is 0, return 0
    }
    return (n % 10) + sumOfDigits(n / 10); // Recursive case: sum the last digit and recurse for the remaining number
}

int main() {
    int n;
    cout << "Enter a number to find the sum of its digits: ";
    cin >> n;
    
    cout << "The sum of digits of " << n << " is: " << sumOfDigits(n) << endl;
    
    return 0;
}