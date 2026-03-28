#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of flights: ";
    cin >> n;

    string flightNumber[n];
    string destination[n];
    int seatsAvailable[n];

    
    for(int i = 0; i < n; i++) {
        cout << "\nFlight " << i + 1 << endl;

        cout << "Enter flight number for flight "<<i+1<<" :";
        cin >> flightNumber[i];

        cout << "Enter destination for flight "<<flightNumber[i]<<" :";
        cin >> destination[i];

        cout << "Enter seats available for flight "<<flightNumber[i]<<" :";
        cin >> seatsAvailable[i];
    }

    cout << endl<<"Flight Information: "<<endl;
    cout<<"-------------------------------"<<endl;

    
    for(int i = 0; i < n; i++) {
        cout <<"Flight " <<flightNumber[i] << " to  " << destination[i]
             << " has  " << seatsAvailable[i] <<" seats available ."<< endl;
    }

    cout << endl<<"Flights with less than 5 seats available: "<<endl;
    cout<<"-----------------------------------------"<<endl;

    
    for(int i = 0; i < n; i++) {
        if(seatsAvailable[i] < 5) {
             cout <<"Flight " <<flightNumber[i] << " to  " << destination[i]
             << " has only   " << seatsAvailable[i] <<" seats left! ."<< endl;
        }
        else{
           cout<<"No flights with less than 5 seat available."<<endl; 
        }
    }

    return 0;
}