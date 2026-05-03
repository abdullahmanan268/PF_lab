#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int a=6;
    int b=7;
    cout<<"Before swap: "<<a<<b<<endl;
    swap(a,b);
    cout<<"After swap: "<<a<<b<<endl;
    return 0;
}