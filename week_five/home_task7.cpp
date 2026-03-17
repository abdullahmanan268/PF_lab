#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    int n, num;
    int c1=0,c2=0,c3=0,c4=0,c5=0;

    cout << "Enter count: ";
    cin >> n;

    for(int i=0;i<n;i++) {
    cout<<"Enter a number: ";
        cin >> num;

        if(num < 200) 
        c1++;
        else if(num <= 399) 
        c2++;
        else if(num <= 599) 
        c3++;
        else if(num <= 799) 
        c4++;
        else 
        c5++;
    }
    cout << fixed << setprecision(2);
    cout << (c1*100.0/n) << "%"<<endl;
    cout << (c2*100.0/n) << "%"<<endl;
    cout << (c3*100.0/n) << "%"<<endl;
    cout << (c4*100.0/n) << "%"<<endl;
    cout << (c5*100.0/n) << "%"<<endl;

    return 0;
}
