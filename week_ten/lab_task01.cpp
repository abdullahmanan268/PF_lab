#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float num1 , num2;
    cout<<"Enter first nuumber: "<<endl;
    cin>>num1;
    cout<<"Enter second number: "<<endl;
    cin>>num2;
    cout<<"The minimum number between "<<num1<<" and "<<num2<<" is : "<<min(num1, num2);
    return 0;
}
