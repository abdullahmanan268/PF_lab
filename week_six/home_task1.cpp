#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
cout<<"Enter "<<n<<" elements: "<<endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum  of all elements= " << sum;

    return 0;
}