// 6. Overloaded Constructor - Area of Circle and Rectangle
#include <iostream>
using namespace std;
class Shape {
private:
    double radius, length, breadth;
public:
    Shape(double r) { radius = r; cout << "Circle Area: " << 3.14159 * radius * radius << endl; }
    Shape(double l, double b) { length = l; breadth = b; cout << "Rectangle Area: " << length * breadth << endl; }
};
int main() {
    double r, l, b;
    cout << "Enter radius for circle: ";
    cin >> r;
    Shape s1(r);
    cout << "Enter length and breadth for rectangle: ";
    cin >> l >> b;
    Shape s2(l, b);
    return 0;
}