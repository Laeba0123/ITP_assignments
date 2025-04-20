/*Write a cpp program to find maximum occuring integer in an array*/


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
    int n,i,count=0;
    cout<<"Enter the size of array"<<endl;    
    cin>>n;
    int arr[n];
    base(arr, n);

    int maxin = arr[0];       //assume a basis element
    for(i=0; i<n; i++){
        int ct = 1;
        for(int j = i+1; j<n; j++){
            if (arr[i] == arr[j]){      //brackets are v.imp
            ct ++;
            }
        }
        if(ct > count){
            count = ct;
            maxin = arr[i];       //replaced after running the program
        }
    }

    cout<<"Maximum occuring integer "<<maxin<<" occuring a total of "<<count<<" times"<<endl;
    return 0;
}


//OUTPUT
/*Enter the size of array
7
Enter the elements: 
4 6 2 6 1 6 4
The array is: 4 6 2 6 1 6 4 
Maximum occuring integer 6 occuring a total of 3 times  */