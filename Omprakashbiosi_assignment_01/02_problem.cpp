#include <iostream>
using namespace std;

int main() {
    int l, h, b;
    /*2. Write a C++ program to input 3 sides of triangle and a triangle can be drawn
 from it or not, if triangle can be drawn then check if it is equilateral, isosceles or
 scalene triangle.*/
    cout << "Enter the sides of the triangle: \n";
    cin >> l >> b >> h;

    if (l + b > h && l + h > b && b + h > l) {
        if (l == b && b == h) {
            cout << "Equilateral Triangle";
        } 
        else if (l == b || l == h || b == h) {
            cout << "Isosceles Triangle";
        } 
        else {
            cout << "Scalene Triangle";
        }
    } 
    else {
        cout << "INVALID TRIANGLE";
    }

    return 0;
}
