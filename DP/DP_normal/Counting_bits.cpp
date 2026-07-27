#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of bits: ";
    cin >> n;
    vector<int> dp(n + 1, 0);
    dp[0] = 0;
    for(int i = 1; i <= n; i++){
        dp[i] = dp[i >> 1] + (i & 1);
    }
    cout << "The number of 1's in the binary representation of numbers from 0 to " << n << " is: ";
    for(int i = 0; i <= n; i++){
        cout << dp[i] << " ";
    }
    cout << endl;
    
    return 0;
}