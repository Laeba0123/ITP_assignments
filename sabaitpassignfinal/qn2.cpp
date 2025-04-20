// Write a C++ program to find the total number of alphabets,digits and special characters in a string//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    int alphabets = 0, digits = 0, specialChars = 0;

    cout << "Enter a string: ";
    getline(cin, input); // allows input with spaces

    for (char ch : input) {
        if (isalpha(ch))
            alphabets++;
        else if (isdigit(ch))
            digits++;
        else
            specialChars++;
    }

    cout << "Total Alphabets: " << alphabets << endl;
    cout << "Total Digits: " << digits << endl;
    cout << "Total Special Characters: " << specialChars << endl;

    return 0;
}
