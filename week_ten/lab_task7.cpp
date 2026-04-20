#include <iostream>
using namespace std;

bool IsSymmetrical(int num);

int main()
{
    int num;
    cout << "Enter a three-digit number: ";
    cin >> num;

    if(IsSymmetrical(num))
        cout << "The number is symmetrical." << endl;
    else
        cout << "The number is not symmetrical." << endl;

    return 0;
}

bool IsSymmetrical(int num)
{
    int first = num / 100;
    int last = num % 10;

    if(first == last)
        return true;
    else
        return false;
}