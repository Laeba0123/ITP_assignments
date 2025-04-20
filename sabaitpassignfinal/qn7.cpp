//Write a C++ program to remove all occurrences of a given character from a string.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string input, result;
    char ch;

    cout << "Enter a string: ";
    getline(cin, input);

    cout << "Enter the character to remove: ";
    cin >> ch;

    for (char c : input) {
        if (c != ch) {
            result += c;
        }
    }

    cout << "String after removing '" << ch << "': " << result << endl;

    return 0;
}
