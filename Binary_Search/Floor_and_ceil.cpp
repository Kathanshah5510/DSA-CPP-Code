#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {3, 4, 4, 6, 7, 8, 10};
    int x = 5;
    int n = nums.size(), floor = -1, ceil = -1, left = 0, right = n - 1;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(nums[mid] == x){
            floor = nums[mid];
            ceil = nums[mid];
            break;
        }
        else if(nums[mid] < x){
            floor = nums[mid];
            left = mid + 1;
        }
        else if(nums[mid] > x){
            ceil = nums[mid];
            right = mid - 1;
        }
    }
    cout << "Floor: " << floor << endl;
    cout << "Ceil: " << ceil << endl;
    
    return 0;
}