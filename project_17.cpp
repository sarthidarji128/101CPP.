#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the square of a number
int square(int num) {
  // Return the square of the number
  return num * num;
}

// Function to calculate the cube of a number
int cube(int num) {
  // Return the cube of the number
  return num * num * num;
}

// Main function
int main() {
  // Declare a variable to store the number
  int num;

  // Prompt the user to enter a number
  cout << "Enter a number: ";
  cin >> num;

  // Calculate the square and cube of the number
  int square_num = square(num);
  int cube_num = cube(num);

  // Display the square and cube of the number
  cout << "The square of :-" << num << " is " << square_num << endl;
  cout << "The cube of :-" << num << " is " << cube_num << endl;

  return 0;
}