#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, target;
    cout << "Enter the number of coins and the target amount: ";
    cin >> n >> target;

    vector<int> coins(n);
    cout << "Enter the coin values: ";
    for(int i = 0; i < n; i++){
        cin >> coins[i];
    }

    const int INF = 1e9;
    vector<int> dp(target + 1, INF);
    dp[0] = 0;

    for(int i = 1; i <= target; i++){
        for(int coin : coins){
            if(i - coin >= 0  && dp[i - coin] != INF){
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }
    cout << "Minimum number of coins needed: ";
    if(dp[target] == INF){
        cout << -1 << endl;
    } else {
        cout << dp[target] << endl;
    }

    return 0;
}