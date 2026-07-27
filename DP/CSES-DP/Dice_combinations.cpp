#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main(){
    int n;
    cout << "Enter the target sum: ";
    cin >> n;

    vector<long long> dp(n + 1, 0);
    dp[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 6; j++){
            if(i - j >= 0){
                dp[i] = (dp[i] + dp[i - j]) % MOD;
            }
        }
    }
    cout << "The number of ways to achieve the target sum " << n << " using dice rolls is: ";
    cout << dp[n] << endl;

    return 0;
}