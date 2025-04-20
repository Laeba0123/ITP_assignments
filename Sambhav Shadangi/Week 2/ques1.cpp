/*1. Take two array as input, merge them and print it in reverse order using loop*/


#include <iostream>
using namespace std;
    int main() {
        int n1, n2;
        cout<<"Enter size of 1st array"<<endl;
        cin >> n1;
        cout<<"Enter array 1"<<endl;
        int ar1[n1];
        for (int i = 0; i < n1; i++) {
            cin >> ar1[i];
        }
        
        cout<<"Enter size of 2nd array"<<endl;
        cin >> n2;
        cout<<"Enter array 2"<<endl;
        int ar2[n2];
        for (int i = 0; i < n2; i++) {
            cin >> ar2[i];
        }

        int mgar[n1+n2];
        for (int i=0;i<n1;i++){
            mgar[i]=ar1[i];
        }

        for(int i=0 ; i<n2;i++){
            mgar[n1+i] = ar2[i];
        }
        
        cout<<"The merged array in reverse order is "<<endl;
        for(int i=n1+n2-1; i>=0;i--){
            cout<<mgar[i]<<" ";
        }
    return 0;
    
}