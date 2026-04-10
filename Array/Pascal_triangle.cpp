#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> n;

    // Initialize a 2D vector to hold the triangle
    vector<vector<int>> pascal(n);

    // Fill the triangle
    for(int i = 0; i < n; i++){
        // Each row has i + 1 elements
        pascal[i].resize(i + 1);
        
        // Set the first and last elements of the row
        pascal[i][0] = pascal[i][i] = 1;

        // Calculate the values for the current row
        for(int j = 1; j < i; j++){
            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
        }
    }

    // Output the triangle
    cout << "Pascal's Triangle:\n";
    for(int i = 0; i < n; i++){
        // Print leading spaces for formatting
        cout << string(n - i - 1, ' ');
        
        // Print the elements of the current row
        for(int j = 0; j <= i; j++){
            cout << pascal[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}