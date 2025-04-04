//Write a C++ program to input 3 sides of triangle and a triangle can be drawn from it or not, 
// if triangle can be drawn then check if it is equilateral, isosceles or scalene triangle.

#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;
    
    if (a + b > c && b + c > a && a + c > b) {
        cout << "Triangle can be formed.\n";

        if (a == b && b == c)
            cout << "Triangle is equilateral.\n";
        else if (a == b || b == c || a == c)
            cout << "Triangle is isosceles.\n";
        else 
            cout << "Triangle is scalene.\n";
    } else {
        cout << "Triangle cannot be formed.\n";
    }
    
    return 0;
}
