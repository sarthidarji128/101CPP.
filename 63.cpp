#include <iostream>
#include <algorithm>

using namespace std; 

int main() 
{
    int n, k;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) 
    {
        cout << "Invalid input. The number of elements should be greater than 0." << endl;
        return 1;
    }

    int arr[n];

    cout << "Enter " << n << " elements of the array:" << endl;
    for (int i = 0; i < n; ++i) 
    {
        cin >> arr[i];
    }

    cout << "Enter the value of K (1-" << n << "): ";
    cin >> k;

    if (k < 1 || k > n) 
    {
        cout << "Invalid input. K should be between 1 and " << n << "." << endl;
        return 1; 
    }

    sort(arr, arr + n);


    int kthSmallest = arr[k - 1];

    cout << "The " << k << "th smallest element is: " << kthSmallest << endl;

    return 0;
}
