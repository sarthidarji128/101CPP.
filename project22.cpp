#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;

    // Input three numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Using nested if-else statements to find the largest number
    if (num1 >= num2) {
        if (num1 >= num3) {
            cout << "The largest number is: " << num1 << endl;
        } else {
            cout << "The largest number is: " << num3 << endl;
        }
    } else {
        if (num2 >= num3) {
            cout << "The largest number is: " << num2 << endl;
        } else {
            cout << "The largest number is: " << num3 << endl;
        }
    }

    return 0;

}


// We declare three double variables num1, num2, and num3 to store the three input numbers.
// We prompt the user to enter these three numbers using cin.
// We use nested if-else statements to compare the three numbers and determine which one is the largest.
// The outer if-else statement checks if num1 is greater than or equal to num2, and the inner if-else statement checks whether the largest of the first two numbers (num1 and num2) is also greater than or equal to num3.
// The program then prints the largest number based on the nested if-else conditions.