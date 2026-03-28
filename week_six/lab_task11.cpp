#include <iostream>
using namespace std;

int main() {
    char str[200];

    cout << "Enter a  string: ";
    cin.getline(str, 200);
cout<<"String with removed vowels: ";
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U') {
            continue;
        }
        cout << str[i];
    }

    return 0;
}