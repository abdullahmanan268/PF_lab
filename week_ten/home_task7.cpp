#include <iostream>
using namespace std;

float calculateBalance(float balance, int years)
{
    float rate;

    if(balance < 10000)
        rate = 0.05;
    else if(balance <= 50000)
        rate = 0.07;
    else
        rate = 0.10;

    if(years >= 3)
        rate = rate + 0.02;

    float updatedBalance = balance + (balance * rate);

    return updatedBalance;
}

int main()
{
    float balance;
    int years;

    cout << "Enter balance: ";
    cin >> balance;

    cout << "Enter years: ";
    cin >> years;

    cout << "Updated Balance: " << calculateBalance(balance, years);

    return 0;
}