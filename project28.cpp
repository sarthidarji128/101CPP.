#include <iostream>
using namespace std;

int main() {
    int N;
    int sum = 0;
    int i = 2; // Start from the first even number, which is 2

    // Input the value of N from the user
    cout << "Enter a positive integer N: ";
    cin >> N;

    // Use a while loop to find the sum of even numbers from 1 to N
    while (i <= N) {
        sum += i;
        i += 2; // Move to the next even number
    }

    // Print the sum of even numbers
    cout << "The sum of even numbers from 1 to " << N << " is: " << sum << std::endl;

    return 0;
}
