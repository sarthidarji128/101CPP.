#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Prompt the user to enter the number of rows and columns
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    if (rows <= 0 || cols <= 0) {
        cout << "Invalid input. Please enter positive integers for rows and columns." << endl;
        return 1; // Exit with an error code
    }

    // Create a 2D array and initialize its elements
    int array[rows][cols];

    cout << "Enter the elements of the 2D array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> array[i][j];
        }
    }

    // Calculate and display the sum of elements in the main diagonal
    if (rows != cols) {
        cout << "The matrix is not square, so it doesn't have a main diagonal." << endl;
    } else {
        int diagonalSum = 0;
        for (int i = 0; i < rows; ++i) {
            diagonalSum += array[i][i]; // Sum the elements on the main diagonal
        }
        cout << "The sum of elements in the main diagonal is: " << diagonalSum << endl;
    }

    return 0;

}