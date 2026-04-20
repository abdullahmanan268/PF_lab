#include <iostream>
using namespace std;

void calculatePoolState(int V, int P1, int P2, double H);

int main()
{
    int V, P1, P2;
    double H;
    cout << "Enter volume of the pool in liters: ";
    cin >> V;
    cout << "Enter flow rate of the first pipe per hour: ";
    cin >> P1;
    cout << "Enter flow rate of the second pipe per hour: ";
    cin >> P2;
    cout << "Enter hours that the worker is absent: ";
    cin >> H;

    calculatePoolState(V, P1, P2, H);
    return 0;
}

void calculatePoolState(int V, int P1, int P2, double H)
{
    double totalWater = (P1 + P2) * H;

    if(totalWater <= V)
    {
        int poolPercent = (int)((totalWater / V) * 100);
        int pipe1Percent = (int)((P1 * H / totalWater) * 100);
        int pipe2Percent = (int)((P2 * H / totalWater) * 100);
        cout << "The pool is " << poolPercent << "% full. Pipe 1: " << pipe1Percent << "%. Pipe 2: " << pipe2Percent << "%." << endl;
    }
    else
    {
        double overflow = totalWater - V;
        cout << "For " << H << " hours, the pool overflows with " << overflow << " liters." << endl;
    }
}