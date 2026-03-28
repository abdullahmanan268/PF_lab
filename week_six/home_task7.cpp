#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of products: ";
    cin >> n;

    string productNames[n];
    float prices[n];
    int quantity[n];

    // Input
    for(int i = 0; i < n; i++) {
        cout << "\nProduct " << i + 1 << endl;

        cout << "Enter product name "<<i+1<<" :";
        cin >> productNames[i];

        cout << "Enter price  of "<<productNames[i]<<" : $ ";
        cin >> prices[i];

        cout << "Enter quantity of  "<<productNames[i]<<" :";
        cin >> quantity[i];
    }

    cout <<endl<<"Product inventory report "<<endl;
    cout<<"--------------------------------"<<endl;

    // Output + total value
    for(int i = 0; i < n; i++) {
        float total = prices[i] * quantity[i];

        cout << productNames[i] << ": $" << prices[i]
             << ", " << quantity[i] << " in stock"
             << ", Total value: $" << total << endl;
    }

    return 0;
}