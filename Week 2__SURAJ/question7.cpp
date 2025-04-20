#include <iostream>
using namespace std;

// Function to calculate the Nth Fibonacci number using recursion
int fibonacci(int n) {
    if (n <= 1) {
        return n; // Base case: Fibonacci(0) = 0, Fibonacci(1) = 1
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}

int main() {
    int n;
    cout << "Enter a number to find the Nth Fibonacci number: ";
    cin >> n;
    
    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;
    
    return 0;
}