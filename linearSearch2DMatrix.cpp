#include<iostream>
using namespace std;
int main()
{
    int matrix[4][3];//4 rows and 3 collumn
    int row=4;
    int col=3;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"Enter the elment for martix ["<<i<<"]["<<j<<"] : ";
            cin>>matrix[i][j];
        }
    }
    int target;
    cout<<"Element you want to search in 2d array"<<endl;
    cin>>target;
    bool flag=true;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           
            if(matrix[i][j]==target){
                cout<<"The element is found at ["<<i<<"]["<<j<<"] index "<<endl;
                flag=false;
            }

        }

    
    }
    if(flag==true){
        cout<<"the searched element is not present in the array ";
    }
    cout<<endl;
 return 0;
}