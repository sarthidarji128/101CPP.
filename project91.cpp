#include <iostream>
using namespace std;

int main() {
    int n;

    // Prompt the user to enter the number of rows
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        // Print spaces before asterisks
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        // Print asterisks
        for (int k = 0; k < 2 * (n - i) - 1; k++) {
            cout << "*";
        }

        // Move to the next line
        cout << endl;
    }

    return 0;

}


// We prompt the user to enter the number of rows n for the pattern.
// We use two nested loops to print the spaces before the asterisks and the asterisks themselves.
// The outer loop (i) iterates through the rows from 0 to n-1.
// In each row, the first inner loop (j) prints the spaces before the asterisks, and it prints i spaces because the number of spaces at the beginning of each row is equal to the row number.
// The second inner loop (k) prints the asterisks. The number of asterisks in each row is calculated as 2 * (n - i) - 1, where (n - i) represents the number of asterisks in the middle row, and we subtract 1 for each row above and below the middle row.
// After printing the spaces and asterisks in each row, we move to the next line.