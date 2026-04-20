#include <iostream>
using namespace std;

float taxCalculator(char type, float price)
{
    float rate = 0;

    if(type == 'M')
        rate = 0.06;
    else if(type == 'E')
        rate = 0.08;
    else if(type == 'S')
        rate = 0.10;
    else if(type == 'V')
        rate = 0.12;
    else if(type == 'T')
        rate = 0.15;

    float finalPrice = price + (price * rate);
    return finalPrice;
}

int main()
{
    char type;
    float price;

    cout << "Enter Vehicle Type (M/E/S/V/T): ";
    cin >> type;

    cout << "Enter Price: ";
    cin >> price;

    float result = taxCalculator(type, price);

    cout << "Final price of vehicle type " << type << " is $" << result;

    return 0;
}