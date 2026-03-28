#include <iostream>
using namespace std;

int main() {
    int n, arr[100];

    cout << "Enter n: ";
    cin >> n;
    if(n<=0){
        cout<<"Invalid input. Number of elements must be greater than 0."<<endl;
        return 0;
    }
cout<<"Enter "<<n<<" numbers, one per line:"<<endl;
    for(int i = 0; i < n; i++) { 
        cin >> arr[i];
    }
cout<<"Numbers in reverse order:";
    for(int i = n - 1; i >= 0; i--) {  
        cout << arr[i] << " ";
    }

    return 0;
}