#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {2,5,6,0,0,1,2};
    int target = 0;
    bool found = false;
    int n = nums.size(), left = 0, right = n - 1;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(nums[mid] == target){
            found = true;
            cout << "Target found at index: " << mid << endl;
            break;
        }

        if(nums[left] == nums[mid] && nums[mid] == nums[right]){
            left++;
            right--;
        }
        else if(nums[left] <= nums[mid]){
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
    if(!found){
        cout << "Target not found" << endl;
    }

    return 0;
}