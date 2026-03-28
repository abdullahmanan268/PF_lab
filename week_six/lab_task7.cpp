#include <iostream>
using namespace std;

int main() {
    int n;
    float arr[100], sum = 0;

    cout << "Enter number of resistors in series: ";
    cin >> n;
cout<<"Enter value of resistances in (ohms) of "<<n<<" resistors, one per line:"<<endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    cout << "Total Resistance is " << sum<<" ohms.";

    return 0;
}