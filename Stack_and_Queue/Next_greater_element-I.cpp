#include <bits/stdc++.h>
using namespace std;

// void findNextGreaterElement(int num, vector<int> &nums2, stack<int> &st){
//     int index = -1;
//     for(int i = 0; i < nums2.size(); i++){
//         if(nums2[i] == num){
//             index = i;
//             break;
//         }
//     }
//     for(int i = index + 1; i < nums2.size(); i++){
//         if(nums2[i] > num){
//             cout << nums2[i] << endl;
//             return;
//         }
//     }
//     while(!st.empty() && st.top() <= num){
//         st.pop();
//     }
//     if(st.empty()){
//         cout << -1 << endl;
//     } 
//     else {
//         cout << st.top() << endl;
//     }
// }

// Monotonic stack
// int main(){
//     vector<int> nums1 = {4,1,2};
//     vector<int> nums2 = {1,3,2,4}; 
//     stack<int> st;
//     int n = nums1.size();
//     vector<int> answer(n);    
//     for(int i = 0; i < nums1.size(); i++){
//         findNextGreaterElement(nums1[i], nums2, st);
//         answer[i] = st.top();
//     }   
//     for(int i = 0; i < n; i++){
//         cout << answer[i] << " ";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> nums1 = {4,1,2};
    vector<int> nums2 = {1,3,2,4};
    int n = nums2.size();
    vector<int> nextGreater(n);
    stack<int> st;

    // Build next greater array for nums2
    for(int i = n - 1; i >= 0; i--) {

        while(!st.empty() && st.top() <= nums2[i]) {
            st.pop();
        }

        if(st.empty())
            nextGreater[i] = -1;
        else
            nextGreater[i] = st.top();

        st.push(nums2[i]);
    }

    // Build answer for nums1
    vector<int> answer;
    for(int num : nums1) {

        // Find index of num in nums2
        for(int i = 0; i < n; i++) {
            if(nums2[i] == num) {
                answer.push_back(nextGreater[i]);
                break;
            }
        }
    }
    // Print result
    for(int x : answer)
        cout << x << " ";

    return 0;
}