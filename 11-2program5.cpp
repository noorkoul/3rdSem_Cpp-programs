//Function returning an Array(using pointers)
#include <iostream>
using namespace std;

// Function to generate first n even numbers
int* generateEvenNumbers(int n) {
    int* evenNumbers = new int[n];
    for (int i = 0; i < n; i++) {
        evenNumbers[i] = 2 * (i + 1);
    }
    return evenNumbers;
}

int main() {
    int n;
    cout << "Enter the number of even numbers to generate: ";
    cin >> n;

    int* evenArray = generateEvenNumbers(n);

    cout << "First " << n << " even numbers: ";
    for (int i = 0; i < n; i++) {
        cout << evenArray[i] << " ";
    }
    cout << endl;

    // Free dynamically allocated memory
    delete[] evenArray;

    return 0;
}