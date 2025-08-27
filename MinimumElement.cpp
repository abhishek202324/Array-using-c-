#include<iostream>
using namespace std;
int main()
{
    int arr[8];
    cout<<"Enter array as input ";
    for(int i=0;i<8;i++){
        cin>>arr[i];
    }
    int min=INT_MAX;
    for(int i=0;i<8;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"The minumun element is "<<min;
 return 0;
}