//Function Pointer Implementation
#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

int main() {
    // Declare a function pointer
    int (*funcPtr)(int, int) = add;

    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    // Call the function using the pointer
    int result = funcPtr(num1, num2);
    cout << "Sum: " << result << endl;

    return 0;
}