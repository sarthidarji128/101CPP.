#include <iostream>

int sumOfNaturalNumbers(int n)
{
    if (n == 1)
    {
        return 1; // Base case: Sum of 1 is 1
    }
    else
    {
        return n + sumOfNaturalNumbers(n - 1); // Recursive case: Sum of n = n + Sum of (n-1)
    }
}

int main()
{
    int n;

    // Input the value of n
    std::cout << "Enter a positive integer (n): ";
    std::cin >> n;

    if (n <= 0)
    {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1;
    }

    int sum = sumOfNaturalNumbers(n);

    std::cout << "Sum of natural numbers from 1 to " << n << " is: " << sum << std::endl;

    return 0;
}
