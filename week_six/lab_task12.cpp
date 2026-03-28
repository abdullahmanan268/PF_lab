#include <iostream>
using namespace std;

int main() {
    int n, arr[100];
    bool special = true;

    cout << "Enter the size of array: ";
    cin >> n;
cout<<"Enter "<<n<<" elements of the array:"<<endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        if(i % 2 == 0 && arr[i] % 2 != 0)
            special = false;
        if(i % 2 != 0 && arr[i] % 2 == 0)
            special = false;
    }

    if(special)
        cout << "The array is special.";
    else
        cout << "The array is not special.";

    return 0;
}