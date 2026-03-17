#include<iostream>
using namespace std;
int main(){
  int a=0;
  int b=1;
  int fib;
  int length;
  cout<<"Enter the length of fibonacci series: "<<endl;
  cin>>length;
     for(int i=1;i<=length;i++){
        cout<<a<<" , ";
        fib=a+b;
        a=b;
        b=fib;
        }
        return 0;
        }

