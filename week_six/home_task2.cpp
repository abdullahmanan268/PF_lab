#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
cout<<"Enter "<<n<<" numbers:"<<endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] % 2 == 0)
            count++;
    }

    cout << " Total Even numbers = " << count;

    return 0;
}