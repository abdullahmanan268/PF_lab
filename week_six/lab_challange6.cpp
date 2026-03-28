#include <iostream>
using namespace std;

int main() {
    string username[3];
    string correctUser = "admin";
    int password, correctPass = 1234;

    bool login = false;

    for(int i = 0; i < 3; i++) {
        cout << "Enter username: ";
        cin >> username[i];

        cout << "Enter password: ";
        cin >> password;

        if(username[i] == correctUser && password == correctPass) {
            login = true;
            cout << "Login Successful"<<endl;
            break;
        } else {
            cout << "Wrong credentials"<<endl;
        }
    }

    string students[3];
    int age[3], studentCount = 0;

    string courses[3];
    int courseCount = 0;

    int choice;

    if(login) {
        while(true) {
            cout << "1.Add Student"<<endl;
            cout<<"2.View Students"<<endl;
            cout<<"3.Add Course"<<endl;
            cout<<"4.View Courses"<<endl;
            cout<<"5.Exit"<<endl;
            cout<<"Enter your choice:";
            cin >> choice;

            if(choice == 1) {
                if(studentCount < 3) {
                    cout << "Enter  student name: ";
                    cin >> students[studentCount];
                    cout << "Enter  student age: ";
                    cin >> age[studentCount];
                    studentCount++;
                    cout<<"Student addded successfully."<<endl;
                }
            }
            else if(choice == 2) {
                for(int i = 0; i < studentCount; i++) {
                    cout <<"Student "<<studentCount<<" :"<< students[i] << " "<<"AGE "<<studentCount<<" :" << age[i] << endl;
                }
            }
            else if(choice == 3) {
                if(courseCount < 3) {
                    cout << "Enter course: ";
                    cin >> courses[courseCount];
                    courseCount++;
                }
            }
            else if(choice == 4) {
                for(int i = 0; i < courseCount; i++) {
                    cout << courses[i] << endl;
                }
            }
            else if(choice == 5) {
                cout<<"Program Ended.";
                break;

            }
        }
    } else {
        cout << "Access Denied too many attempts.";
    }

    return 0;
}