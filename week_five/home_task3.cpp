#include<iostream>
using namespace std;
int main(){
     int num;
     cout<<"Enter a number: "<<endl;
     cin>>num;
     int count=0;
    do {
       num=num/10;
       count++;
       }while(num!=0);
       cout<<"Total no of digits: "<<count<<endl;
       return 0;
       }
     
     
     
 
