#include <bits/stdc++.h>
using namespace std;

int main(){
    // int n = 6;
    // vector<int> nums = {5, 7, 1, 7, 6, 0};
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    stack<int> st;
    vector<int> ans(n);

    for(int i = (2*n) - 1; i >= 0; i--){
        int idx = i % n;
        int curr = nums[idx];
        while(!st.empty() && st.top() <= nums[idx]){
            st.pop();
        }
        if(i < n){
            if(st.empty()){
                ans[idx] = -1;
            } else {
                ans[idx] = st.top();
            }
        }
        st.push(curr);
    }

    cout << " Answer array: " << endl;
    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }


    return 0;
}