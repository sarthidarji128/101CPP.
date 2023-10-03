#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // decreasing numbers
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

        // increasing numbers
        for (int j = 2; j <= i; j++)
        {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}