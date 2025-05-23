// Write a program to input elements in an array to find and display the sum of all the values, 
//which are ending with 3 
#include<iostream>
using namespace std;
int main(){
    int arr[8];
    cout<<"Enter array element ";
    for(int i=0;i<8;i++){
        cin>>arr[i];
    }
    int sum=0;
    cout<<"All the element how end with 3 ";
    for(int i=0;i<8;i++){
        if(abs(arr[i])%10==3){
            cout<<arr[i]<<" ";
            sum+=arr[i];
        }

    }
    
    cout<<endl<<"Sum of all element howes unit digit is 3 "<<sum;
}
