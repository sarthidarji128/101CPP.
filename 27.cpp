#include <iostream>
using namespace std;

int main() 
{
    int n;
    
    cout << "Enter a positive integer N: ";
    cin >> n;

    if (n <= 0) 
    {
        cout << "Please enter a positive integer." << endl;
    } 
    else 
    {
        int num = 1; 

        cout << "Natural numbers from 1 to " << n << " are:" << endl;

        while (num <= n) 
        {
            cout << num << ",";
            num++;
        }

        cout << endl;
    }

    return 0;
}
