#include<iostream>
#include<cmath>
using namespace std;
float disc(float a,  float  b, float c){
    float answer= (b*b) - (4*a*c);
    return answer;
}
void check(float dis, float a,float b,float c){
    if(dis==0){
        float root= -b/(2*a);
        cout<<"Solution : "<<root<<endl;
    }
    if (dis>0){
        float root_1= (-b + sqrt(dis))/(2*a);
        float root_2= (-b - sqrt(dis))/(2*a);
        cout<<"Solutions:  x= "<<root_1<<" and "<<" x= "<<root_2;
    }
    if(dis<0){
        float part_1=-b/(2*a);
        float part_2= sqrt(-dis)/(2*a);
        cout<<" Complex Solutions: x= "<<part_1<<" + "<<part_2<<"i"<<" and x= "<<part_1<<" - "<<part_2<<"i";
    }
}
int main(){
    float a, b,c;
    cout<<"Enter a: "<<endl;
    cin>>a;
    cout<<"Enter b: "<<endl;
    cin>>b;
    cout<<"Enter c: "<<endl;
    cin>>c;
    float dis=disc(a,b,c);
    check(dis,a,b,c);
    return 0;
}
