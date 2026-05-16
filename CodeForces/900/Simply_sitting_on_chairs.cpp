#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> chairs(n + 1);
        for(int i = 1; i <= n; i++){
            cin >> chairs[i];
        }

        vector<int> add(n + 2, 0);
        for(int i = 1; i <= n; i++){
            if(chairs[i] > i) {
                add[chairs[i] + 1]++;
            }
        }

        int bad = 0, ans = 0;
        for(int m = 1; m <= n + 1; m++){
            bad += add[m];
            ans = max(ans, ((m - 1) - bad));
        }
        cout << ans << endl;
    }

    return 0;
}