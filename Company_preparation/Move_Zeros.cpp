#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    // -------------------------------------------------------------------------------------------------------------------
    // Brute force approach 
    // vector<int> ans;
    // int count = 0;
    // for(int i = 0; i < n; i++){
    //     if(nums[i] != 0){
    //         ans.push_back(nums[i]);
    //     }
    //     else{
    //         count++;
    //     }
    // }
    // for(int i = 0; i < count; i++){
    //     ans.push_back(0);
    // }
    // for(int i = 0; i < n; i++){
    //     cout << ans[i] << " ";
    // }

    // -------------------------------------------------------------------------------------------------------------------
    // Optimal approach
    int j = 0;
    for(int i = 0; i < n; i++){
        if(nums[i] != 0){
            swap(nums[i], nums[j]);
            j++;
        }
    }
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }

    return 0;
}