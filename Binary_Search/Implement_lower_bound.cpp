#include <bits/stdc++.h>
using namespace std;

int main(){
    // vector<int> nums = {1,2,2,3};
    // int x = 2;
    vector<int> nums = {3,5,8,15,19};
    int x = 9;
    int n = nums.size(), left = 0, right = n-1, ans = n;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(nums[mid] >= x){
            ans = mid;
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    cout << ans << endl;
    

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// class LowerBoundFinder {
// public:
//     int lowerBound(vector<int> arr, int n, int x) {
//         int low = 0;           
//         int high = n - 1;      
//         int ans = n;           

//         while (low <= high) {
//             int mid = (low + high) / 2;  

//             if (arr[mid] >= x) {
//                 ans = mid;           
//                 high = mid - 1;      
//             } else {
//                 low = mid + 1;       
//             }
//         }
//         return ans;  
//     }
// };

// int main() {
//     vector<int> arr = {3, 5, 8, 15, 19}; 
//     int n = arr.size();                  
//     int x = 9;                           

//     LowerBoundFinder finder;            
//     int index = finder.lowerBound(arr, n, x);  
//     cout << "The lower bound is the index: " << index << "\n";
//     return 0;
// }
