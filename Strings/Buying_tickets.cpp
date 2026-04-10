#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int T;
    cin >> T;

    while (T--)
    {int n, k;
    cin >> n >> k;

    vector<int> price(n);
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }

    // 	for(int i = 0; i < n; i++){
    // 	    cout << price[i] << " ";
    // 	}

    string s;
    cin >> s;

    int count = 0;
    for (char c: s) {
        if (c == '0') {
            count++;
        }
    }

    if (k < count) {
        int result = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                result += price[i];
                n--;
            }
        }

        cout << result;
    }
    else {
        cout << -1;
    }}

    return 0;
}