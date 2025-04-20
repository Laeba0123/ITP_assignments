// Write a C++ program to remove all characters except alphabets in a string.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string input, result;

    cout << "Enter a string: ";
    getline(cin, input);

    for (char ch : input) {
        if (isalpha(ch)) {
            result += ch;
        }
    }

    cout << "String after removing non-alphabet characters: " << result << endl;

    return 0;
}