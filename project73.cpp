#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    if (n == 0) {
        return 0;  // Base case: If n is 0, the sum is 0
    } else {
        return n % 10 + sumOfDigits(n / 10);  // Recursive case: Add the last digit to the sum of the rest
    }
}

int main() {
    int num;

    // Input the number
    cout << "Enter a non-negative integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1;
    }

    int sum = sumOfDigits(num);

    cout << "Sum of digits of " << num << " is: " << sum << endl;

    return 0;
}
