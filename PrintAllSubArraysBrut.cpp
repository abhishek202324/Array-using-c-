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

void PrintSubArrays(int arr[], int size) {
    int s,e;//we use two pointer s=start for start pointer ,e=end for end pointer
    cout<<"All possible subarrays are thee..."<<endl;
    for(int s=0;s<size;s++){
        for(int e=s;e<size;e++){
            for(int k=s;k<=e;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    
}

int main() {
    int arr[4];
    inputArray(arr, 4);
    Original(arr,4);
    PrintSubArrays(arr, 4);
  
    return 0;
}
