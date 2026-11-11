#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // ----------------------------------------------------------------------------------------------------------
    // Brute Force
    int longestStreak = 0;
    for(int i = 0; i < n; i++){
        int currentNum = arr[i];
        int currentStreak = 1;
        while(find(arr.begin(), arr.end(), currentNum + 1) != arr.end()){
            currentNum++;
            currentStreak++;
        }
        longestStreak = max(longestStreak, currentStreak);
    }
    cout << "Length of the longest consecutive sequence (Brute Force): " << longestStreak << endl;

    // ----------------------------------------------------------------------------------------------------------
    // Optimal Approach
    unordered_set<int> numSet(arr.begin(), arr.end());
    longestStreak = 0;
    for(int num : numSet){
        if(numSet.find(num - 1) == numSet.end()){
            int currentNum = num;
            int currentStreak = 1;
            while(numSet.find(currentNum + 1) != numSet.end()){
                currentNum++;
                currentStreak++;
            }
            longestStreak = max(longestStreak, currentStreak);
        }
    }
    cout << "Length of the longest consecutive sequence (Optimal): " << longestStreak << endl;

    return 0;
}