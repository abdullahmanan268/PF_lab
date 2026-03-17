#include<iostream>
using namespace std;
int main(){
  int num;
  int count=0;
  cout<<"Enter a number:"<<endl;
  cin>>num;
  int freq;
  cout<<"Enter a digit to check: "<<endl;
  cin>>freq;
       for(;num>0;num/=10){
         int rem =num%10;
         if(rem==freq){
           count++;
           }
         }
         cout<<"Frequecy: "<<count<<endl;
         return 0;
         }
