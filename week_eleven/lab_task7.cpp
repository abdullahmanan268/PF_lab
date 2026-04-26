#include<iostream>
using namespace std;
const int ROWS=7;
const int COLS=14;
char football[ROWS][COLS]={
    {"#           #"},
    {"#           #"},
    {"#           #"},
    {"#############"},
    {"       #  0  "},
    {"       #     "},
    {"       #     "}

    
};
bool isballGoal(){
    for (int row=0;row<ROWS;++row){
          for(int col=0;col<COLS -1;++col){
            if(football[row][col]=='0'){
                  if(row<3 && (col>0 && col<12)){
                    return true;
                  }
                  else{
                    return false;
                  }

            }

          }
    }
    return false;
}
int main(){
    if(isballGoal()){
        cout<<"The ball is through the goal."<<endl;

    }
    else{
        cout<<"The ball is not through the goal."<<endl;
    }
    return 0;
}