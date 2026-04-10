#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {2, 2 , 3 , 3 , 3 , 3 , 4, 4};
    int target = 4;
    int n = nums.size(), left = 0, right = n - 1;
    int count = 0;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(nums[mid] == target){
            count++;
            // check left side
            int l = mid - 1;
            while(l >= 0 && nums[l] == target){
                count++;
                l--;
            }
            // check right side
            int r = mid + 1;
            while(r < n && nums[r] == target){
                count++;
                r++;
            }
            cout << count << endl;
            break;
        }
        else if(nums[mid] < target){
            left = mid + 1;
        }
        else if(nums[mid] > target){
            right = mid - 1;
        }
    }   
    // time complexity: O(log n + k) where k is the number of occurrences of target
    
    // for(auto num : nums){
    //     if(num == target) count++;
    // }

    // cout << count << endl;
    // // time complexity: O(n)




    return 0;
}