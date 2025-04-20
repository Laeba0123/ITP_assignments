#include <iostream>
#include <cctype> // for isalpha, isdigit
using namespace std;

int main() {
    string str;
    int alphabets = 0, digits = 0, specials = 0;

    cout << "Enter a string: ";
    getline(cin, str); // reads entire line including spaces

    for (char ch : str) {
        if (isalpha(ch))
            alphabets++;
        else if (isdigit(ch))
            digits++;
        else
            specials++;
    }

    cout << "Alphabets: " << alphabets << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special Characters: " << specials << endl;

    return 0;
}