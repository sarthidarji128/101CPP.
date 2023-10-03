#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    const int maxSize = 100;
    int arr[maxSize];
    int n;

    
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0 || n > maxSize) 
    {
        cout << "Invalid array size." << endl;
        return 1; 
    }

   
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    
    unordered_set<int> uniqueElements;

   
    int uniqueArr[maxSize];
    int uniqueSize = 0;

    for (int i = 0; i < n; i++) 
    {
        if (uniqueElements.find(arr[i]) == uniqueElements.end()) 
        {
            uniqueElements.insert(arr[i]);
            uniqueArr[uniqueSize] = arr[i];
            uniqueSize++;
        }
    }


    cout << "Array with duplicates removed: ";
    for (int i = 0; i < uniqueSize; i++) 
    {
        cout << uniqueArr[i] << " ";
    }
    cout << endl;

    return 0;
}

