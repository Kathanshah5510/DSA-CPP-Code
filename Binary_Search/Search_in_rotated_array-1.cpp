#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {4,5,6,7,0,1,2};
    // vector<int> nums = {5,6,7,0,1,2,3,4};
    int target = 0;
    int n = nums.size(), left = 0, right = n - 1;
    int ans = -1;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(nums[mid] == target){
            ans = mid;
            cout << ans << endl;
            break;
        }

        if(nums[left] <= nums[mid]){
            if(nums[left] <= target && target < nums[mid]){
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        else{
            if(nums[mid] < target && target <= nums[right]){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
    }


    return 0;
}