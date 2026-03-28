#include <iostream>
using namespace std;

int main() {
    string books[100];
    int count = 0;
    int choice;

    do {
        cout << "1. Add Books"<<endl;
        cout<<"2. View Books"<<endl;
        cout<<"3. Borrow Books"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter choice: ";
        cin >> choice;

        if(choice == 1) {
            cout << "Enter book name: ";
            cin >> books[count];
            count++;
            cout<<"Books added successfuly."<<endl;
        }
        else if(choice == 2 ) {
            cout << "Books:"<<endl;
            for(int i = 0; i < count; i++) {
                cout << books[i] << endl;
            }
        }
        else if(choice == 3) {
            string name;
            cout << "Enter book to borrow: ";
            cin >> name;

            for(int i = 0; i < count; i++) {
                if(books[i] == name) {
                    books[i] = "";
                    cout << "Book borrowed!"<<endl;
                    break;
                }
            }
        }

    } while(choice != 4);
    cout<<"Program ended."<<endl;

    return 0;
}