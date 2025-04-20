/**/

#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    if (num == 0) return 0;
    return (num % 10) + sumOfDigits(num / 10);
}

int main() {
    int n;
    cout<<"Enter number ";
    cin >> n;
    cout<<"The sum of digits of the number is ";
    cout << sumOfDigits(n);
    return 0;
}
