#include <iostream>

using namespace std;

int main() 
{
    char currentChar = 'E';

    for (int i = 5; i >= 1; i--) 
    {
        for (int j = 1; j <= i; j++) 
        {
            cout << currentChar;
        }

        currentChar--;

        cout << endl;
    }

    return 0;
}

