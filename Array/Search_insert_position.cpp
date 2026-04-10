// // Time Complexity: O(n)

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int> nums = {1,3,5};
//     int n = nums.size();
//     int target;
//     cout << "Enter the target value: ";
//     cin >> target;

//     for(int i = 0; i < n; i++){
//         while(nums[i] > target){
//             cout << i << endl;
//             break;
//         }
//         if(nums[i] == target){
//             cout << i << endl;
//             break;
//         }
//         if(i == n-1 && nums[i] < target){
//             cout << n << endl;
//             break;
//         }
//     }


//     return 0;
// }




// Time Complexity: O(log n)
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,3,5,6};
    int n = nums.size(), target = 7;
    int left = 0, right = n - 1, ans = n;
    
    while(left <= right){
        int mid = left + (right - left) / 2;

        if(nums[mid] >= target){
            ans = mid;
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }

    }
    cout << ans << endl;
}