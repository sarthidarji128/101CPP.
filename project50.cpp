#include <iostream>
using namespace std;

int main() {
    char str[] = "Hello, World!"; // Define an array of characters

    // Calculate the length of the string manually
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    cout << "The length of the string is: " << length << endl;

    return 0;

}


// we use a while loop to iterate through the characters in the array until we encounter the null character '\0', which marks the end of the string.
//  We increment the length variable in each iteration to calculate the length of the string manually.

