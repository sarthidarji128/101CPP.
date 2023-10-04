#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
  // Check for numbers less than or equal to 1
  if (n <= 1) {
    return false;
  }

  // Handle special cases for numbers 2 and 3
  if (n == 2 || n == 3) {
    return true;
  }

  // Optimization: Only need to check divisors up to the square root of n
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      return false;
    }
  }

  // If no divisors found, n is prime
  return true;
}

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;

  if (isPrime(n)) {
    cout << n << " is a prime number." << endl;
  } else {
    cout << n << " is not a prime number." << endl;
  }

  return 0;
}