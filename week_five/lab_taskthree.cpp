#include <iostream>
using namespace std;

int main()
{
    int pin, balance = 1000, choice, amount;

    // PIN Check
    for(int i = 1; i <= 3; i++)
    {
        cout << "Enter PIN: ";
        cin >> pin;

        if(pin == 1234)
        {
            cout << "Login Successful"<<endl;
            break;
        }
        else
        {
            cout << "Wrong PIN"<<endl;
        }

        if(i == 3)
        {
            cout << "Too many attempts.Card Blocked"<<endl;
            return 0;
        }
    }

    // Menu
    while(true)
    {
        cout<<endl;
        cout<<"---ATM MENU---"<<endl;
        cout << "1. Check Balance"<<endl;
        cout<<"2. Deposit"<<endl;
        cout<<"3. Withdraw"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter choice:";
        cin >> choice;

        if(choice == 1)
        {
            cout << "Balance: " << balance << endl;
        }
        else if(choice == 2)
        {
            cout << "Enter amount: ";
            cin >> amount;
            balance += amount;
            cout<<"Amount added successfully"<<endl;
        }
        else if(choice == 3)
        {
            cout << "Enter amount: ";
            cin >> amount;

            if(amount <= balance)
            {
                balance -= amount;
                cout<<"Money deposited successfully"<<endl;
            }
            else
            {
                cout << "Insufficient Balance"<<endl;
            }
        }
        else if(choice == 4)
        {
            cout<<"Thankyou for visiting atm"<<endl;
            break;
        }
    }

    return 0;
}