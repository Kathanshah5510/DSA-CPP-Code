#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {23,2,4,6,7};
    int k = 6;

    int n = nums.size();
    bool good = false;
    // for(int i = 0; i < n; i++){
    //     int sum = 0;
    //     for(int j = i; j < n; j++){
    //         sum += nums[j];  
    //         if(sum % k == 0){
    //             good = true;
    //             break;
    //         }
    //         else good = false;
    //     }
        
    // }
    // if(good){
    //     cout << "true" << endl;
    // }
    // else{
    //     cout << "false" << endl;
    // }

    unordered_map<int, int> mp;
    mp[0] = -1;  // important

    int sum = 0;

    for(int i = 0; i < nums.size(); i++) {
        sum += nums[i];

        int rem = (k == 0) ? sum : sum % k;

        if(mp.count(rem)) {
            if(i - mp[rem] >= 2) {
                good = true;
            }
        } else {
            mp[rem] = i;
        }
    }

    if(good){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }

}