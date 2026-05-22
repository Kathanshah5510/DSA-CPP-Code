#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n);
    n = nums.size();
    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++) cin >> nums[i];

    sort(nums.begin(), nums.end());
    int ans = INT_MAX;
    for(int i = 1; i < n; i++){
        ans = min(ans, nums[i] - nums[i-1]);
    }
    cout << "The minimum difference is: " << ans << endl;

    return 0;
}