#include <bits/stdc++.h>
using namespace std;

// int main(){
//     // vector<int> nums = {0, 1, 0, 3, 12};
//     vector<int> nums = {1, 0, 0};
//     // vector<int> nums = {2,1};
//     int n = nums.size();

//     int* left = &nums[0];
//     int* right = &nums[n - 1];
//     int count = 0;

//     while(left <= right){
//        if(*left == 0){
//             count++;
//             swap(*left, *right);
//             left++;
//             right--;
//         }
//         else{
//             left++;
//         }
//     }

//     cout << "Count of zeros: " << count << endl;
//     if(count != 0){
//         sort(nums.begin(), nums.end() - count);
//     }
    
//     for(int i = 0; i < n; i++){
//         cout << nums[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }


int main(){
    // vector<int> nums = {0, 1, 0, 3, 12};
    vector<int> nums = {1,0,0};
    int n = nums.size();
    int insertPos = 0;
    
    for(int i = 0; i < n; i++){
        if(nums[i] != 0){
            nums[insertPos] = nums[i];
            insertPos++;
        }
    }
    while(insertPos < n){
        nums[insertPos] = 0;
        insertPos++;
    }
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}