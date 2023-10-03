#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
    string input;

    // Input a string from the user
    cout << "Enter a string: ";
    cin >> input;

    // Make a copy of the input string and reverse it
    string reversed = input;
    string(reversed.begin(), reversed.end());

    // Check if the original string is the same as the reversed string
    if (input == reversed)
    {
        cout << "The string is a palindrome." << std::endl;
    }
    else
    {
        cout << "The string is not a palindrome." << std::endl;
    }

    return 0;
}
