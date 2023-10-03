#include <iostream>
using namespace std;


int findHCF(int n1, int n2) 
{
    if (n2 == 0) 
    {
        return n1; 
    } else 
    {
        return findHCF(n2, n1 % n2);
    }
}

int main()
{
    int n1, n2;

    cout << "Enter the first number: ";
    cin >> n1;

    cout << "Enter the second number: ";
    cin >> n2;

    if (n1 < 0 || n2 < 0) 
    {
        cout << "Invalid input. Numbers should be non-negative." << endl;
        return 1; 
    }

    int hcf = findHCF(n1, n2);

    cout << "The HCF of " << n1 << " and " << n2 << " is: " << hcf << endl;

    return 0;
}
