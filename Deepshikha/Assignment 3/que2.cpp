/* Write a cpp program to find the total number of alphabets,digits and special characters in a string*/


#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str;
    int alphabets = 0, digits = 0, special = 0;

    cout << "Enter a string: ";
    getline(cin, str); 

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        if (isalpha(ch)) {
            alphabets++;
        }
        else if (isdigit(ch)) { 
            digits++;
        }
        else{
            special++;
        }
    }

    cout << "\nTotal number of:" << endl;
    cout << "Alphabets: " << alphabets << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special characters: " << special << endl;

    return 0;
}

//OUTPUT
/* Enter a string: hello world!!299

Total number of:
Alphabets: 10
Digits: 3
Special characters: 3 */