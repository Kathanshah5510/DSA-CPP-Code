#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // ----------------------------------------------------------------------------------------------------------
    // Brute Force
    vector<int> ans;
    for(int i = 0; i < n; i++){
        int res = 1;
        for(int j = 0; j < n; j++){
            if(i == j){
                continue;
            }
            res *= arr[j];
        }
        ans.push_back(res);
    }

    cout << "Product of Array Except Self: ";
    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }

    // ----------------------------------------------------------------------------------------------------------
    // Optimal Approach
    vector<int> left(n, 1), right(n, 1), result(n);
    for(int i = 1; i < n; i++){
        left[i] = left[i - 1] * arr[i - 1];
    }
    for(int i = n - 2; i >= 0; i--){
        right[i] = right[i + 1] * arr[i + 1];
    }
    for(int i = 0; i < n; i++){
        result[i] = left[i] * right[i];
    }

    cout << "\nProduct of Array Except Self (Optimal): ";
    for(int i = 0; i < n; i++){
        cout << result[i] << " ";
    }

    return 0;
}