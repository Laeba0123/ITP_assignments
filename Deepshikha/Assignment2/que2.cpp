/* Write a cpp program to sort a given array using functions*/

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
void sort(int [],int);           //function prototype
int main(){
    int i,n;
    cout<<"Enter the size of array: "<<endl;  
    cin>>n; 
    int arr[n];   
    base(arr,n);                 //enter element function call
    cout<<"\n The sorted array is:";
    sort(arr,n);
    print_arr(arr, n);
    return 0;
}
void sort(int arr[], int sz){    //bubble sort algo function
    for(int i =0; i < sz-1; i++){
        for(int j =0; j < sz-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
}

//OUTPUT
/*Enter the size of array: 
6
Enter the elements: 
5 8 9 4 3 2
The array is: 5 8 9 4 3 2 

The sorted array is:2 3 4 5 8 9  */