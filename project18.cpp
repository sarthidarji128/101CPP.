#include <iostream>
using namespace std;

int main() {
    int number;

    // Prompt the user to enter a number
    cout << "Enter an integer: ";
    cin >> number;

    // Check if the number is even or odd using the modulo operator
    if (number % 2 == 0) {
        cout << number << " is an even number." << endl;
    } else {
        cout << number << " is an odd number." << endl;
    }

    return 0;

}


// We prompt the user to enter an integer using cin.
// We use the modulo operator % to check if the number is divisible by 2. If the remainder is 0, it's even; otherwise, it's odd.
// We display the result accordingly.