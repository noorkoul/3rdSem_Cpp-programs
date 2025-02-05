//Quadratic equation solver
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, discriminant, root1, root2;
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "Invalid input, a cannot be zero!" << endl;
    } else {
        discriminant = b*b - 4*a*c;
        
        if (discriminant > 0) {
            root1 = (-b + sqrt(discriminant)) / (2*a);
            root2 = (-b - sqrt(discriminant)) / (2*a);
            cout << "Roots are real and distinct: " << root1 << " and " << root2 << endl;
        } else if (discriminant == 0) {
            root1 = root2 = -b / (2*a);
            cout << "Roots are real and equal: " << root1 << endl;
        } else {
            cout << "Roots are imaginary." << endl;
        }
    }
    return 0;
}
