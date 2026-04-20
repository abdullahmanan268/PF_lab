#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
        fact = fact * i;

    return fact;
}

bool isStrong(int num)
{
    int original = num;
    int sum = 0;

    while(num > 0)
    {
        int digit = num % 10;
        sum = sum + factorial(digit);
        num = num / 10;
    }

    if(sum == original)
        return true;
    else
        return false;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    if(isStrong(num))
        cout << "Strong Number";
    else
        cout << "Not Strong Number";

    return 0;
}