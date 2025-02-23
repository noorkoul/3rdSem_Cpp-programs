// 4. Rectangle Perimeter Calculation with Constructors
#include <iostream>
using namespace std;
class Rectangle {
private:
    double length, width;
public:
    Rectangle() { length = width = 0; }
    Rectangle(double l, double w) { length = l; width = w; }
    double calculatePerimeter() { return 2 * (length + width); }
};
int main() {
    double l, w;
    cout << "Enter length and width: ";
    cin >> l >> w;
    Rectangle rect(l, w);
    cout << "Perimeter: " << rect.calculatePerimeter() << endl;
    return 0;
}