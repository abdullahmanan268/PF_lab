#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    string names[n];
cout<<"Enter names of "<<n<<" students:"<<endl;
    for(int i = 0; i < n; i++) {
        cin >> names[i];
    }

    
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(names[i] > names[j]) {
                string temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }

    cout << "Students in alphabetical order:"<<endl;
    for(int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

    return 0;
}