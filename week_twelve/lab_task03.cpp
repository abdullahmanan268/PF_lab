#include<iostream>
using namespace std;
void reverse( int* arr, int n){
    int* start=arr;
    int* end=arr +n-1;
    while(start<end){
        int temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}
int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    int arr[100];
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>*(arr + i);
    }
    reverse(arr,n);
    cout<<"Reveresed array is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<*(arr + i)<<" ";
    }

    return 0;
}