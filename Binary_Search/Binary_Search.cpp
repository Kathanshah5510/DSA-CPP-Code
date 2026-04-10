#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;

    // find the middle element
    // if middle == target return middle index
    // if middle < target search in right half
    // if middle > target search in left half
    // repeat

    int n = nums.size(), left = 0, right = n - 1;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(nums[mid] == target){
            cout << mid << endl;
            break;
        }
        else if(nums[mid] < target){
            left = mid + 1;
        }
        else if(nums[mid] > target){
            right = mid - 1;
        }
    }

    return -1;
}