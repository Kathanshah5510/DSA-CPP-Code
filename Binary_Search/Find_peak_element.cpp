#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,1};
    int left = 0, right = nums.size() - 1;
    int ans = -1;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(mid + 1 < nums.size() && nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1]){
            ans = mid;
            break;
        }
        else if(nums[mid] >= nums[left]){
            left = mid + 1;
        }
        else{
            right = mid - 1;

        }
    }
    cout << "Peak element is at index: " << ans << endl;


    return 0;
}