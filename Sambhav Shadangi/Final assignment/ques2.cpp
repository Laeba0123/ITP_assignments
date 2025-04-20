/*2. Write a C++ program to find the total number of alphabets, digits and special characters in a string*/

 #include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int a = 0, d = 0, sc = 0;

    for (char ch : str) {
        if (isdigit(ch))
            d++;
        else if (isalpha(ch))
            a++;
        else if (!isspace(ch))
            sc++;
    }

    cout << "Alphabets: " << a << endl;
    cout << "Digits: " << d << endl;
    cout << "Special Characters: " << sc << endl;

    return 0;
}
