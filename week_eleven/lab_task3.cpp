#include <iostream>
using namespace std;

const int colSize = 5;
const int rowSize = 5;



void printToyotaBlue(int cars[][5]) {
    
    cout << "Toyota Blue cars available: " << cars[1][3] << endl;
}


int totalRedCars(int cars[][5]) {
    int total = 0;
    
    for (int row = 0; row < rowSize; row++) {
        total += cars[row][0];
    }
    return total;
}


int totalNissanCars(int cars[][5]) {
    int total = 0;
    
    for (int col = 0; col < colSize; col++) {
        total += cars[2][col];
    }
    return total;
}


int converter(int cars[][5], int colorIndex) {
    int total = 0;
    for (int row = 0; row < rowSize; row++) {
        total += cars[row][colorIndex];
    }
    return total;
}


void printTranspose(int cars[][5]) {
    cout << "\nTransposed Matrix:" << endl;
    for (int col = 0; col < colSize; col++) {
        for (int row = 0; row < rowSize; row++) {
            cout << cars[row][col] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int carData[rowSize][colSize] = {
        {10, 7, 12, 10, 4},
        {18, 11, 15, 17, 2},
        {23, 19, 12, 16, 14},
        {7, 12, 16, 0, 2},
        {3, 5, 6, 2, 1}
    };
    string option;
    cout<<"Enter the part you want to perform(A,B,C,D,E):"<<endl;
    cin>>option;
    if(option=="A"){
    // A
    cout << " Task A " << endl;
    printToyotaBlue(carData);
    }
    if(option=="B"){
    // B
    cout << "\n Task B " << endl;
    cout << "Total Red cars: " << totalRedCars(carData) << endl;
    }
    if(option=="C"){

    
    // C
    cout << "\nTask C " << endl;
    cout << "Total Nissan cars: " << totalNissanCars(carData) << endl;
    }
    if(option=="D"){
    // D
    cout << "\n Task D " << endl;
    string colors[] = {"Red", "Black", "Brown", "Blue", "Gray"};
    int colorChoice = 2; 
    cout << "Total " << colors[colorChoice] << " cars: " 
         << converter(carData, colorChoice) << endl;
    }
    if(option=="E"){
    // E
    cout << "\nTask E " << endl;
    printTranspose(carData);
    }
    return 0;
}