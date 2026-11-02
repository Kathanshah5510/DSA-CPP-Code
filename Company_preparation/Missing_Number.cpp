#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    // -------------------------------------------------------------------------------------------------------------------
    // Brute force approach
    sort(nums.begin(), nums.end());
    int missing = -1;
    for(int i = 0; i < n - 1; i++){
        if(nums[i + 1] - nums[i] > 1){
            missing = nums[i] + 1;
            break;
        }
    }
    if(missing != -1){
        cout << "The missing number is: " << missing << endl;
    }
    else{
        cout << "No missing number found." << endl;
    }

    // -------------------------------------------------------------------------------------------------------------------
    // Optimal approach (Using XOR)
    int xor1 = 0, xor2 = 0;
    for(int i = 0; i < n; i++){
        xor1 ^= nums[i];
    }
    for(int i = 1; i <= n + 1; i++){
        xor2 ^= i;
    }
    int missing2 = xor1 ^ xor2;
    if(missing2 != 0){
        cout << "The missing number is: " << missing2 << endl;
    }
    else{
        cout << "No missing number found." << endl;
    }

    return 0;
}