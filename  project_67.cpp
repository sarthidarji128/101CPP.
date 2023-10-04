#include<iostream>
using namespace std;

void readMatrix(int matrix[10][10], int row, int col) {
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }
}

void addMatrices(int firstMatrix[10][10], int secondMatrix[10][10], int result[10][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
        }
    }
}

void displayMatrix(int matrix[10][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    int firstMatrix[10][10], secondMatrix[10][10], result[10][10];
    int row1, col1, row2, col2;

    cout << "Enter dimensions of first matrix: ";
    cin >> row1 >> col1;
    readMatrix(firstMatrix, row1, col1);

    cout << "Enter dimensions of second matrix: ";
    cin >> row2 >> col2;
    readMatrix(secondMatrix, row2, col2);

    if (row1 != row2 || col1 != col2) {
        cout << "Matrices cannot be added. Dimensions are not the same.\n";
        return 0;
    }

    addMatrices(firstMatrix, secondMatrix, result, row1, col1);

    cout << "Resultant matrix:\n";
    displayMatrix(result, row1, col1);

    return 0;
}