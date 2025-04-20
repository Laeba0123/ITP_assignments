//Write a C++ program to move all the negative elements to one side of the array//
#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter the size of the array:";
    cin >>n;
    int arr[n];
    cout <<endl <<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    cin >>arr[i];
    cout <<endl <<"The array is:";
    for(int i=0;i<n;i++)
    cout <<arr[i] <<" ";
    int j=0;
for(int i=0;i<n;i++){
    if(arr[i]<0){
        if(i != j){
            swap(arr[i],arr[j]);
        }
        j++;
    }
}
cout <<endl <<"After moving negative elements:";
for(int i=0;i<n;i++)
cout <<arr[i] <<" ";
}