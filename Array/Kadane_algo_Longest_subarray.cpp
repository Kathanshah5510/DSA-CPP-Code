#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {-1, 1, 1};
    int k = 1;
    // vector<int> nums = {2, 3, 5};
    // int k = 5;
    int n = nums.size();    
    int len = 0;

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int sum = 0;
            for(int z = i; z <= j; z++){
                sum += nums[z];
            }
            if(sum == k){
                len = max(len, j - i + 1);
            }
        }
    }
    cout << "Maximum Length: " << len << endl;

    return 0;
}
