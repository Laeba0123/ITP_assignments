/* Write a cpp program that takes two 2D arrays(matrices) of size 3x3 as input from the user.First, 
the program should calculate and print the sum of two original matrices. 
After that, it should compute the transpose of both the original matrices. Finally, the program should 
calculate and display the sum of the two transposed matrices*/


#include <iostream>
using namespace std;

void base(int arr[3][3]){   
    cout<<"Enter the elements:";
    int i,j;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
}
void print(int arr[3][3]){
    int i,j;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void sum(int a[3][3],int b[3][3],int s[3][3]){
    int i,j;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            s[i][j] = a[i][j]+b[i][j];
        }
    }
}
void trsp(int a[3][3],int b[3][3]){
    int i,j;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            b[i][j]=a[j][i];
        }
    }
}
int main(){
    
    int arr1[3][3],arr2[3][3];
    int t1[3][3],t2[3][3];
    int sum1[3][3];
    base(arr1);
    cout<<"The matrix 1 is"<<endl;
    print(arr1);

    base(arr2);
    cout<<"The matrix 2 is"<<endl;
    print(arr2);
    trsp(arr1,t1);
    cout<<"The transpose matrix of matrix 1 is"<<endl;
    print(t1);
    trsp(arr2,t2);
    cout<<"The transpose matrix of matrix 2 is"<<endl;
    print(t2);


    sum(t1,t2,sum1);
    cout<<"The sum matrix of 2 transpose  matrices:"<<endl;
    print(sum1);

    return 0;
}
//OUTPUT


/*Enter the elements:1 2 3 4 5 6 7 8 9
The matrix 1 is
1 2 3
4 5 6
7 8 9
Enter the elements:9 8 7 6 5 4 3 2 1
The matrix 2 is
9 8 7
6 5 4
3 2 1
The transpose matrix of matrix 1 is
1 4 7
2 5 8
3 6 9
The transpose matrix of matrix 2 is
9 6 3 
8 5 2
7 4 1 
The sum matrix of 2 transpose  matrices:
10 10 10
10 10 10
10 10 10*/