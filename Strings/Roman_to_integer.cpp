#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout << "Enter a Roman numeral: ";
    cin >> s;

    int res = 0;
    unordered_map<char, int> roman = {
        {'I', 1},
        {'V', 5},
        {'X', 10}, 
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    for (int i = 0; i < s.size() - 1; i++) {
        if (roman[s[i]] < roman[s[i + 1]]) {
            res -= roman[s[i]];
        } else {
            res += roman[s[i]];
        }
    }

    cout << res + roman[s[s.size() - 1]] << endl;


    return 0;
}