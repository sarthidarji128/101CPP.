#include <iostream>
using namespace std;

int main() {
    int number, limit;

    // Prompt the user to enter a number and a limit
    cout << "Enter a number: ";
    cin >> number;

    cout << "Enter the limit for the multiplication table: ";
    cin >> limit;

    // Print the multiplication table for the entered number up to the specified limit
    cout << "Multiplication Table for " << number << " up to " << limit << ":" << endl;
    for (int i = 1; i <= limit; ++i) {
        cout << number << " x " << i << " = " << (number * i) << endl;
    }

    return 0;
}



// We prompt the user to enter a number using cin.
// After prompting the user to enter a number, we also prompt the user to enter the limit up to which they want to generate the multiplication table.
// WE use the limit variable in the for loop to control how far the multiplication table is generated, from 1 up to the specified limit.