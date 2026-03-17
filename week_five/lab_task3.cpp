#include <iostream>
using namespace std;

int main()
{
    int a, b, gcd;

    cout << "Enter first number: ";
    cin >> a;
    cout<<"Enter second number:";
   cin >> b;

    for(int i = 1; i <= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }

    int lcm = (a * b) / gcd;

    cout << "GCD = " << gcd << endl;
    cout << "LCM = " << lcm << endl;

    return 0;
}