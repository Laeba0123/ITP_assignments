/* Write a cpp program to find the second smallest element in a given array of integers(all elements 
of array distinct)*/


# include <iostream>
using namespace std;
void print_arr(int arr[],int sz){         //function to print array elements function
    for(int i=0; i<sz; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}
void base(int arr[], int n){             //function to input elements & print
    cout<<"Enter the elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"The array is: ";
    print_arr(arr, n);
}
int main(){
    int i,n;
    cout<<"Enter the size of array: "<<endl;  
    cin>>n; 
    int arr[n];
    base(arr,n);

    int min=arr[0], min2=arr[0];
    for(i=1; i<n; i++){
        if (min>arr[i])
        min = arr[i];
    }
    cout<<"The smallest element in the array:"<<min<<endl;
    for(i=0; i<n; i++){
        if(arr[i]>min && arr[i]< min2)
        min2 = arr[i];
    }
    cout<<"The second smallest element in the array:"<<min2<<endl;
    return 0;
} 


//OUTPUT
/*Enter the size of array: 
6
Enter the elements: 
-1 6 -2 4 2 1
The array is: -1 6 -2 4 2 1 
The smallest element in the array:-2
The second smallest element in the array:-1   */