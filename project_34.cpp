#include <iostream>
using namespace std;
int main() {
    int num, sum = 0, remainder;

    cout << "Enter a number: ";
    cin >> num;

    // Calculate the sum of digits using a do-while loop
    do {
        remainder = num % 10;       // Get the last digit of the number
        sum = sum +remainder;       // Add the last digit to the sum
        num = sum / 10;             // Remove the last digit from the number
    } while (num != 0);             // Repeat until the number becomes 0

    cout << "Sum of digits: " << sum << endl;

    return 0;
}