// 7. Adding Two Complex Numbers
#include <iostream>
using namespace std;
class Complex {
private:
    double real, imag;
public:
    Complex(double r = 0, double i = 0) { real = r; imag = i; }
    Complex addComplex(Complex c) { return Complex(real + c.real, imag + c.imag); }
    void display() { cout << "Sum: " << real << " + " << imag << "i" << endl; }
};
int main() {
    double r1, i1, r2, i2;
    cout << "Enter real and imaginary parts of first complex number: ";
    cin >> r1 >> i1;
    cout << "Enter real and imaginary parts of second complex number: ";
    cin >> r2 >> i2;
    Complex c1(r1, i1), c2(r2, i2), c3;
    c3 = c1.addComplex(c2);
    c3.display();
    return 0;
}