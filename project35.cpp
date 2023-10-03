#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2;

    // Display a menu for the user
    cout << "Simple Calculator Menu:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "Enter your choice (1/2/3/4): ";
    cin >> operation;

    // Prompt the user to enter two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform the selected operation using a switch-case statement
    switch (operation) {
        case '1':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '2':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '3':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '4':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error! Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid choice! Please select a valid operation (1/2/3/4)." << endl;
            break;
    }

    return 0;

}


// We display a menu to the user, prompting them to choose an operation (addition, subtraction, multiplication, or division) by entering a number (1, 2, 3, or 4).
// We then prompt the user to enter two numbers.
// We use a switch-case statement to perform the selected operation and display the result. If the user chooses division and the second number is zero, we handle the division by zero error.
// If the user enters an invalid choice, we display an error message.