#include <iostream>
using namespace std;

int main() {
    int matrix1[3][3], matrix2[3][3], sum[3][3], transpose1[3][3], transpose2[3][3], sumTranspose[3][3];

    // Input two 3x3 matrices
    cout << "Enter elements of first 3x3 matrix:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> matrix1[i][j];

    cout << "Enter elements of second 3x3 matrix:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> matrix2[i][j];

    // Calculate and print the sum of the original matrices
    cout << "Sum of the two matrices:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
            cout << sum[i][j] << " ";
            if (j == 2) cout << endl;
        }

    // Calculate and print the transpose of both matrices
    cout << "\nTranspose of the first matrix:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            transpose1[j][i] = matrix1[i][j];
            cout << transpose1[j][i] << " ";
            if (j == 2) cout << endl;
        }

    cout << "\nTranspose of the second matrix:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            transpose2[j][i] = matrix2[i][j];
            cout << transpose2[j][i] << " ";
            if (j == 2) cout << endl;
        }

    // Calculate and print the sum of the transposed matrices
    cout << "\nSum of the transposed matrices:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            sumTranspose[i][j] = transpose1[i][j] + transpose2[i][j];
            cout << sumTranspose[i][j] << " ";
            if (j == 2) cout << endl;
        }

    return 0;
}