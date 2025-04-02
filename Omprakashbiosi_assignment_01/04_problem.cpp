#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int original, n, d;
    int p = 0, c = 1;

    cout << "Enter the decimal number: ";
    cin >> original;
    n = original;

    while (n != 0) {
        d = n % 2;
        p += d * c;
        n /= 2;
        c *= 10;
    }

    cout << "Binary = " << p << endl;

    n = original;
    int octal = 0;
    c = 1;

    while (n != 0) {
        d = n % 8;
        octal += d * c;
        n /= 8;
        c *= 10;
    }

    cout << "Octal = " << octal << endl;

    return 0;
}
