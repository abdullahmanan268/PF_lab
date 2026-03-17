#include <iostream>
using namespace std;

int main() {

    while(true){
        int choice;
        string name;
        cout<<endl;
        cout<<"---Library System---"<<endl;
        cout<<"1.Add Books"<<endl;
        cout<<"2.View Books"<<endl;
        cout<<"3.Borrow Books"<<endl;
        cout<<"4.Return Books"<<endl;
        cout<<"5.Exit"<<endl<<endl;
        cout<<"Enter your choice(1-5):";
        cin>>choice;

        if(choice==1){
        cout<<"Enter book name: ";
        cin>>name;
        cout<<"You added a Book: "<<name<<endl;}
        else if(choice==2) {
        cout<<"Viewing Books"<<endl;}
        else if(choice==3){ 
        cout<<"Borrowing Book"<<endl;}
        else if(choice==4) {
        cout<<"Returning Book"<<endl;}
        else if(choice==5){ 
        cout<<"Exiting Library System. Goodbye!"<<endl;
        break;}
        else 
        cout<<"Invalid choice"<<endl;
    }

    return 0;
}
