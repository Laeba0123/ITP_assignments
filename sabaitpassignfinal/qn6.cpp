//Write a C++ program to convert a string to lowercase without using inbuilt functions.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    // Convert each uppercase character to lowercase manually
    for (int i = 0; i < input.length(); i++) {
        if (input[i] >= 'A' && input[i] <= 'Z') {
            input[i] = input[i] + ('a' - 'A'); // or simply add 32
        }
    }

    cout << "Lowercase string: " << input << endl;
    return 0;
}
