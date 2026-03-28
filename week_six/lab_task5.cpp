#include <iostream>
using namespace std;

int main() {
    int n, arr[100];

    cout << "Enter n: ";
    cin >> n;

    int count = 0; 
cout<<"Enter "<<n<<" numbers, per line: "<<endl;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;

        bool duplicate = false;

        for(int j = 0; j < count; j++) {
            if(num == arr[j]) {
                cout << "Already Entered: "<<num<<endl;
                duplicate = true;
                break;
            }
        }

        if(duplicate == false) {
            arr[count] = num;
            count++;
        }
    }

    cout << "Unique numbers: ";
    for(int i = 0; i < count; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}