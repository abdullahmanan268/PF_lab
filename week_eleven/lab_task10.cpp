#include <iostream>
using namespace std;

const int SIZE = 5;

char objects[SIZE][SIZE] =
{
    {'-', '#', '#', '-', '#'},
    {'#', '-', '-', '#', '-'},
    {'-', '#', '-', '-', '-'},
    {'#', '-', '#', '-', '#'},
    {'#', '-', '-', '-', '-'}
};

bool gravity = false;
bool isBlackHole = false; 
void DisplayWorld()
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cout << objects[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
}

void SetGravityStatus(bool status)
{
    gravity = status;
}

void OneTick()
{
    if (gravity == false)
        return;

    bool moved[SIZE][SIZE] = {false};

    
    if (isBlackHole == true)
    {
        for (int col = 0; col < SIZE; col++)
        {
            if (objects[SIZE - 1][col] == '#' && objects[0][col] == '-')
            {
                objects[SIZE - 1][col] = '-';
                objects[0][col] = '#';
                moved[0][col] = true;
            }
        }
    }

    
    for (int row = SIZE - 2; row >= 0; row--)
    {
        for (int col = 0; col < SIZE; col++)
        {
            if (objects[row][col] == '#' &&
                objects[row + 1][col] == '-' &&
                moved[row][col] == false)
            {
                objects[row + 1][col] = '#';
                objects[row][col] = '-';
                moved[row + 1][col] = true;
            }
        }
    }
}

void TimeTick(int times)
{
    for (int i = 0; i < times; i++)
    {
        OneTick();
    }
}

int main()
{
    cout << "Original World:" << endl;
    DisplayWorld();

    SetGravityStatus(true);

    TimeTick(3);

    cout << "World After 3 Ticks:" << endl;
    DisplayWorld();

    return 0;
}