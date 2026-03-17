#include <iostream>
using namespace std;

int main()
{
    int number, digit, count = 0;

    cout << "Enter number: ";
    cin >> number;

    cout << "Enter digit to find: ";
    cin >> digit;

    for(int i = number; i > 0; i = i / 10)
    {
        if(i % 10 == digit)
        {
            count++;
        }
    }

    cout << "Frequency: " << count << endl;

    return 0;
}