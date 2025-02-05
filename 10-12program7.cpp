//Date validator and day counter
#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                return true;
            else
                return false;
        }
        return true;
    }
    return false;
}

int main() {
    int day, month, year;
    cout << "Enter date (DD-MM-YYYY): ";
    cin >> day >> month >> year;

    bool valid = false;
    if (month >= 1 && month <= 12) {
        if (month == 2) {
            if (isLeapYear(year)) {
                if (day >= 1 && day <= 29)
                    valid = true;
            } else {
                if (day >= 1 && day <= 28)
                    valid = true;
            }
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            if (day >= 1 && day <= 30)
                valid = true;
        } else {
            if (day >= 1 && day <= 31)
                valid = true;
        }
    }

    if (!valid) {
        cout << "Invalid date." << endl;
    } else {
        cout << "Valid date." << endl;
        int total_days = 0;
        for (int i = 1; i < month; i++) {
            if (i == 2) {
                if (isLeapYear(year)) total_days += 29;
                else total_days += 28;
            } else if (i == 4 || i == 6 || i == 9 || i == 11) {
                total_days += 30;
            } else {
                total_days += 31;
            }
        }
        total_days += day;

        switch (total_days % 7) {
            case 0: cout << "Day of the week: Sunday"; break;
            case 1: cout << "Day of the week: Monday"; break;
            case 2: cout << "Day of the week: Tuesday"; break;
            case 3: cout << "Day of the week: Wednesday"; break;
            case 4: cout << "Day of the week: Thursday"; break;
            case 5: cout << "Day of the week: Friday"; break;
            case 6: cout << "Day of the week: Saturday"; break;
        }
    }

    return 0;
}
