#include <iostream>
using namespace std;

float calculateSalary(float base, int score, int experience)
{
    float bonusPercent;

    if(score >= 90)
        bonusPercent = 0.20;
    else if(score >= 75)
        bonusPercent = 0.10;
    else
        bonusPercent = 0.05;

    if(experience >= 5)
        bonusPercent = bonusPercent + 0.05;

    float finalSalary = base + (base * bonusPercent);

    return finalSalary;
}

int main()
{
    float base;
    int score, experience;

    cout << "Enter base salary: ";
    cin >> base;

    cout << "Enter score: ";
    cin >> score;

    cout << "Enter experience (years): ";
    cin >> experience;

    cout << "Final Salary: " << calculateSalary(base, score, experience);

    return 0;
}