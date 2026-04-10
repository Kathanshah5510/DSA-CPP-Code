#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> matrix = { 
        { 1, 2, 3 }, // 00 01 02
        { 4, 5, 6 }, // 10 11 12
        { 7, 8, 9 }  // 20 21 22
    };

    int top = 0;
    int bottom = matrix.size() - 1;
    int left = 0;
    int right = matrix[0].size() - 1;
    vector<int> result;

    while (top <= bottom && left <= right) {
        // Traverse from left to right
        for (int j = left; j <= right; j++) {
            result.push_back(matrix[top][j]);
        }
        top++;

        // Traverse from top to bottom
        for (int i = top; i <= bottom; i++) {
            result.push_back(matrix[i][right]);
        }
        right--;

        // Traverse from right to left
        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                result.push_back(matrix[bottom][j]);
            }
            bottom--;
        }

        // Traverse from bottom to top
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                result.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;





    return 0;
}