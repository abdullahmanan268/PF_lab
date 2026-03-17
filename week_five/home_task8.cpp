#include <iostream>
using namespace std;

int main() {
    int age;
    double machinePrice, toyPrice;
    int toys = 0;
    double money = 0;
    int gift = 10;
    cout<<"Enter Lilly's age: "<<endl;
    cin >> age;
    cout<<"Enter the price of washing machine: "<<endl;
    cin >> machinePrice;
    cout<<"Enter the unit price of each toy:"<<endl;
    cin >> toyPrice;

    for(int i=1;i<=age;i++) {
        if(i % 2 == 0) {
            money =money + gift - 1;
            gift =gift + 10;
        }
        else {
            toys++;
        }
    }

    money += toys * toyPrice;

    if(money >= machinePrice)
        cout<<"Yes! "<<endl<<money - machinePrice;
    else
        cout<<"No! "<<endl<<machinePrice - money;

    return 0;
}
