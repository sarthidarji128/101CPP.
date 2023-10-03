#include <iostream>
#include <vector>

using namespace std;

// A function to calculate the number of ways to climb stairs with varying step sizes
int climb_stairs(int n, vector<int> steps)
{
  // Create a vector to store the number of ways to climb stairs for each step size
  vector<int> num_ways(n + 1, 0);

  // Initialize the number of ways to climb stairs for the first step size
  num_ways[0] = 1;

  // Iterate over the step sizes
  for (int step : steps) {
    // Iterate over the number of stairs
    for (int i = step; i <= n; i++) {
      // Add the number of ways to climb stairs for the previous step size to the number of ways to climb stairs for the current step size
      num_ways[i] += num_ways[i - step];
    }
  }

  // Return the number of ways to climb stairs for the last step size
  return num_ways[n];
}

int main() {
  // Get the number of stairs
  int n;
  cin >> n;

  // Get the step sizes
  vector<int> steps;
  for (int i = 0; i < n; i++) {
    int step;
    cin >> step;
    steps.push_back(step);
  }

  // Calculate the number of ways to climb stairs
  int num_ways = climb_stairs(n, steps);

  // Print the number of ways to climb stairs
  cout << num_ways << endl;

  return 0;
}