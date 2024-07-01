#include<bits/stdc++.h>
using namespace std;

void markRow(vector<vector<int>> &matrix, int n, int m, int i){
    for(int j=0; j<n; j++){
        if(matrix[i][j] != 0){
            matrix[i][j] = -1;
        }
    }
}

void markCol(vector<vector<int>> &matrix, int n, int m, int j){
    for(int i=0; i<n; i++){
        if(matrix[i][j] != 0){
            matrix[i][j] = -1;
        }
    }
}

vector<vector<int>> zeroMatrixBrute(vector<vector<int>> &matrix, int n, int m){
    /*
        Time Complexity - O(n*m) * O(n+m) + O(n*m) = O(n^3)
    */
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j] == 0){
                markRow(matrix, n, m, i);
                markCol(matrix, n, m, j);
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j] == -1){
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}

vector<vector<int>> zeroMatrixBetter(vector<vector<int>> &matrix, int n, int m){
    /*
        Time Complexity - O(n*m) + O(n*m)
        Space Complexity - O(n)+O(m);
    */
    int col0 = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j] == 0){
                matrix[i][0] = 0;
                if(j != 0){
                    matrix[0][j] = 0;
                }else{
                    col0 = 0;
                }
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][j] != 0){
                    if(matrix[0][j] == 0 || matrix[i][0] == 0){
                        matrix[i][j] = 0;
                    }
                }
            }
        }
        if(matrix[0][0] == 0){
            for(int j=0;j<m;j++){
                matrix[0][j] = 0;
            }
        }
        if(col0 == 0){
            for(int i=0;i<n;i++){
                matrix[i][0] = 0;
            }
        }
    }
    return matrix;
}

int main(){
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> ans = zeroMatrixBetter(matrix, n, m);
    for(auto it: ans){
        for(auto element: it){
            cout<<element<<" ";
        }
        cout<<endl;
    }
    return 0;
}
