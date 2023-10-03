#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4, 1, 3, 5, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Create an array to store the frequency of elements
    int frequency[size];
    bool visited[size];

    for (int i = 0; i < size; i++) {
        frequency[i] = 1; // Initialize frequency to 1 for each element
        visited[i] = false; // Initialize visited flag to false for each element
    }

    // Count the frequency of each element
    for (int i = 0; i < size; i++) {
        if (visited[i]) {
            continue; // Skip elements that have already been counted
        }

        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                frequency[i]++; // Increment frequency for the same element
                visited[j] = true; // Mark the element as visited
            }
        }
    }

    // Display the frequency of each element
    cout << "Element\tFrequency" << endl;
    for (int i = 0; i < size; i++) {
        if (!visited[i]) {
            cout << arr[i] << "\t" << frequency[i] << endl;
        }
    }

    return 0;

}


// We define an array arr with elements for which we want to count frequencies.
// We calculate the size of the array arr.
// We create two arrays: frequency to store the frequency of each element and visited to keep track of whether an element has been visited during counting.
// We initialize the frequency array to 1 for each element and set the visited flags to false.
// We use nested loops to count the frequency of each element by comparing it with other elements in the array. We skip elements that have already been counted.
// Finally, we display the element and its frequency in a tabular format.