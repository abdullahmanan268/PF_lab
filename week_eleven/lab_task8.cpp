#include <iostream>
using namespace std;

const int COLS = 5;

void printMatrix(int matrix[][COLS], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void largestColumnFirst(int matrix[][COLS], int rows)
{
    int largestCol = 0;
    int largestSum = 0;

    
    for (int i = 0; i < rows; i++)
    {
        largestSum += matrix[i][0];
    }

    
    for (int col = 1; col < COLS; col++)
    {
        int sum = 0;

        for (int row = 0; row < rows; row++)
        {
            sum += matrix[row][col];
        }

        if (sum > largestSum)
        {
            largestSum = sum;
            largestCol = col;
        }
    }

    
    for (int i = 0; i < rows; i++)
    {
        int temp = matrix[i][0];
        matrix[i][0] = matrix[i][largestCol];
        matrix[i][largestCol] = temp;
    }
}

int main()
{
    int rows;
    int matrix[50][COLS];

    cout << "Enter row size: ";
    cin >> rows;

    cout << "Enter elements of matrix:" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << endl << "Original Matrix:" << endl;
    printMatrix(matrix, rows);

    largestColumnFirst(matrix, rows);

    cout << endl << "Matrix after largest column moved to first:" << endl;
    printMatrix(matrix, rows);

    return 0;
}