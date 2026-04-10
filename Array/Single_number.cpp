#include <bits/stdc++.h>
using namespace std;

int main(){
    // vector<int> nums = {2,2,1};
    vector<int> nums = {4,1,2,1,2};
    // int element = 0;
    // for(int i = 0; i < nums.size(); i++){
    //     int count = 0;
    //     for(int j = 0; j < nums.size(); j++){
    //         if(nums[i] == nums[j]){
    //             count++;
    //         }
    //         if(count == 2){
    //             continue;
    //         }     
    //     }
    //     if(count == 1){
    //         element = nums[i];
    //         break;
    //     }
        
    // }
    // cout << element << endl;


    sort(nums.begin(), nums.end());

    for(int i = 0; i < nums.size(); i+=2){
        if(i == nums.size()-1 || nums[i] != nums[i+1]){
            cout << nums[i] << endl;
            break;   
        }
    }

    return 0;
}