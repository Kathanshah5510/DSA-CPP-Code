#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums = {3,2,2,3};
    vector<int> result;
    int val = 3;

    for(int i = 0; i < nums.size(); i++){
        if(nums[i] != val){
            result.push_back(nums[i]);
        }
    }
    cout << "Array after removing element " << val << ": ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}