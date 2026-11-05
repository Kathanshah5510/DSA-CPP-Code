#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter the number of rotations: ";
    cin >> k;

    // ----------------------------------------------------------------------------------------------------------
    // Brute Force
    // vector<int> rotated_arr(n);
    // for(int i = 0; i < n; i++){
    //     rotated_arr[(i + k) % n] = arr[i];
    // }
    
    // ----------------------------------------------------------------------------------------------------------
    // Optimal Approach
    k = k % n; // In case k is greater than n
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());

    cout << "Rotated Array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }


    return 0;
}