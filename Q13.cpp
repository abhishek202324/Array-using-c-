#include <iostream>
using namespace std;


int main() {
    int arr[8];
    cout<<"Enter array ";
    for(int i=0;i<8;i++){
        cin>>arr[i];
    }
    cout<<"Array before  swaping og Array ";
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<8;i++){
        if(arr[i]%10==0){
            swap(arr[i],arr[i+1]);
            i++;
        }
    }
    cout<<"After swapping elements :";
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}