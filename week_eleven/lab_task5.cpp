#include <iostream>
using namespace std;

bool isIdentity(int matrix[][3]) {
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            
            if (row == col && matrix[row][col] != 1) {
                return false;
            }
            
            if (row != col && matrix[row][col] != 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int matrix[3][3];
    
    cout << "Enter the elements of the matrix:" << endl;
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            cout << "Enter element at position [" << row << "][" << col << "]: ";
            cin >> matrix[row][col];
        }
    }
    
    // Print the matrix
    cout << "The matrix you entered is:" << endl;
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            cout << matrix[row][col] << "\t";
        }
        cout << endl;
    }
    
    if (isIdentity(matrix)) {
        cout << "The entered matrix is an identity matrix." << endl;
    } else {
        cout << "The entered matrix is NOT an identity matrix." << endl;
    }
    
    return 0;
}