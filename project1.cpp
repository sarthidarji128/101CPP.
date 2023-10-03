#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a positive integer N: ";
    cin >> N;

    int sum = 0; // Initialize the sum to 0

    // Use a loop to calculate the sum of numbers from 1 to N
    for (int i = 1; i <= N; ++i) {
        sum += i;
    }

    cout << "The sum of numbers from 1 to " << N << " is: " << sum << endl;

    return 0;

}

// We first prompt the user to enter a positive integer N.
// We initialize a variable sum to 0. This variable will store the sum of the numbers.
// We use a for loop to iterate from 1 to N, adding each number to the sum variable in each iteration.
// After the loop completes, we print the sum, which represents the sum of all numbers from 1 to N.