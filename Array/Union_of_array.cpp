#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums1 = {1,2,3};
    vector<int> nums2 = {2,3,4};
    vector<int> result;

    int n = nums1.size(), m = nums2.size();

    int i = 0, j = 0;

    while(i < n && j < m){
        if(nums1[i] < nums2[j]){
            result.push_back(nums1[i]);
            i++;
        }
        else if(nums2[j] < nums1[i]){
            result.push_back(nums2[j]);
            j++;
        }
        else if(nums1[i] == nums2[j]){
            result.push_back(nums1[i]);
            i++;
            j++;
        }
        else{
            continue;
        }
    }
    while(i < n){
        result.push_back(nums1[i]);
        i++;
    }
    while(j < m){
        result.push_back(nums2[j]);
        j++;
    }

    for(int k = 0; k < result.size(); k++){
        cout << result[k] << " ";
    }
    cout << endl;
        
    return 0;
}

// Time Complexity: O(n + m)
// Space Complexity: O(n + m)