#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout << "Enter a string: ";
    cin >> s;
    int n = s.size();
    int maxLength = 1, start = 0;
    vector<vector<bool>> dp(n, vector<bool>(n, false));

    for(int i = 0; i < n; i++){
        dp[i][i] = true;
    }

    for(int i = 2; i <=n; i++){
        for(int j = 0; j + i - 1 < n; j++){
            int k = j + i - 1;
            if(s[j] == s[k]){
                if(i == 2 || dp[j+1][k-1]){
                    dp[j][k] = true;
                    if(i > maxLength){
                        maxLength = i;
                        start = j;
                    }
                }
            }
        }
    }
    cout << "Longest Palindromic Substring: " << s.substr(start, maxLength) << endl;

    return 0;
}