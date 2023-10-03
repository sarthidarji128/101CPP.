#include <iostream>
using namespace std;

int main() 
{
    int height;

    cout << "Enter the height of the right-angled triangle: ";
    cin >> height;

    if (height <= 0) 
    {
        cout << "Invalid input. Height should be a positive integer." <<endl;
        return 1;
    }

    
    for (int i = 1; i <= height; ++i) 
    {
        
        for (int j = 1; j <= i; ++j) 
        {
            cout << "* ";
        }
        cout <<endl;
    }

    return 0;
}
