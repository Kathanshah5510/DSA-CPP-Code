#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // --------------------------------------------------------------------------------------------------------------------------
    // Brute Force
    int max_sum = INT_MIN;
    for(int i = 0; i < n; i++){
        int current_sum = 0;
        for(int j = i; j < n; j++){
            current_sum += arr[j];
            max_sum = max(max_sum, current_sum);
        }
    }

    // --------------------------------------------------------------------------------------------------------------------------
    // Optimal Approach (Kadane's Algorithm)
    int current_sum = 0;
    max_sum = INT_MIN;
    for(int i = 0; i < n; i++){
        current_sum += arr[i];
        max_sum = max(max_sum, current_sum);
        if(current_sum < 0){
            current_sum = 0;
        }
    }

    cout << "Maximum Subarray Sum: " << max_sum << endl;

    return 0;
}