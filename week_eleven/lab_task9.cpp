#include <iostream>
using namespace std;

const int COLS = 3;

bool areRowsSame(int arr[][COLS], int row1, int row2)
{
    for (int j = 0; j < COLS; j++)
    {
        if (arr[row1][j] != arr[row2][j])
            return false;
    }

    return true;
}

int countIdenticalArrays(int arr[][COLS], int rows)
{
    int count = 0;

    for (int i = 0; i < rows; i++)
    {
        bool foundSame = false;

        for (int j = 0; j < rows; j++)
        {
            if (i != j && areRowsSame(arr, i, j))
            {
                foundSame = true;
                break;
            }
        }

        if (foundSame)
            count++;
    }

    return count;
}

int main()
{
    int rows;
    int arr[50][COLS];

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter elements of array:" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    int result = countIdenticalArrays(arr, rows);

    cout << "The count of identical rows in the array is: " << result << endl;

    return 0;
}