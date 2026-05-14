#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout << " Enter a string: ";
    cin >> s;

    unordered_map<char, int> freq;
    for(auto &i : s){
        freq[i]++;
    }

    for(auto &i : freq){
        int count = i.second;
        while(count--){
            cout << i.first;
        }
    }

    return 0;
}