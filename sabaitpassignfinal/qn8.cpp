// Write a C++ program to check whether a given string is a palindrome. (without using any built-in reverse function)

#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    bool isPalindrome = true;

    cout << "Enter a string: ";
    getline(cin, input);

    int start = 0;
    int end = input.length() - 1;

    while (start < end) {
        if (input[start] != input[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}
