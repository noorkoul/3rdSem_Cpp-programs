// 9. Using this Pointer in a Class - Basic Arithmetic Operations
#include <iostream>
using namespace std;
class Calculator {
private:
    double num1, num2;
public:
    void setValues(double a, double b) { this->num1 = a; this->num2 = b; }
    double add() { return num1 + num2; }
    double subtract() { return num1 - num2; }
    double multiply() { return num1 * num2; }
    double divide() { return num2 != 0 ? num1 / num2 : 0; }
};
int main() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    Calculator calc;
    calc.setValues(a, b);
    cout << "Addition: " << calc.add() << "\nSubtraction: " << calc.subtract()
         << "\nMultiplication: " << calc.multiply() << "\nDivision: " << calc.divide() << endl;
    return 0;
}
