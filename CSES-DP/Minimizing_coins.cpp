#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cout << "Enter the number of coins and the target amount: ";
    cin >> n >> x;

    vector<int> coins(n);
    cout << "Enter the coin denominations: ";
    for(int i = 0; i < n; i++){
        cin >> coins[i];
    }

    const int INF = 1e9;
    vector<int> dp(x + 1, INF);
    dp[0] = 0;

    for(int i = 1; i <= x; i++){
        for(int j : coins){
            if(i - j >= 0  && dp[i - j] != INF){
                dp[i] = min(dp[i], dp[i - j] + 1);
            }
        }
    }
    cout << "Minimum number of coins needed: ";
    if(dp[x] == INF){
        cout << -1 << endl;
    } else {
        cout << dp[x] << endl;
    }

    return 0;
}