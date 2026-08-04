#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // int max1 = INT_MIN, max2 = INT_MIN;
    // int min1 = INT_MAX, min2 = INT_MAX;
    // for(int i : arr){
    //     if(i > max1){
    //         max2 = max1;
    //         max1 = i;
    //     }
    //     else if(i > max2){
    //         max2 = i;
    //     }
    //     if(i <= min1){
    //         min2 = min1;
    //         min1 = i;
    //     }
    //     else if(i < min2){
    //         min2 = i;
    //     }
    // }
    // cout << "The maximum product of two elements is: " << max(max1 * max2, min1 * min2) << endl;

    int target;
    cout << "Enter the target sum: ";
    cin >> target;
    unordered_set<int> seen;
	for (int val : arr) {
		if (seen.count(target - val))
			cout << "Pair found " << endl;
		seen.insert(val);
	}
    
    


    return 0;
}