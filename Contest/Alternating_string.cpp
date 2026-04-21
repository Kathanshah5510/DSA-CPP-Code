#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;

        int bad = 0;

        for(int i = 0; i < s.size() - 1; i++) {
            if(s[i] == s[i+1]){
                bad++;
            }
        }

        if(bad <= 2) cout << "YES\n";
        else cout << "NO\n";
    }
}