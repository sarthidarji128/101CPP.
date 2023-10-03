#include <iostream>
using namespace std;

int main() 
{
    int n1, n2;

    cout << "Enter the first number: ";
    cin >> n1;

    cout << "Enter the second number: ";
    cin >> n2;

    int gcd = 1; 

    for (int i = 1; i <= n1 && i <= n2; i++) 
    {
        if (n1 % i == 0 && n2 % i == 0) 
        {
            gcd = i;
        }
    }

    cout << "The GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;

    return 0;
}
