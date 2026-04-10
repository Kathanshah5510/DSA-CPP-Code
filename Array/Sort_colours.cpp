#include <bits/stdc++.h>
using namespace std;  

int main(){

    vector<int> nums = {2, 0, 2, 1, 1, 0};
    int low = 0, mid = 0, high = nums.size() - 1;

    cout << "Original Colours: ";
    for(int num : nums){
        cout << num << " ";
    }
    cout << endl;

    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid] == 1){
            mid++;
        }
        else{
            swap(nums[mid], nums[high]);
            high--;
        }
    }

    cout << "Sorted Colours: ";
    for(int num : nums){
        cout << num << " ";
    }


    return 0;
}