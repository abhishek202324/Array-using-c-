#include<iostream>
#include<vector>
using namespace std;
void inputMat(vector<vector<int>> &mat,int row,int col){
    mat.resize(row, vector<int>(col)); // Allocate memory

    cout<<"Enter Matrix of size:"<<row<<" X "<<col<<": "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>mat[i][j];
        }
    }
}

void printminmax(vector<vector<int>> mat,int row,int col,int max,int min){
    

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(mat[i][j]>max)max=mat[i][j];
        }
        
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(mat[i][j]<min)min=mat[i][j];
        }
       
    }
    cout<<"Maximum from the arrays is "<<max<<endl;
    cout<<"Mininume from the arrays is "<<min<<endl;
}

int main()
{
    vector<vector<int>> mat;
    int row=0;
    int col=0;
    
    cout<<"Enter Row and col: ";
    cin >> row >> col;
    inputMat(mat,row,col);
    int max=INT_MIN;
    int min=INT_MAX;

    printminmax(mat,row,col,max,min);
   


   return 0;
}