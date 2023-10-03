#include <iostream>
using namespace std;

// Function to calculate the power of a number using recursion
double power(double base, int exponent) {
    if (exponent == 0) {
        return 1.0; // Any number raised to the power of 0 is 1
    } else if (exponent > 0) {
        return base * power(base, exponent - 1);
    } else {
        // Negative exponent: Calculate the reciprocal of the base
        return 1.0 / (base * power(base, -exponent - 1));
    }
}

int main() {
    double base;
    int exponent;

    // Prompt the user to enter the base and exponent
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    // Calculate and display the result
    double result = power(base, exponent);
    cout << base << " raised to the power of " << exponent << " is: " << result << endl;

    return 0;

}


// We define a recursive function power that calculates the power of a number. It takes two parameters: base and exponent.
// In the power function, if the exponent is 0, we return 1 (any number raised to the power of 0 is 1).
// If the exponent is positive, we recursively call the power function with a reduced exponent until exponent becomes 0.
// If the exponent is negative, we calculate the reciprocal of the base and recursively call the power function with a positive exponent (converted from the negative exponent).
// In the main function, we prompt the user to enter the base and exponent, calculate the result using the power function, and display the result.