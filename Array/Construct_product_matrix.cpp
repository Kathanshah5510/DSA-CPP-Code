#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> grid = {{12345}, {2}, {1}};
    int n = grid.size(), n1 = grid[0].size();
    int mult = 1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n1; j++){
            mult *= grid[i][j];
        }
    }
    cout << mult << endl;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n1; j++){
            int temp = grid[i][j];
            grid[i][j] = mult / temp;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n1; j++){
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}