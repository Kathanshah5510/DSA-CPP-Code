#include <bits/stdc++.h>
using namespace std;

int main(){
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;
    int n;
    cout << "Enter the number of coins: ";
    cin >> n;
    vector<int> coins(n);
    cout << "Enter the values of coins: ";
    for(int i = 0; i < n; i++){
        cin >> coins[i];
    }

    // vector<int> dp(amount + 1, 0);
    vector<long long> dp(amount + 1, 0);

    dp[0] = 1;

    for(int coin : coins){
        for(int i = coin; i <= amount; i++){
            dp[i] += dp[i-coin];
            if (dp[i] > INT_MAX)
                    dp[i] = INT_MAX;
        }
    }
    cout << "The number of combinations that make up that amount is: " << dp[amount] << endl;

    return 0;
}