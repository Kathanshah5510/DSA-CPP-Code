// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     // vector<vector<int>> matrix = {
//     //     {1, 1, 1},
//     //     {1, 0, 1},
//     //     {1, 1, 1}
//     // };
//     vector<vector<int>> matrix = {
//         {0, 1, 2, 0},
//         {3, 4, 5, 2},
//         {1, 3, 1, 5}
//     };
//     int rows = matrix.size();
//     int cols = matrix[0].size();
//     vector<vector<int>> Result = matrix;
//     cout << "Rows: " << rows << ", Columns: " << cols << endl;

//     for(int i = 0; i < rows; i++){
//         for(int j = 0; j < cols; j++){
//             if(matrix[i][j] == 0){
//                 for(int k = 0; k < cols; k++){
//                     Result[i][k] = 0;
//                 }
//                 for(int k = 0; k < rows; k++){
//                     Result[k][j] = 0;
//                 }
//                 // break;
//             }
//         }
//     }

//     cout << "Resultant Matrix:" << endl;
//     for(int i = 0; i < rows; i++){
//         for(int j = 0; j < cols; j++){
//             cout << Result[i][j] << " ";
//         }
//         cout << endl;
//     }




//     return 0;
// }

// Time Complexity: O(m * n * (m + n)) where m is the number of rows and n is the number of columns in the matrix.

// Code with low space complexity
#include <bits/stdc++.h>
using namespace std;

int main(){
    // vector<vector<int>> matrix = {
    //     {1, 1, 1},
    //     {1, 0, 1},
    //     {1, 1, 1}
    // };
    vector<vector<int>> matrix = {
        {0, 1, 2, 0},
        {3, 4, 5, 2},
        {1, 3, 1, 5}
    };
    int rows = matrix.size();
    int cols = matrix[0].size();
    bool firstRowZero = false;
    bool firstColZero = false;

    // Check if first row has a zero
    for(int j = 0; j < cols; j++){
        if(matrix[0][j] == 0){
            firstRowZero = true;
            break;
        }
    }

    // Check if first column has a zero
    for(int i = 0; i < rows; i++){
        if(matrix[i][0] == 0){
            firstColZero = true;
            break;
        }
    }

    // Use first row and column as markers
    for(int i = 1; i < rows; i++){
        for(int j = 1; j < cols; j++){
            if(matrix[i][j] == 0){
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    // Set zeros based on markers
    for(int i = 1; i < rows; i++){
        for(int j = 1; j < cols; j++){
            if(matrix[i][0] == 0 || matrix[0][j] == 0){
                matrix[i][j] = 0;
            }
        }
    }

    // Set first row to zero if needed
    if(firstRowZero){
        for(int j = 0; j < cols; j++){
            matrix[0][j] = 0;
        }
    }

    // Set first column to zero if needed
    if(firstColZero){
        for(int i = 0; i < rows; i++){
            matrix[i][0] = 0;
        }
    }

    cout << "Resultant Matrix:" << endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << matrix[i][j] << " ";
        }   
        cout << endl;
    }
    return 0;
}
