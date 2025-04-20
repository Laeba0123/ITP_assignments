/* Write a cpp code to check whether a given string is a palindrome */


#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);  
    int start = 0;
    int end = str.length() - 1;
    while (start < end) {
        if (str[start] != str[end]) {
            break; 
        }
        start++;
        end--;
    }
    if (start >= end) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}


//OUTPUT
/* Enter a string: madam
The string is a palindrome.

Enter a string: hello
The string is not a palindrome.
*/
