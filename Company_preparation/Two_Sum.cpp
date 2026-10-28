#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, target;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    cout << "Enter the target sum: ";
    cin >> target;

    // ------------------------------------------------------------------------------------------------------------------------
    // Brute Force approach
    // for(int i = 0; i < n; i++){
    //     for(int j = i + 1; j < n; j++){
    //         if(nums[i] + nums[j] == target){
    //             cout << "Pair found: (" << nums[i] << ", " << nums[j] << ")" << endl;
    //             return 0;
    //         }
    //     }
    // }

    // ------------------------------------------------------------------------------------------------------------------------
    // Optimal approach using Map
    unordered_map<int, int> mp;
        for(int i = 0; i < n; i++){
            int need = target - nums[i];
            if(mp.find(need) != mp.end()){
                cout << "Pair found: (" << mp[need] << ", " << i << ")" << endl;
                return 0;
            }
            mp[nums[i]] = i;
        }

    return 0;
}