#include <bits/stdc++.h>
using namespace std;

int main(){
    // vector<int> nums = {3,4,5,1,2};
    vector<int> nums = {3,1,2};
    int left = 0, right = nums.size() - 1;
    int ans = INT_MAX;

    while(left <= right){
        int mid = left + (right - left) / 2;
        if(nums[mid] <= nums[right]){
            ans = min(ans, nums[mid]);
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }

    cout << "Minimum element is: " << ans << endl;

    return 0;
}