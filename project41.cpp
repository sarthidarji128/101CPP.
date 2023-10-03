#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Prompt the user to enter two positive integers
    cout << "Enter the first positive integer: ";
    cin >> num1;
    
    cout << "Enter the second positive integer: ";
    cin >> num2;

    // Find the maximum of the two numbers
    int maxNum = (num1 > num2) ? num1 : num2;

    // Initialize LCM to the maximum of the two numbers
    int lcm = maxNum;

    while (true) {
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            // LCM is found when it is divisible by both numbers
            break;
        }
        // Increment the LCM by the maximum number to check the next multiple
        lcm += maxNum;
    }

    cout << "The LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;

    return 0;

}


// We prompt the user to enter two positive integers, num1 and num2.
// We find the maximum of the two numbers and store it in maxNum.
// We initialize the LCM (lcm) to the maxNum.
// We use a while loop that continues until we find the LCM. Inside the loop, we check if lcm is divisible by both num1 and num2. If it is, we break out of the loop; otherwise, we increment lcm by maxNum to check the next multiple.
// Finally, we print the calculated LCM.