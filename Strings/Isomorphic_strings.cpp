#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "f11";
    string t = "b23";
    // cout << "Enter string s: ";
    // cin >> s;
    // cout << "Enter string t: ";
    // cin >> t;

    if(s.size() != t.size()){
        cout << "Not Isomorphic" << endl;
        return 0;
    }

    for(int i = 0; i < s.size(); i++){
        for(int j = i + 1; j < s.size(); j++){
            // Logic: if characters at same position are same in s, then they must be same in t and vice-versa
            if((s[i] == s[j] && t[i] != t[j]) || (s[i] != s[j] && t[i] == t[j])){
                cout << "Not Isomorphic" << endl;
                return 0;
            }
        }
    }
    cout << "Isomorphic" << endl;

    return 0;
}