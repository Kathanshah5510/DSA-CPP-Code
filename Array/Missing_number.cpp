// My approach using brute force with extra space: O(n)
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int> nums = {3,0,1};
//     int n = nums.size();

//     unordered_set<int> st(nums.begin(), nums.end());

//     for(int i = 0; i <=n; i++){
//         if(st.find(i) == st.end()){
//             cout << "Missing Number: " << i << endl;
//             break;
//         }
//     }

//     return 0;
// }




// Optimum Approach with maths logic
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {2,0,1};
    int n = nums.size();

    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;
    for(int num : nums){
        actualSum += num;
    }

    cout << "Missing Number: " << expectedSum - actualSum << endl;

    return 0;
}