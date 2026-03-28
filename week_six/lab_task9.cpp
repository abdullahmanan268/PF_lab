#include <iostream>
using namespace std;

int main() {
    int coins[4]; // 0=quarters, 1=dimes, 2=nickels, 3=pennies
    float totalBill, money = 0;

    cout << "Enter quarters, dimes, nickels, pennies: ";
    for(int i = 0; i < 4; i++) {
        cin >> coins[i];
    }

    cout << "Enter total amount due: $ ";
    cin >> totalBill;

    money = coins[0]*0.25 + coins[1]*0.10 + coins[2]*0.05 + coins[3]*0.01;
cout<<"Can you pay the amount?";
    if(money >= totalBill)
        cout << " Yes";
    else
        cout << " No";

    return 0;
}