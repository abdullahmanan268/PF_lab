#include <iostream>
#include <string>
using namespace std;

string checkAlphabetCase(char ch);

int main()
{
    char ch;
    cout << "Enter an alphabet: ";
    cin >> ch;

    cout << checkAlphabetCase(ch) << endl;
    return 0;
}

string checkAlphabetCase(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
        return "You have entered a Capital Alphabet";
    else if(ch >= 'a' && ch <= 'z')
        return "You have entered a Small Alphabet";
    else
        return "Invalid input (not an alphabet)";
}