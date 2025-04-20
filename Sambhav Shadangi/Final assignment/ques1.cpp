/*1. Write a C++ program to move all the negative elements to one side of the array.*/

 #include <iostream>
 using namespace std;
 
 void movenegatives(int arr[], int n) {
     int l = 0, r = n - 1;
     while (l <= r) {
         if (arr[l] < 0 && arr[r] < 0) {
             l++;
         } else if (arr[l] >= 0 && arr[r] < 0) {
             swap(arr[l], arr[r]);
             l++;
             r--;
         } else if (arr[l] >= 0 && arr[r] >= 0) {
             r--;
         } else {
             l++;
             r--;
         }
     }
 }
 
 int main() {
    int num;
    cout<<"Enter size of array ";
    cin>>num;
    int ar[num];
    cout<<"Enter array";
    for(int i=0;i<num;i++){
        cin>>ar[i];
    }
     int n = sizeof(ar) / sizeof(ar[0]);
 
     movenegatives(ar, n);
 
     for (int i = 0; i < n; i++)
         cout << ar[i] << " ";
     cout << endl;
 
     return 0;
 }
 