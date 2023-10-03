#include <iostream>

int main() {
    int n;

    // Input the number of rows
    std::cout << "Enter the number of rows: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        // Print spaces before stars
        for (int j = 1; j <= n - i; ++j) {
            std::cout << " ";
        }

        // Print stars
        for (int k = 1; k <= i; ++k) {
            std::cout << "*";
        }

        // Move to the next line for the next row
        std::cout << std::endl;
    }

    return 0;
}
