#include<iostream>
using namespace std;
int main(){
    int matrix[3][3];
    cout<<"Enter the 3X3 matrix for input "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter element for ["<<i<<"]["<<j<<"] :";
            cin>>matrix[i][j];
        }
    }
    cout<<"Entered array is "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}