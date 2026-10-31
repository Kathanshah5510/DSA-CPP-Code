#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cout << "Enter the size of the array 1: ";
    cin >> n;
    cout << "Enter the size of the array 2: ";
    cin >> m;
    vector<int> nums(n);
    cout << "Enter the elements of the array 1: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    vector<int> nums2(m);
    cout << "Enter the elements of the array 2: ";
    for(int i = 0; i < m; i++){
        cin >> nums2[i];
    }

    // -------------------------------------------------------------------------------------------------------------------
    // Brute force approach
    vector<int> ans;
    for(int i = 0; i < n; i++){
        ans.push_back(nums[i]);
    }
    for(int i = 0; i < m; i++){
        ans.push_back(nums2[i]);
    }
    sort(ans.begin(), ans.end());
    for(int i = 0; i < n + m; i++){
        cout << ans[i] << " ";
    }


    // -------------------------------------------------------------------------------------------------------------------
    // Optimal approach
    vector<int> ans2;
    int i = 0, j = 0;
    while(i < n && j < m){
        if(nums[i] < nums2[j]){
            ans2.push_back(nums[i]);
            i++;
        }
        else{
            ans2.push_back(nums2[j]);
            j++;
        }
    }
    while(i < n){
        ans2.push_back(nums[i]);
        i++;
    }
    while(j < m){
        ans2.push_back(nums2[j]);
        j++;
    }
    for(int i = 0; i < n + m; i++){
        cout << ans2[i] << " ";
    }


    return 0;
}