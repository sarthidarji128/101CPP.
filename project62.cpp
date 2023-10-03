#include <iostream>
using namespace std;

int main() {
    int n;

    // Prompt the user to enter the number of elements in the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 1; // Exit with an error code
    }

    int arr[n];

    // Prompt the user to enter the elements of the array
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Create arrays to store even and odd numbers
    int evenArr[n], oddArr[n];
    int evenCount = 0, oddCount = 0;

    // Segregate even and odd numbers
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            evenArr[evenCount++] = arr[i]; // Add even number to evenArr
        } else {
            oddArr[oddCount++] = arr[i];   // Add odd number to oddArr
        }
    }

    // Display even numbers
    cout << "Even numbers: ";
    for (int i = 0; i < evenCount; ++i) {
        cout << evenArr[i] << " ";
    }
    cout << endl;

    // Display odd numbers
    cout << "Odd numbers: ";
    for (int i = 0; i < oddCount; ++i) {
        cout << oddArr[i] << " ";
    }
    cout << endl;

    return 0;

}