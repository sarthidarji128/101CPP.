#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// A function to calculate the factorial of a number using memoization
int factorial(int n, unordered_map<int, int>& memo) {
  // If the factorial of n has already been calculated, return it from the memo
  if (memo.count(n) > 0) {
    return memo[n];
  }

  // Otherwise, calculate the factorial of n and store it in the memo
  int result = 1;
  for (int i = 2; i <= n; i++) {
    result =result * i;
  }
  memo[n] = result;

  // Return the factorial of n
  return result;
}

int main() {
  // Create a memo to store the factorials of numbers that have already been calculated
  unordered_map<int, int> memo;

  // Calculate and print the factorials of the numbers from 1 to 10
  for (int i = 1; i <= 10; i++) {
    cout << factorial(i, memo) << endl;
  }

  return 0;
}