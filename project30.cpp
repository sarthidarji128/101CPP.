#include <iostream>
using namespace std;

int main() {
    int number, digit, product = 1;

    // Prompt the user to enter an integer
    cout << "Enter an integer: ";
    cin >> number;

    // Make a copy of the number to avoid modifying the original
    int originalNumber = number;

    // Calculate the product of digits using a while loop
    while (number != 0) {
        digit = number % 10;  // Extract the last digit
        product *= digit;    // Multiply by the product
        number /= 10;        // Remove the last digit
    }

    // Output the result
    cout << "The product of the digits of " << originalNumber << " is: " << product << endl;

    return 0;

}


// We prompt the user to enter an integer using cin.
// We make a copy of the entered number as originalNumber to avoid modifying the original number.
// We use a while loop to extract digits one by one from the right to the left of the number. Inside the loop, we calculate the product of digits by multiplying the current digit with the product variable and remove the last digit from the number.
// The loop continues until there are no more digits left in the number (i.e., number becomes 0).
// Finally, we output the calculated product of the digits.