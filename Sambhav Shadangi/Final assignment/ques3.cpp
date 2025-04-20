/*3.  Write a C++ program to remove all characters except alphabets
 in a string*/

 #include <iostream>
#include <string>
using namespace std;

int main() {
    string str, rs;
    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
    
     {
        if (isalpha(ch))
            rs += ch;
    }
}

    cout << "The only alphabets are : " << rs << endl;
    return 0;
    }
