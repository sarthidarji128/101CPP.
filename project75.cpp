#include <iostream>
#include <string>
using namespace std;

// Function to swap two characters in a string
void swap(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

// Recursive function to generate permutations of a string
void generatePermutations(string str, int left, int right) {
    if (left == right) {
        // Base case: When the current permutation is complete
        cout << str << endl;
        return;
    }

    for (int i = left; i <= right; i++) {
        // Swap the current character (at index left) with character at index i
        swap(str[left], str[i]);

        // Recursively generate permutations for the remaining characters
        generatePermutations(str, left + 1, right);

        // Undo the previous swap to backtrack and try the next permutation
        swap(str[left], str[i]);
    }
}

int main() {
    string input;

    // Prompt the user to enter a string
    cout << "Enter a string: ";
    cin >> input;

    int length = input.length();

    // Check if the input string is empty
    if (length == 0) {
        cout << "Please enter a non-empty string." << endl;
        return 1; // Exit with an error code
    }

    // Generate and display all permutations of the input string
    cout << "Permutations of \"" << input << "\":" << endl;
    generatePermutations(input, 0, length - 1);

    return 0;

}


// We define a swap function to swap two characters in a string.
// We define a recursive function generatePermutations that generates all permutations of a given string. It takes the input string str, the left index left, and the right index right as parameters.
// In the generatePermutations function, when left is equal to right, it means we have formed a complete permutation, and we print it.
// We use a loop to iterate through the characters in the string, swapping the current character with each character to its right, and recursively generating permutations for the remaining characters.
// After generating each permutation, we undo the previous swap (backtrack) to try the next permutation.
// In the main function, we prompt the user to enter a string, and then we call the generatePermutations function to generate and display all possible permutations of the input string.