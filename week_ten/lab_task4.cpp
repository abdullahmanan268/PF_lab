#include<iostream>
#include<cmath>
using namespace std;
float  radian( float angle){
    float pi=3.147895;
    float rad= angle * (pi/180);
    return rad;
}
void heigth( float dis, float ang){
    cout<<"The heigth is : "<<dis * tan(ang);
}
int main(){
    float dis,angle,ang;
    cout<<"Enter distance: "<<endl;
    cin>>dis;
    cout<<"Enter angle: "<<endl;
    cin>>angle;
    ang= radian(angle);
    heigth(dis,ang);
}