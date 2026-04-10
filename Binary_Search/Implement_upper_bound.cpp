#include <bits/stdc++.h>
using namespace std;

int main(){
    // vector<int> nums = {1,2,2,3};
    // int x = 2;
    vector<int> nums = {3,5,8,9,15,19};
    int x = 9;
    int n = nums.size(), left = 0, right = n-1, ans = n;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(nums[mid] > x){
            ans = mid;
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    cout << ans << endl;


    return 0;
}