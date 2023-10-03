#include <iostream>
#include <cmath>

// Function to calculate the area of a triangle using the formula: Area = 0.5 * base * height
double calculateArea(double base, double height) {
    return 0.5 * base * height;
}

// Function to calculate the area of a triangle using the formula: Area = sqrt(s * (s - a) * (s - b) * (s - c))
// where s is the semi-perimeter: s = (a + b + c) / 2
// double calculateAreaoft(double a, double b, double c) {
//     double s = (a + b + c) / 2;
//     return sqrt(s * (s - a) * (s - b) * (s - c));
// }

int main() {
    double base, height, a, b, c;

    // Method 1: Using the formula: Area = 0.5 * base * height
    std::cout << "Enter the base and height of the triangle: ";
    std::cin >> base >> height;
    std::cout << "The area of the triangle is: " << calculateArea(base, height) << std::endl;

    // Method 2: Using the formula: Area = sqrt(s * (s - a) * (s - b) * (s - c))
    // std::cout << "Enter the lengths of the three sides of the triangle: ";
    // std::cin >> a >> b >> c;
    // std::cout << "The area of the triangle is: " << calculateAreaoft(a, b, c) << std::endl;

    return 0;
}