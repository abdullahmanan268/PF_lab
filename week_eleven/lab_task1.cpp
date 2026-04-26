#include<iostream>
using namespace std;
int main(){
    string names[6]={"suzuki","toyota","nissan","bmw","audi"};
    string colour[6]={"red","black","brown","blue","gray"};
    int car[5][5]={{10,7,12,10,4},
                      {18,11,15,17,2},
                       {23,19,12,16,14},
                    {7, 12, 16,0,2},
                {3,5,6,2,1}};
                for(int i=0;i<5;i++){
                    for(int j=0;j<5;j++){
                        cout<<car[i][j] <<"\t";
                    }
                    cout<<endl;
                }
                return 0;

}