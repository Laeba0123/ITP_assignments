#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter a Number: ";
    cin>>num;
    for (int i=1;i<= num;i++) {
        for (int j=1;j<=i;j++) {
            cout<<j;
        }
        int space=2*(num-i);
        for (int s=1;s<=space;s++) {
            cout<<" ";
        }
        for (int j=i;j>=1;j--) {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}