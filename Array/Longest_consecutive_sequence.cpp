#include <bits/stdc++.h>
using namespace std;

int main(){
    // vector<int> nums = {100, 4, 200, 1, 3, 2};
    vector<int> nums = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    int n = nums.size();

    sort(nums.begin(), nums.end());
    int longestIndex = 1;
    int currentIndex = 1;
    for(int i=1; i<n; i++){
        if(nums[i] != nums[i-1]){ // to handle duplicates
            if(nums[i] == nums[i-1] + 1){
                currentIndex++;
            } else {
                longestIndex = max(longestIndex, currentIndex);
                currentIndex = 1;
            }
        }
    }
    longestIndex = max(longestIndex, currentIndex);
    
    cout << longestIndex << endl;


    return 0;
}