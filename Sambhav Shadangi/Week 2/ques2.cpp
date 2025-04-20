/*2. Write a C++ program to sort a given array using function.*/


#include<iostream>
using namespace std;

void sortarray(int a[], int n){
    for(int i=0; i<n-1 ; i++){
        for (int j=i+1 ; j<n ; j++){
            if (a[i]>a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }


}


int main(){
    int size;
    cout<<"Enter size of array"<<endl;
    cin>>size;

    int ar[size];
    cout<<"Enter the array"<<endl;
    for (int i=0 ; i<size ; i++){
        cin>>ar[i];
    }

    sortarray(ar , size);
    
    cout<<"The sorted array is"<<endl;
    for (int i=0 ; i<size ; i++){
        cout<<ar[i]<<" ";

    }
    return 0;

}


void sort_array(int a[], int n){
    int max=0;
    for(int i=0; i<n-1 ; i++){
        for (int j=i+1 ; j<n ; j++){
            if (a[i]>a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }


}