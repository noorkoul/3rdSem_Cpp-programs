//Function with Pass by value reference
#include <iostream>
using namespace std;

// Pass by value
int squareValue(int num) {
    return num * num;
}

// Pass by reference
void squareReference(int &num) {
    num = num * num;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    // Pass by value
    int result1 = squareValue(num);
    cout << "Square (pass by value): " << result1 << endl;

    // Pass by reference
    squareReference(num);
    cout << "Square (pass by reference): " << num << endl;

    return 0;
}