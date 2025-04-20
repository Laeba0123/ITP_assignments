/* 3. Write a C++ program to copy the elements of one array into another
 array.*/


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int ar[n];
    cout<<"Enter the array"<<endl;
    for ( int i=0; i<n; i++){
        cin>>ar[i];
    }

    int car[n];
    for (int i=0; i<n; i++){
        car[i]=ar[i];
    }

    cout<<"The copied array is"<<endl;
    for (int i=0; i<n; i++){
        cout<<car[i]<<" ";
    }
    return 0;
}