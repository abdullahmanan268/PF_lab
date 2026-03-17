#include <iostream>
using namespace std;

int main() {
    double money;
    int year;
    int age = 18;
    cout<<"Enter Money: "<<endl;
    cin >> money;
    cout<<"Enter Year: "<<endl;
    cin >> year;

    for(int y = 1800; y <= year; y++) {
        if(y % 2 == 0)
            money =money - 12000;
        else
            money =money - (12000 + 50 * age);

        age++;
    }

    if(money >= 0)
        cout<<"Yes! He will live a carefree life and will have "<<money<<" dollars left.";
    else
        cout<<"He will need "<<-money<<" dollars to survive.";

    return 0;
}
