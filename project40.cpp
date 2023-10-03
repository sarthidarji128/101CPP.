#include <iostream>
using namespace std;

int main() {
    int number;
    
    // Prompt the user to enter a non-negative integer
    cout << "Enter a non-negative integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Invalid input. Please enter a non-negative integer." << endl;
    } else {
        unsigned long long factorial = 1;  // Initialize factorial to 1, using unsigned long long to handle large factorials

        for (int i = 2; i <= number; ++i) {
            factorial *= i;
        }

        cout << "Factorial of " << number << " is: " << factorial << endl;
    }

    return 0;
}
