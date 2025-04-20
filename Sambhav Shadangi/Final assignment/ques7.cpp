/*7. Write a C++ program to remove all occurrences of a given character from a string*/

 #include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char ch;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter the character to remove: ";
    cin >> ch;

    string rs = ""; // To store the modified string

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ch) {
            rs += str[i]; // Add characters that are not equal to 'ch'
        }
    }

    cout << "String after removing '" << ch << "' is : " << rs << endl;

    return 0;
}
