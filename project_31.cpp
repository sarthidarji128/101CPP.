#include <iostream>
  
using namespace std;
  
int main()
{
    int n, r, sum = 0, temp;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if (sum == temp)
        cout << "Yes, it is an Armstrong number.";
    else
        cout << "No, it is not an Armstrong number.";
  
    return 0;
}