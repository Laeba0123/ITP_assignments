//Write a C++ program that takes two 2D arrays (matrices) of size 3×3 as input from the user. First, the program should calculate and 
// print the sum of the two original matrices. After that, it should compute the transpose of both the original matrices. Finally, the program
//should calculate and display the sum of the two transposed matricesas well.//

#include <iostream>
using namespace std;

void sumMatrices(int mat1[3][3], int mat2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}


void transposeMatrix(int mat[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[j][i] = mat[i][j];
        }
    }
}


void printMatrix(int mat[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int mat1[3][3], mat2[3][3];
    int sumOriginal[3][3], transposeMat1[3][3], transposeMat2[3][3], sumTransposed[3][3];

    
    cout << "Enter elements of the first 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter elements of the second 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> mat2[i][j];
        }
    }

    
    sumMatrices(mat1, mat2, sumOriginal);
    cout << "\nSum of the two original matrices:\n";
    printMatrix(sumOriginal);

    
    transposeMatrix(mat1, transposeMat1);
    transposeMatrix(mat2, transposeMat2);

    
    cout << "\nTranspose of the first matrix:\n";
    printMatrix(transposeMat1);

    cout << "\nTranspose of the second matrix:\n";
    printMatrix(transposeMat2);

    
    sumMatrices(transposeMat1, transposeMat2, sumTransposed);
    cout << "\nSum of the two transposed matrices:\n";
    printMatrix(sumTransposed);

    return 0;
}

