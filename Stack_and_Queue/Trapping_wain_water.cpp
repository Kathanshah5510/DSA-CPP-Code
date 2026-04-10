// #include <bits/stdc++.h>
// using namespace std;

// vector<int> nextGreater(vector<int> &nums){
//     int n = nums.size();
//     stack<int> st;
//     vector<int> ans(n);

//     for (int i = n - 1; i >= 0; i--)
//     {
//         if (nums[i] == 0){
//             continue;
//         }
//         else{
//             while (!st.empty() && st.top() <= nums[i]){
//                 st.pop();
//             }
//             if (st.empty()){
//                 ans[i] = -1;
//             }
//             else{
//                 ans[i] = st.top();
//             }
//             st.push(nums[i]);
//         }
//     }
//     return ans;
// }

// int main(){
//     vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
//     int n = height.size();
//     int answer = 0;

//     vector<int> result(n);
//     result = nextGreater(height);

//     for (int i = 0; i < n; i++){
//         cout << height[i] << " ";
//     }
//     cout << endl;
//     for (int i = 0; i < n; i++){
//         cout << result[i] << " ";
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n = height.size();
    int answer = 0;

    int left = 0, right = n - 1;
    int leftMax = 0, rightMax = 0;
    int water = 0;

    while(left < right){
        if(height[left] < height[right]){
            
            if(height[left] >= leftMax){
                leftMax = height[left];
            } 
            else{
                water += leftMax - height[left];
            }
            
            left++;
        }
        else{
            
            if(height[right] >= rightMax){
                rightMax = height[right];
            } 
            else{
                water += rightMax - height[right];
            }
            
            right--;
        }
    }
    cout << water << endl;

    return 0;
}