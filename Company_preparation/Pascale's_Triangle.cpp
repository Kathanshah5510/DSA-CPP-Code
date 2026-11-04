#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;


    vector<vector<int>> triangle;
    triangle.reserve(n);

    for (int i = 0; i < n; i++) {
        vector<int> row(i + 1, 1);
        for (int j = 1; j < i; j++) {
            row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
        triangle.push_back(row);
    }

    for (const auto& row : triangle) {
        for (int value : row) {
            cout << value << " ";
        }
        cout << '\n';
    }

    return 0;
}