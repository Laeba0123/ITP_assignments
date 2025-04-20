/*6. Write a C++ program that takes two 2D arrays (matrices) of size
 3×3 as input from the user. First, the program should calculate and
 print the sum of the two original matrices. After that, it should compute
 the transpose of both the original matrices. Finally, the program
 should calculate and display the sum of the two transposed matrices
 as well*/


 #include<iostream>
 using namespace std;
 int main(){
     
    int ar1[3][3];
    cout<<"Enter elements of 1st array";
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            cin>>ar1[i][j];
        }
    }

    int ar2[3][3];
    cout<<"Enter elements of 1st array";
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            cin>>ar2[i][j];
        }
    }


    int sum[3][3];
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            sum[i][j]=ar1[i][j]+ar2[i][j];
        }
    }

    int tr1[3][3];
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            tr1[i][j]=ar1[j][i];
        }
    }

    int tr2[3][3];
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            tr2[i][j]=ar2[j][i];
        }
    }

    int sumtranspose[3][3];
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            sumtranspose[i][j]=tr1[i][j]+tr2[i][j];
        }
    }
    
    cout<<"The sum of matrices is "<<endl;
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
           cout<<sum[i][j]<< " ";
        }
    }
    
    cout<<"The transpose of 1st matrix is"<<endl;
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
           cout<<tr1[i][j]<< " ";
        }
    }

    cout<<"The transpose of 2nd matrix is"<<endl;
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
           cout<<tr2[i][j]<< " ";
        }
    }

    cout<<"The sum of transpose of the matrices is "<<endl;
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
           cout<<sumtranspose[i][j]<< " ";
        }
    }
    return 0;
 }