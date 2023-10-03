#include<iostream>
using namespace std;
// A C++ program to check if a number is prime using recursion

// Function to check if a number is prime
bool isPrime(int n)
{
    // If n is less than 2, it is not prime
    if (n < 2)
        return false;

    // If n is 2, it is prime
    if (n == 2)
        return true;

    // If n is divisible by 2, it is not prime
    if (n % 2 == 0)
        return false;

    // If n is not divisible by 2, check if it is divisible by any odd number up to the square root of n
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        if (n % i == 0)
            return false;
    }

    // If n is not divisible by any odd number up to the square root of n, it is prime
    return true;
}

// Driver code to test the above function
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n))
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;

    return 0;
}