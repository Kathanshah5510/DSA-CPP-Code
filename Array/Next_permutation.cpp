#include <bits/stdc++.h>
using namespace std;

int main(){
    // vector<int> nums = {1,2,3};
    vector<int> nums = {3,2,1};
    int n = nums.size();
    // bool hasNext = next_permutation(nums.begin(), nums.end());
    // if(hasNext){
    //     cout << "Next permutation: ";
    //     for(int i = 0; i < n; i++){
    //         cout << nums[i] << " ";
    //     }
    //     cout << endl;
    // }
    // else{
    //     sort(nums.begin(), nums.end());

    //     for(int i = 0; i < n; i++){
    //         cout << nums[i] << " ";
    //     }
    //     cout << endl;
    // }

    // without using STL
    // int i = n - 2;
    // while(i >= 0 && nums[i] >= nums[i + 1]){
    //     i--;
    // }
    // if(i >= 0){
    //     int j = n - 1;
    //     while(nums[j] <= nums[i]){
    //         j--;
    //     }
    //     swap(nums[i], nums[j]);
    // }
    // reverse(nums.begin() + i + 1, nums.end());
    // cout << "Next permutation: ";
    // for(int i = 0; i < n; i++){
    //     cout << nums[i] << " ";
    // }
    // cout << endl;
    
    // 123 -> 132
    // 132 -> 213
    // 213 -> 231
    // 231 -> 312
    // 312 -> 321
    // 321 -> 123
    for(int i = n - 2; i >= 0; i--){
        if(nums[i] < nums[i+1]){ // find first decreasing element from the right
            int j = n - 1; // last index 
            // find the just larger element to swap with
            while(nums[j] <= nums[i]){
                j--;
            }
            swap(nums[i], nums[j]);
            reverse(nums.begin() + i + 1, nums.end());
            // cout << "Next permutation: ";
            // for(int k = 0; k < n; k++){
            //     cout << nums[k] << " ";
            // }
            // cout << endl;
            break;

        }
        else{
            // i == 0; 
            sort(nums.begin(), nums.end());
            for(int k = 0; k < n; k++){
                cout << nums[k] << " ";
            }
            cout << endl;
        }
    }




    return 0;
}