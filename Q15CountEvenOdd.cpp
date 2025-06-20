#include<iostream>
using namespace std;

void inputArray(int arr[], int size) {
    cout << "Enter array elements: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}
void Original(int arr[], int size) {
    cout<<"Original  array is : ";
    for(int i =0; i<size; i++) {
        cout<<arr[i]<<" ";
}
cout<<endl;
    
}

int CountEven(int arr[], int size) {
    int countEven = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i]%2==0){
            countEven+=1;
        }
    }
    return countEven;
}

int main() {
    int arr[8];
    inputArray(arr, 8);
    Original(arr,8);
    int result=CountEven(arr,8);

    
    
    cout << "The total number of even element are  :" << result<<endl;
    cout << "The total number of odd element are  :" << 8-result<<endl;
    



    return 0;
}
