#include<iostream>
using namespace std;
int main(){
    int arr[6];
    cout<<"Enter the array for the opertion";
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }

    int max=arr[0];
    int secondMax=INT_MIN;
    for(int i=0;i<6;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<6;i++){
        if(arr[i]>secondMax && arr[i]!=max){
            secondMax=arr[i];
        }
    }
cout<<"Second largest element of the array "<<secondMax<<endl;
cout<<"largest elment of the array :"<<max<<endl;
}