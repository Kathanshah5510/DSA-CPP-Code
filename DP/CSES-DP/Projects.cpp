#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of projects: ";
    cin >> n;

    vector<array<long long, 3>> projects(n);
    for(auto &e : projects) cin >> e[1] >> e[0] >> e[2];
    
    sort(projects.begin(), projects.end());
    vector<long long> ends(n);
    for (int i = 0; i < n; i++) ends[i] = projects[i][0];

    vector<long long> dp(n + 1, 0);
    for (int i = 0; i < n; i++){
        long long a = projects[i][1], x = projects[i][2];
        int j = upper_bound(ends.begin(), ends.end(), a - 1) - ends.begin();
        dp[i + 1] = max(dp[i], dp[j] + x);
    }
    cout << dp[n] << endl;

    return 0;
}