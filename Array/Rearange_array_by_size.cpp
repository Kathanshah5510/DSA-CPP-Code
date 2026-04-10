#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {3,1,-2,-5,2,-4};
    int n = nums.size();

    vector<int> rearranged(n);
    int posIndex = 0;
    int negIndex = 1;

    for(int i = 0; i < n; i++){
        if(nums[i] >= 0){
            rearranged[posIndex] = nums[i];
            posIndex += 2;
        }
        else{
            rearranged[negIndex] = nums[i];
            negIndex += 2;
        }
    }   

    cout << "Rearranged array: ";
    for(int i = 0; i < n; i++){
        cout << rearranged[i] << " ";
    }
    cout << endl;

    return 0;
}