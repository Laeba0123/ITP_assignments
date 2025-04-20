/* 4. Write a C++ program to find maximum occurring integer in an array.*/


#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of array"<<endl;
    cin >> n;
    int arr[n], freq[101] = {0};
    cout<<"Enter the array"<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    int maxcount = 0, maxelement = 0;
    for (int i = 0; i < 101; i++) {
        if (freq[i] > maxcount) {
            maxcount = freq[i];
            maxelement = i;
        }
    }
    cout<<"The maximum occuring element is "<<endl;
    cout << maxelement;
    return 0;
}
