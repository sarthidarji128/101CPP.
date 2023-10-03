#include <iostream>
using namespace std;

int main() 
{
    int n, first = 0, second = 1, next;

    cout << "Enter the number of terms for the Fibonacci sequence: ";
    cin >> n;

    cout << "Fibonacci Sequence up to " << n << " terms: ";

    for (int i = 0; i < n; i++) 
    {
        if (i <= 1) 
        {
            next = i;
        } else 
        {
            next = first + second;
            first = second;
            second = next;
        }

        cout << next << ",";
    }

    cout << endl;

    return 0;
}
