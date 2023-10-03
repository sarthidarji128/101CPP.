#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() 
{
    int size1, size2;

   
    cout << "Enter the size of the first array: ";
    cin >> size1;

    if (size1 <= 0) 
    {
        std::cout << "Invalid input. The size of the array should be greater than 0." <<endl;
        return 1;
    }


    vector<int> arr1(size1);
    cout << "Enter the elements of the first array:" <<endl;
    for (int i = 0; i < size1; ++i) 
    {
        std::cin >> arr1[i];
    }

    
    cout << "Enter the size of the second array: ";
    cin >> size2;

    if (size2 <= 0) 
    {
        cout << "Invalid input. The size of the array should be greater than 0." <<endl;
        return 1; 
    }

    
    vector<int> arr2(size2);
    cout << "Enter the elements of the second array:" <<endl;
    for (int i = 0; i < size2; ++i) 
    {
        cin >> arr2[i];
    }

   
    unordered_set<int> set1(arr1.begin(), arr1.end());
    unordered_set<int> set2(arr2.begin(), arr2.end());

    
    vector<int> intersection;
    for (const int& num : set1) 
    {
        if (set2.count(num) > 0) 
        {
            intersection.push_back(num);
        }
    }

    
    if (!intersection.empty()) 
    {
        cout << "Intersection of the two arrays:" <<endl;
        for (const int& num : intersection) 
        {
           cout << num << " ";
        }
       cout <<endl;
    } else 
    {
        cout << "No intersection found." <<endl;
    }

    return 0;
}
