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

    // ------------------------------------------------------------------------------------------------------------------------
    // Brute Force approach
    // unordered_set<int> st;
    // for(int i = 0;i < n; i++){
    //     st.insert(nums[i]);
    // }

    // int m = st.size();
    // if(m == n){
    //     cout << "No duplicates" << endl;
    // } 
    // else{
    //     cout << "Duplicates found" << endl;
    // }
    
    // OR
    // for(int i = 0; i < n; i++){
    //     for(int j = i + 1; j < n; j++){
    //         if(nums[i] == nums[j]){
    //           cout << "Duplicates found" << endl;
    //         }
    //     }
    // }


    // ------------------------------------------------------------------------------------------------------------------------
    // Optimal approach using Set
    unordered_set<int> st;
    for(int num : nums){
        if(st.find(num) != st.end()){
             cout << "Duplicates found" << endl;
        }
        st.insert(num);
    }
    cout << "No duplicates" << endl;


    return 0;
}