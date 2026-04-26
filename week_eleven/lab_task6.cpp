#include <iostream>
using namespace std;

const int SIZE = 5;

string fire(char board[][SIZE], string coordinate)
{
    char rowChar = coordinate[0];   
    char colChar = coordinate[1];   
    int row = rowChar - 'A';        
    int col = colChar - '1';        

    if (board[row][col] == '*')
        return "BOOM";
    else
        return "splash";
}

int main()
{
    char board[SIZE][SIZE] =
    {
        {'.', '.', '.', '*', '*'},
        {'.', '*', '.', '.', '.'},
        {'.', '*', '.', '.', '.'},
        {'.', '*', '.', '.', '.'},
        {'.', '.', '*', '*', '.'}
    };

    string coordinate;

    cout << "Enter coordinate to fire torpedo e.g. A1, B3, E5: ";
    cin >> coordinate;

    cout << "Result: " << fire(board, coordinate) << endl;

    return 0;
}