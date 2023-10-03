#include <iostream>
using namespace std;

int main() {
    int marks;

    // Ask the user to enter the student's marks
    cout << "Enter the student's marks (0-100): ";
    cin >> marks;

    // Check the range of marks and assign a grade
    char grade;

    if (marks >= 90 && marks <= 100) {
        grade = 'A';
    } else if (marks >= 80 && marks < 90) {
        grade = 'B';
    } else if (marks >= 70 && marks < 80) {
        grade = 'C';
    } else if (marks >= 60 && marks < 70) {
        grade = 'D';
    } else if (marks >= 0 && marks < 60) {
        grade = 'F';
    } else {
        cout << "Invalid input! Marks should be in the range 0-100." << endl;
        return 1; // Exit with an error code
    }

    // Output the grade
    cout << "The student's grade is: " << grade << endl;

    return 0;

}


// We prompt the user to enter the student's marks using cin.
// We use conditional statements (if-else if) to check the range of marks and assign a grade (A, B, C, D, or F) accordingly.
// If the entered marks fall outside the valid range (0-100), we display an error message and exit the program with an error code.
// Finally, we output the determined grade.