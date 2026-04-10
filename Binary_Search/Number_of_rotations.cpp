#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {4,5,6,7,0,1,2,3};
    int left = 0, right = nums.size() - 1;
    int ans = INT_MAX;

    while(left <= right){
        int mid = left + (right - left) / 2;
        if(nums[mid] <= nums[right]){
            ans = min(ans, mid);
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    cout << "Number of rotations is: " << ans << endl;

    return 0;
}