#include<iostream>
#include<climits> 
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

int ReturnIndex(int arr[], int size,int element) {
    
    for(int i=0;i<size;i++){
        if(arr[i]==element)
        return i;
    }
    return -1;

    
    
}
    

int main() {
    int arr[12];

    inputArray(arr, 12);
    Original(arr,12);
    int element;
    cout<<"Enter  element you looking for ";
    cin>>element;
    int result=ReturnIndex(arr, 12,element);//We are Searching for element 20 to there index
    if(result==-1){
        cout<<"The value is not found in array ";
    }
    else{
        cout<<"The element is found at index "<<result<<endl;
    }

  
    return 0;
}
