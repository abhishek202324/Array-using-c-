#include <iostream>
using namespace std;
int main() {
   int arr[5];
   cout<<"Enter the array : ";
   for(int i=0;i<5;i++){
       cin>>arr[i];
   }
   cout<<"Original array you have entered ";
   for(int i=0;i<5;i++){
       cout<<arr[i]<<" ";
   }
   cout<<endl;
   int size=sizeof(arr)/sizeof(int);
   int temp;
   temp=arr[0];
   arr[0]=arr[size-1];
   arr[size-1]=temp;
    cout<<"Array after swap first and last element of array ";
   for(int i=0;i<5;i++){
       cout<<arr[i]<<" ";
   }
   
   
return 0;
}