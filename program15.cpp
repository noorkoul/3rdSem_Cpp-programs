//for Loop with if Statement for Prime Number Check
#include <iostream>
using namespace std;

int main() {
    int num, i, flag = 0;
    cout << "Enter a number: ";
    cin >> num;

    for (i =2; i<=  num/2; ++i){
        if(num % i == 0){
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        cout << "It is a Prime Number";
    else
        cout<<"It is Not a Prime Number";

    return 0;
}
