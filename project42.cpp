#include <iostream>
using namespace std;

int main() {
    int N;
    double sum = 0.0;

    // Prompt the user to enter a positive integer N
    cout << "Enter a positive integer N: ";
    cin >> N;

    if (N <= 0) {
        cout << "Invalid input. Please enter a positive integer." << endl;
    } else {
        int sign = 1;  // To alternate between positive and negative terms

        for (int i = 1; i <= N; ++i) {
            double term = 1.0 / i;  // Calculate the current term
            sum += sign * term;    // Add or subtract the term from the sum
            sign *= -1;           // Change the sign for the next term
        }

        cout << "The sum of the series is: " << sum << endl;
    }

    return 0;

}



// We prompt the user to enter a positive integer N.
// We check if the entered value of N is positive. If it's not, we display an error message.
// We use a loop to iterate from 1 to N, calculating each term of the series as 1/i, where i is the current iteration variable.
// We alternate between adding and subtracting the terms from the sum using the sign variable, which starts as 1 and changes its sign with each term (positive, negative, positive, and so on).
// Finally, we print the calculated sum of the series.