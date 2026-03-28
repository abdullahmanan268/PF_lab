#include <iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter the argument 'a': ";
    cin.getline(str, 100);

    cout<<"Result: " << "something " << str;

    return 0;
}