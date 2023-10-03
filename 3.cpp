#include <iostream>
using namespace std;


int fact(int n) 
{
    if (n <= 1) 
    {
        return 1;
    } else 
    {
        return n * fact(n - 1);
    }
}

int main() 
{
    int num;
    
    cout << "Enter a positive integer: ";
    cin >> num;
    
    if (num < 0) 
    {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else 
    {
        int result = fact(num);
        cout << "Factorial of " << num << " is: " << result << endl;
    }
    
    return 0;
}



