/* Write a cpp program to copy the elements of one array into other array*/

# include <iostream>
using namespace std;
void base(int arr[], int n){             //function to input elements & print
    cout<<"Enter the elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"The array is: ";
    print_arr(arr, n);
}
void print_arr(int arr[],int sz){         //function to print array elements function
    for(int i=0; i<sz; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

int main(){
    int i,n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    int arr1[n],arr2[n];
    base(arr1,n);
    for(i=0; i<n; i++){
        arr2[i]=arr1[i];                //copies elements of original array to copied one
    }
    cout<<"The elements of copied array:";
    print_arr(arr2, n);
    return 0;
} 


//OUTPUT
/*Enter the size of array:
6
Enter the elements:
1 2 3 4 5 6
The array is: 1 2 3 4 5 6
The elements of copied array:1 2 3 4 5 6 */