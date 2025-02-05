//Palindrome Number Check
#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0, remainder, original;
    cout << "Enter a number: ";
    cin >> num;

    original = num;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed)
        cout << original << " is a palindrome." << endl;
    else
        cout << original << " is not a palindrome." << endl;

    cout << "Palindrome numbers between 1 and 1000: ";
    for (int i = 1; i <= 1000; i++) {
        num = i;
        reversed = 0;
        while (num != 0) {
            remainder = num % 10;
            reversed = reversed * 10 + remainder;
            num /= 10;
        }
        if (i == reversed) cout << i << " ";
    }
    cout << endl;

    return 0;
}
