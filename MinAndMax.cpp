
#include<iostream>
using namespace std;
int main(){
   int arr[8];
    cout<<"Enter 8 student marks for min and max marks : ";
    for(int i=0;i<8;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=1;i<8;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        
    }
    int min=arr[0];
    for(int i=1;i<8;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        
    }
    cout<<"Min marks of all above: "<<min<<" ";
    
    cout<<"Max marks of all above: "<<max<<" ";
    
}