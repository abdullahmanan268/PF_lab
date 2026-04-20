#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float num , exp;
    cout<<"Enter the base number: "<<endl;
    cin>>num;
    cout<<"Enter the exponent: "<<endl;
    cin>>exp;
    cout<<num<<" raised to power "<<exp<<" is : "<<pow(num,exp);
    return 0;


}