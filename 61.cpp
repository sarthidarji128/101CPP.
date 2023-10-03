#include <iostream>
using namespace std;

int findMajEle(int arr[], int size) 
{
    int candidate = arr[0];
    int count = 1;

   
    for (int i = 1; i < size; i++) 
    {
        if (arr[i] == candidate) 
        {
            count++;
        } 
        else 
        {
            count--;
            if (count == 0) 
            {
                candidate = arr[i];
                count = 1;
            }
        }
    }

    
    count = 0;
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == candidate) 
        {
            count++;
        }
    }

    if (count > size / 2) 
    {
        return candidate;
    }

    return -1; 
}

int main() 
{
    const int maxSize = 100; 
    int arr[maxSize];
    int size;

    
    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 0 || size > maxSize) 
    {
        cout << "Invalid array size." << endl;
        return 1;
    }

    
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) 
    {
        cin >> arr[i];
    }

    
    int majEle = findMajEle(arr, size);

    if (majEle != -1) 
    {
        cout << "Majority element: " << majEle << endl;
    } 
    else 
    {
        cout << "No majority element found." << endl;
    }

    return 0;
}
