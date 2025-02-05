//Banking System with Menu
#include <iostream>
using namespace std;

int main() {
    int choice;
    float balance = 1000.0, amount;

    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Balance Inquiry\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance += amount;
                cout << "Deposited Rs " << amount << ". New balance: Rs " << balance << endl;
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > balance)
                    cout << "Insufficient balance!" << endl;
                else {
                    balance -= amount;
                    cout << "Withdrew Rs " << amount << ". New balance: Rs " << balance << endl;
                }
                break;
            case 3:
                cout << "Current balance: Rs " << balance << endl;
                break;
            case 4:
                cout << "Exiting... Thank you!" << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
