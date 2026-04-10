#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k = 15;
    int n = nums.size();
    vector<int> result;

    // // Brute Force Approach: O(n^3) time complexity
    // for(int i = 0 ; i < n; i++){
    //     for(int j = i; j < n; j++){
    //         int sum = 0;
    //         vector<int> temp;
    //         for(int m = i; m <= j; m++){
    //             sum += nums[m];
    //             temp.push_back(nums[m]);
    //         }
    //         if(sum == k){
    //             if(temp.size() > result.size()){
    //                 result = temp;
    //             }
    //         }

    //     }

    // }

    // int size = result.size();
    // cout << "Length of longest subarray with sum " << k << " is: " << size << endl;

    // Optimal Approach: O(n) time complexity
    int left = 0, right = 0;
    int sum = nums[0];
    int maxLength = 0;

    while (right < n)
    {

        // If the sum exceeds K, shrink the window
        while (left <= right && sum > k)
        {
            sum -= nums[left];
            left++;
        }

        // store the maximum length
        if (sum == k)
        {
            maxLength = max(maxLength, right - left + 1);
        }
        right++;

        if (right < n)
            sum += nums[right];
    }
    cout << "Length of longest subarray with sum " << k << " is: " << maxLength << endl;

    return 0;
}
