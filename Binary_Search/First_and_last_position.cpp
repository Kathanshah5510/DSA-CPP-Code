#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;
    int n = nums.size(), first = -1, last = -1, left = 0, right = n - 1;

    // // Linear Search Approach
    // for(int i = 0; i < n; i++){
    //     if(nums[i] == target){
    //         first = i;
    //         break;
    //     }
    // }
    // for(int i = n - 1; i >= 0; i--){
    //     if(nums[i] == target){
    //         last = i;
    //         break;
    //     }
    // }
    // cout << first << " " << last << endl;

    // Binary Search Approach
    while(left <= right){
        int mid = left + (right - left) / 2;

        if(nums[mid] == target){
            first = mid;
            right = mid - 1;
        }
        else if(nums[mid] < target){
            left = mid + 1;
        }
        else if(nums[mid] > target){
            right = mid - 1;
        }
    }
    left = 0, right = n - 1;
    while(left <= right){
        int mid = left + (right - left) / 2;

        if(nums[mid] == target){
            last = mid;
            left = mid + 1;
        }
        else if(nums[mid] < target){
            left = mid + 1;
        }
        else if(nums[mid] > target){
            right = mid - 1;
        }
    }
    cout << first << " " << last << endl;


    return 0;
}