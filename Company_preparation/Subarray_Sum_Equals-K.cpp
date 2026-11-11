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
    int k;
    cout << "Enter the value of k: ";
    cin >> k;

    // ----------------------------------------------------------------------------------------------------------
    // Brute Force
    int count = 0;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += arr[j];
            if(sum == k){
                count++;
            }
        }
    }
    cout << "Count of subarrays with sum equal to k (Brute Force): " << count << endl;

    // ----------------------------------------------------------------------------------------------------------
    // Optimal Approach
    unordered_map<int, int> prefixSumCount;
    int prefixSum = 0;
    count = 0;
    prefixSumCount[0] = 1;
    for(int i = 0; i < n; i++){
        prefixSum += arr[i];
        if(prefixSumCount.find(prefixSum - k) != prefixSumCount.end()){
            count += prefixSumCount[prefixSum - k];
        }
        prefixSumCount[prefixSum]++;
    }
    cout << "Count of subarrays with sum equal to k (Optimal): " << count << endl;
    

    return 0;
}