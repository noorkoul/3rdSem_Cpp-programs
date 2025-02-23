// 10. Function Overloading in a Class - Finding Maximum Number
#include <iostream>
using namespace std;
class MaxFinder {
public:
    int findMax(int a, int b) { return (a > b) ? a : b; }
    double findMax(double a, double b) { return (a > b) ? a : b; }
    int findMax(int a, int b, int c) { return (a > b && a > c) ? a : (b > c) ? b : c; }
};
int main() {
    MaxFinder mf;
    int a, b, c;
    double x, y;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Max: " << mf.findMax(a, b) << endl;
    cout << "Enter two doubles: ";
    cin >> x >> y;
    cout << "Max: " << mf.findMax(x, y) << endl;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    cout << "Max: " << mf.findMax(a, b, c) << endl;
    return 0;
}