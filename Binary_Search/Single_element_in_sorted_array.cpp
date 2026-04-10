#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    int left = 0, right = nums.size() - 1;
    int ans = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if(mid % 2 == 0){
            if(mid + 1 < nums.size() && nums[mid] == nums[mid + 1]){
                left = mid + 2;
            }
            else{
                ans = nums[mid];
                right = mid - 1;
            }
        }
        else{
            if(mid - 1 >= 0 && nums[mid] == nums[mid - 1]){
                left = mid + 1;
            }
            else{
                ans = nums[mid];
                right = mid - 1;
            }
        }
    }

    return 0;
}