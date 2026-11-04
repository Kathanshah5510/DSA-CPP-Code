#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> prices(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> prices[i];
    }

    // -------------------------------------------------------------------------------------------------------------------
    // Brute force approach
    int maxProfit = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            maxProfit = max(maxProfit, prices[j] - prices[i]);
        }
    }
    cout << "Maximum profit (Brute force): " << maxProfit << endl;

    // -------------------------------------------------------------------------------------------------------------------
    // Optimal approach (Using Kadane's Algorithm)
    int currProfit = 0, maxProfitOptimal = 0;
    for(int i = 1; i < n; i++){
        int diff = prices[i] - prices[i-1];
        currProfit = max(0, currProfit + diff);
        maxProfitOptimal = max(maxProfitOptimal, currProfit);
    }    
    cout << "Maximum profit (Optimal): " << maxProfitOptimal << endl;

    return 0;
}