#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        // Check if character is uppercase (A-Z)
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // Convert to lowercase
        }
    }

    cout << "Lowercase string: " << str << endl;
    return 0;
}