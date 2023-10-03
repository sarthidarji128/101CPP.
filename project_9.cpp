#include<iostream>

// Function to calculate the power of a number
double power(double base, int exponent) {
    double result = 1;

    // Check if the exponent is negative
    if (exponent < 0) {
        for (int i = 0; i < -exponent; i++) {
            result = result / base;
        }
    } else {
        for (int i = 0; i < exponent; i++) {
            result = result * base;
        }
    }

    return result;
}

int main() {
    double base;
    int exponent;

    // Get the base number and the exponent from the user
    std::cout << "Enter a base number: ";
    std::cin >> base;
    std::cout << "Enter an exponent: ";
    std::cin >> exponent;

    // Calculate the power of the base number
    double result = power(base, exponent);

    // Print the result
    std::cout << base << " is base and the power is " << exponent << " And the result is  " << result << std::endl;
;
    return 0;
}