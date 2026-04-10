#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    int m = 3, n = 3;

    for(int i = m; i < m+n; i++){
        nums1[i] = nums2[i - m];
    }
    sort(nums1.begin(), nums1.end());
    cout << "Merged sorted array: ";
    for (int x : nums1) {
        cout << x << " ";
    }

    return 0;
}