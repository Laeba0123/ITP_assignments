/*7.  Find the Nth Fibonacci number using recursion.*/

#include <iostream>
using namespace std;

int fibonacci(int num) {
    if (num <= 1) 
    return num;

    return fibonacci(num - 1) + fibonacci(num - 2);
}

int main() {
    int n;
    cout<<"Enter nth term ";
    cin >> n;
    cout<<"The nth term is ";
    cout << fibonacci(n);
    return 0;
}
