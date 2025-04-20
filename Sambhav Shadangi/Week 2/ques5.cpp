/*5. Write a C++ program to find the second smallest elements in a
 given array of integers(all elements of array distinct). */


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
     int ar[n];
     cout<<"Enter the array"<<endl;
     for(int i=0; i<n; i++){
        cin>>ar[i];
     }

     for(int i=0; i<n-1 ; i++){
        for (int j=i+1 ; j<n ; j++){
            if (ar[i]>ar[j]){
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    cout<<"The second smallest element in the array is "<<ar[1];
    return 0;

}