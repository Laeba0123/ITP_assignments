/* Write a cpp program to remove all characters except alphabets in a string*/


#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string input, result;
    int i;
    
    cout << "Enter a string: ";
    getline(cin, input); 
    
    for (i=0;i<input.length();i++) {
        char ch=input[i];
        if (isalpha(ch)) { 
            result += ch; }
    }
    
    cout << "String after removing non-alphabet characters: " << result << endl;
    
    return 0;
}


//OUTPUT

/*Enter a string: hello12world 11
String after removing non-alphabet characters: helloworld*/