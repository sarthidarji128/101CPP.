#include <iostream>
using namespace std;

int main()
{
    int num, reversedNum = 0;

    // Input the number from the user
    cout << "Enter a number: ";
    cin >> num;

    while (num != 0)
    {
        // Get the last digit of the number
        int digit = num % 10;

        // Append the digit to the reversed number
        reversedNum = reversedNum * 10 + digit;

        // Remove the last digit from the original number
        num = num / 10;
    }

    // Print the reversed number
    cout << "Reversed number: " << reversedNum << endl;

    return 0;
}
