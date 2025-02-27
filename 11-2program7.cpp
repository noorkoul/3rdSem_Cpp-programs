//Function to reverse a String
#include <iostream>
#include <string>
using namespace std;

// Function to reverse a string in-place
void reverseString(string &str) {
    int left = 0;
    int right = str.length() - 1;
    while (left < right) {
        swap(str[left], str[right]);
        left++;
        right--;
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    reverseString(input);
    cout << "Reversed string: " << input << endl;

    return 0;
}