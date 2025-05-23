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
    cout<<"Entered 2d matrix : "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           
            cout<<matrix[i][j]<<" ";

        }
        cout<<endl;
    }
    cout<<endl;
 return 0;
}