#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input the number of rows and columns in the matrix
    cout<< "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int matrix[rows][cols];

    // Input the elements of the matrix
    cout << "Enter the elements of the matrix:" <<endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Find and print the transpose of the matrix
    cout << "Transpose of the matrix:" << endl;
    for (int j = 0; j < cols; ++j) {
        for (int i = 0; i < rows; ++i) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
