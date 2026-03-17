#include <iostream>
using namespace std;

int main() {

    int choice;
    double a,b;

    while(true){
    cout<<endl;
    cout<<"---Simple Calculator---"<<endl;
        cout<<"1.Addition"<<endl;
        cout<<"2.Subtraction"<<endl;
        cout<<"3.Multiplication"<<endl;
        cout<<"4.Division"<<endl;
        cout<<"5.Clear Screen"<<endl;
        cout<<"6.Exit"<<endl<<endl;
        cout<<"Enter your choice:";
        cin>>choice;

        if(choice==6) 
        break;

        if(choice==5){
            cout<<"Screen cleared";
            continue;
        }

        cout<<"Enter first number: ";
        cin>>a;
        cout<<"Enter second number: ";
        cin>>b;

        if(choice==1) 
        cout<<"Result = "<<a+b<<endl;
        else if(choice==2) 
        cout<<"Result = "<<a-b<<endl;
        else if(choice==3) 
        cout<<"Result = "<<a*b<<endl;
        else if(choice==4){
            if(b==0) 
            cout<<"Division by zero not allowed"<<endl;
            else cout<<"Result = "<<a/b<<endl;
        }
    }

    cout<<"Exiting Calculator. Goodbye!";
    return 0;
}
