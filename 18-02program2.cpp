//Rectangle Area Calculation
#include <iostream>
using namespace std;
class Rectangle {
private:
    double length, width;
public:
    void setValues(double l, double w) { length = l; width = w; }
    double calculateArea() { return length * width; }
};
int main() {
    Rectangle rect;
    double l, w;
    cout << "Enter length and width: ";
    cin >> l >> w;
    rect.setValues(l, w);
    cout << "Area: " << rect.calculateArea() << endl;
    return 0;
}