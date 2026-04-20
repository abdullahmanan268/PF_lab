#include <iostream>
#include <string>
using namespace std;

string timeTravel(int hours, int minutes);

int main()
{
    int hours, minutes;
    cout << "Enter Hours: ";
    cin >> hours;
    cout << "Enter Minutes: ";
    cin >> minutes;
    cout << timeTravel(hours, minutes) << endl;
    return 0;
}

string timeTravel(int hours, int minutes)
{
    minutes = minutes + 15;
    if(minutes >= 60)
    {
        minutes = minutes - 60;
        hours = hours + 1;
    }
    if(hours >= 24)
    {
        hours = hours - 24;
    }
    return to_string(hours) + ":" + to_string(minutes);
}