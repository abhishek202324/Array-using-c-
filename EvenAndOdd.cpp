#include<iostream>
using namespace std;

int main(){
    int arr[5];
    cout<<"Enter array for even odd checking: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];

    }
    cout<<"The even number in array :";
    for(int i=0;i<5;i++){
        
        if(arr[i]%2==0){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
    cout<<"The odd number in array :";
    for(int i=0;i<5;i++){
        
        if(arr[i]%2!=0){
            cout<<arr[i]<<" ";
        }
    }

}