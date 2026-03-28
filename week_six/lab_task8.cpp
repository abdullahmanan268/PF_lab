#include <iostream>
using namespace std;

int main() {
    int a[2], b[100], n;

    cout << "Enter 2 elements of first array one per line: "<<endl;
    cin >> a[0] >> a[1];

    cout << "Enter size of second array: ";
    cin >> n;
cout<<"Enter "<<n<<" elements for second array one per line:"<<endl;
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    cout<<"Resulting array:";
    cout <<"[ "<< a[0]  << " , ";

    for(int i = 0; i < n; i++) {
        cout << b[i] << " , ";
    }

    cout << a[1]<<" ]";

    return 0;
}