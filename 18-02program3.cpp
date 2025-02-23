//Area of triangle
#include <iostream>
using namespace std;

class Triangle {
    private:
        float base;
        float height;
    
    public:
        // Constructor to take user input
        Triangle() {
            cout << "Enter the value of base: ";
            cin >> base;
            cout << "Enter value of height: ";
            cin >> height;
        }

        // Destructor
        ~Triangle() {
            cout << "Triangle object destroyed" << endl;
        }

        // Function to calculate area
        double calculateArea() {
            return 0.5 * base * height;
        }
};

int main() {
    Triangle t;  // Correct object creation
    cout << "Area of triangle: " << t.calculateArea() << endl;
    return 0;
}

