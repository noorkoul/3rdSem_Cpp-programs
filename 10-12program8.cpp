//Multi-Level discount system
#include <iostream>
using namespace std;

int main() {
    float purchaseAmount, discount, totalAmount;
    cout << "Enter purchase amount: ";
    cin >> purchaseAmount;

    discount = (purchaseAmount < 100) ? 0 : (purchaseAmount <= 500) ? 0.10 : 
              (purchaseAmount <= 1000) ? 0.15 : 0.20;
    totalAmount = purchaseAmount - (purchaseAmount * discount);

    cout << "Total price after discount: Rs " << totalAmount << endl;
    return 0;
}
