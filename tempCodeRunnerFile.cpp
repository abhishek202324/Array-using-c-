void printrowwisereverse(vector<vector<int>> mat, int row, int col){
    cout << "Matrix after row wise revese :\n";
    for(int i = 0; i < row; i++) {
        for(int j = col-1; j>=0; j--) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
