#include<iostream>
using namespace std;
int main(){
    int arr[6];
    cout<<"Enter the array ";
    for(int i=0;i<6;i++){
        cin>>arr[i];

    }
    cout<<"Reversed array : ";
    for(int i=5;i>=0;i--){
        cout<<arr[i]<<" ";
    }

}