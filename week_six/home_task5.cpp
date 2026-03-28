#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter number of customers: ";
    cin >> n;

    string names[n];
    char ch;
cout<<"Enter the names of "<<n<<" customers:"<<endl;
    for(int i = 0; i < n; i++) {
        cin >> names[i];
    }

    cout << "Enter a letter to check: ";
    cin >> ch;

    for(int i = 0; i < n; i++) {
        if(names[i][0] == ch)
            count++;
    }

    cout << " Total names starting with "<<ch<<" is :" << count;

    return 0;
}