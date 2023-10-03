#include <iostream>
using namespace std;

int main()
{
    char currentChar = 'A';
    int numRows;

    // Input the number of rows
    cout << "Enter the number of rows: ";
    cin >> numRows;

    int counter = 1; // Counter to keep track of which character to print

    for (int i = 1; i <= numRows; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << currentChar;
            if (counter < i)
            {
                cout << " ";
            }
            currentChar++;
            counter++;
        }
        cout << endl;
    }

    return 0;
}
