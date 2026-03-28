#include<iostream>
using namespace std;
int main () {
    int num;
    cout<<"Enter the number of cords: ";
    cin>>num;
    cout<<"Enter "<<num<<" chords, one per line: "<<endl;
    string chords[num];
    for(int i=0; i<num; i++){
        cin>>chords[i];
    }
    for(int i=0; i<num; i++){
        if(chords[i][chords[i].length()-1]!='7'){
            chords[i]+='7';
        }
        else{
            continue;
        }
    
  
} 
cout<<"Jazzified Chord: [";
      for(int i=0; i<num; i++){
         cout<<chords[i];
         if(i<num-1){
            cout<<",";
         }
    }
    cout<<"]";
    return 0;
}