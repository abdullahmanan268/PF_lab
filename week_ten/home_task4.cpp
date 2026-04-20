#include <iostream>
using namespace std;

string projectTimeCalculation(int neededHours, int days, int workers)
{
    float trainingDays = days * 0.10;          
    float workingDays  = days - trainingDays;  
   
    float totalHoursFloat = workingDays * workers * 10;

    int totalHours = (int)totalHoursFloat;     
    if(totalHours >= neededHours)
        return "Yes!" + to_string(totalHours - neededHours) + " hours left.";
    else
        return "Not enough time!" + to_string(neededHours - totalHours) + " hours needed.";
}

int main()
{
    int neededHours, days, workers;

    cout << "Enter needed hours: ";
    cin >> neededHours;

    cout << "Enter number of days of firm: ";
    cin >> days;

    cout << "Enter number of workers: ";
    cin >> workers;

    cout << projectTimeCalculation(neededHours, days, workers);

    return 0;
}