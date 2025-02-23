// 8. Copy Constructor - Distance Between Two Points
#include <iostream>
#include <cmath>
using namespace std;
class Point {
private:
    double x, y;
public:
    Point(double a, double b) { x = a; y = b; }
    Point(const Point &p) { x = p.x; y = p.y; }
    double calculateDistance(Point p2) { return sqrt(pow(x - p2.x, 2) + pow(y - p2.y, 2)); }
};
int main() {
    double x1, y1, x2, y2;
    cout << "Enter coordinates of first point: ";
    cin >> x1 >> y1;
    cout << "Enter coordinates of second point: ";
    cin >> x2 >> y2;
    Point p1(x1, y1), p2(x2, y2);
    cout << "Distance: " << p1.calculateDistance(p2) << endl;
    return 0;
}