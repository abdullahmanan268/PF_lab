#include <iostream>
using namespace std;

int main()
{
    string username, password;
    string studentName = "";
    int studentAge = 0;
    string courseName = "";
    int choice;

    // Login
    for(int i = 1; i <= 3; i++)
    {
        cout << "Enter Username: ";
        cin >> username;

        cout << "Enter Password: ";
        cin >> password;

        if(username == "admin" && password == "1234")
        {
            cout << "Login Successful"<<endl;
            break;
        }
        else
        {
            cout << "Wrong Login"<<endl;
        }

        if(i == 3)
        {
            cout << "Too many attempts. Program End."<<endl;
            return 0;
        }
    }

    // Menu
    while(true)
    {
        cout<<endl;
        cout<<"---University Mangement system---"<<endl;
        cout << "1. Add Student"<<endl;
        cout<<"2. View Student"<<endl;
        cout<<"3. Add Course"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter choice:";
        cin >> choice;

        if(choice == 1)
        {
            cout << "Enter Name: ";
            cin >> studentName;
            cout << "Enter Age: ";
            cin >> studentAge;
            cout<<"Student added successfully"<<endl;
        }
        else if(choice == 2)
        {
            cout << "Name: " << studentName << endl;
            cout << "Age: " << studentAge << endl;
        }
        else if(choice == 3)
        {
            cout << "Enter Course: ";
            cin >> courseName;
        }
        else if(choice == 4)
        {
            cout<<"Program exits"<<endl;
            break;
        }
    }

    return 0;
}