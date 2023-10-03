#include <iostream>
using namespace std;

int main()
{
    int n;
    double sum = 0.0;

    // Input the number of elements in the array
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid input. Please enter a positive number of elements." << endl;
        return 1;
    }

    double arr[n];

    // Input the elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    double average = sum / n;

    cout << "The average of the elements is: " << average << endl;

    return 0;
}
