#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of intervals: ";
    cin >> n;
    vector<vector<int>> intervals(n);
    cout << "Enter the intervals (start and end): ";
    for(int i = 0; i < n; i++){
        cin >> intervals[i][0] >> intervals[i][1];
    }

    // ----------------------------------------------------------------------------------------------------------
    // Brute Force
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> merged;
    for(int i = 0; i < n; i++){
        if(merged.empty() || merged.back()[1] < intervals[i][0]){
            merged.push_back(intervals[i]);
        }
        else{
            merged.back()[1] = max(merged.back()[1], intervals[i][1]);
        }
    }
    cout << "Merged intervals (Brute Force): ";
    for(const auto& interval : merged){
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    cout << endl;

    // ----------------------------------------------------------------------------------------------------------
    // Optimal Approach
    // vector<vector<int>> result;

    // for (auto& i : intervals){
    //    if (!result.empty() && i[0] <= result.back()[1]){
    //        result.back()[1] = max(result.back()[1], i[1]);
    //     }
    //     else result.push_back(i);
    // }

    // cout << "Merged intervals (Optimal Approach): ";
    // for(const auto& interval : result){
    //     cout << "[" << interval[0] << ", " << interval[1] << "] ";
    // }
    // cout << endl;

    return 0;
}