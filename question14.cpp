#include <iostream>
using namespace std;


int main() {
    int arr[8];
    cout<<"enter array ";
    for(int i=0;i<8;i++){
        cin>>arr[i];
    }
    cout<<"Array before any opertation";
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int temp=arr[0];
    for(int i=1;i<8;i++){
        arr[i-1]=arr[i];
    }
    arr[7]=temp;
    
    cout<<"After opertation elements :";
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}