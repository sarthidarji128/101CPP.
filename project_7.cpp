#include<iostream>

// Function to check if a number is a perfect number
bool isPerfectNumber(int number) {
    int sum = 0;

    // Check if the number is negative or zero
    if (number <= 0) {
        return false;
    }

    // Calculate the sum of divisors
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum = sum + i;
        }
    }

    // Check if the sum of divisors is equal to the number
    if (sum == number) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int number;

    // Get the number from the user
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    // Check if the number is a perfect number
    switch (isPerfectNumber(number)) {
        case true:
            std::cout << number << " is a perfect number." << std::endl;
            break;
        case false:
            std::cout << number << " is not a perfect number." << std::endl;
            break;
    }

    return 0;
}