// Calculator with Conditional Operator

#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;
    
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter an operator (+, -, *, /, %): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> b;

    bool valid = (op == '+') ? (cout << "Result: " << a + b, true) :
                 (op == '-') ? (cout << "Result: " << a - b, true) :
                 (op == '*') ? (cout << "Result: " << a * b, true) :
                 (op == '/' && b != 0) ? (cout << "Result: " << a / b, true) :
                 (op == '%' && b != 0) ? (cout << "Result: " << static_cast<int>(a) % static_cast<int>(b), true) :
                 (cout << "Error: Invalid operation!", false);
    
    return 0;
}
