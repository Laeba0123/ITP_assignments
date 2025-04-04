//Write a C++ program to print the pattern  
//forn=3             forn =2
/*12.                 12
1122.               1122
112233
111222333*/

#2include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= i; k++) {
                cout << j;
            }
        }
        cout << endl;
    }
    
    return 0;
}