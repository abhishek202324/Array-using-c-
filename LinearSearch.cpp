#include<iostream>
using namespace std;

void inputArray(int arr[], int size) {
    cout << "Enter array elements: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

int linearSearch(int arr[], int size,int target) {
   for(int i=0;i<size;i++){
    if(arr[i]==target){
        return i;
    }
}
    
return -1;
   
}

int main() {
    int arr[8];
    inputArray(arr,8);
    int result = linearSearch(arr, 8,10);

  
  
    if(result!=-1){
        cout<<"The value find at index "<<result;
    }
    else{
        cout<<"The value is not found ";
    }
    return 0;
}
