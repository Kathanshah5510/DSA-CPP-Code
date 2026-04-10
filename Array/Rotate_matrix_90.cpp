#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
        // {5, 1, 9, 11},
        // {2, 4, 8, 10},
        // {13, 3, 6, 7},
        // {15, 14, 12, 16}
    };

    int rows = matrix.size();

    for(int i = 0; i < rows; i++){
        for(int j = i; j < rows; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < rows / 2; j++){
            swap(matrix[i][j], matrix[i][rows - j - 1]);
        }
    }

    cout << "After reversing columns:" << endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < rows; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }   

    return 0;
}