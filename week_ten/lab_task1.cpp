#include<iostream>
using namespace std;

void  add(int number1 ,  int number2);

int main(){
    int num1 ,num2;
    cout<<"Enter a number 1"<<endl;
    cin>>num1;
    cout<<"Enter a number 2"<<endl;
    cin>>num2;
    add(num1, num2);
    return 0;

}
void add( int num1 , int num2){
    cout<<"Sum is : "<< num1 + num2<<endl;

}

