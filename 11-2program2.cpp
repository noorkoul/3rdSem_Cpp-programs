//Function with default argument:Area of circle
#include <iostream>
using namespace std;

// Function to calculate the area of a circle
double calculateArea(double radius, double pi = 3.14) {
    return pi * radius * radius;
}

int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Call with default pi
    double area1 = calculateArea(radius);
    cout << "Area (default pi): " << area1 << endl;

    // Call with custom pi
    double area2 = calculateArea(radius, 3.14159);
    cout << "Area (custom pi): " << area2 << endl;

    return 0;
}