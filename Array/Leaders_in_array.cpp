#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {4, 7, 1, 0};
    int n = nums.size();    

    vector<int> result;
    int max = nums[n - 1];
    result.push_back(max);

    for(int i = n - 2; i >= 0; i--){
        if(nums[i] > max){
            max = nums[i];
            result.push_back(max);
        }
    }
    int res_size = result.size();

    for(int i = 0; i < res_size; i++){
        cout << result[i] << " ";
    }
    cout << endl;





    return 0;
}