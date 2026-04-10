#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "anagram";
    string t = "nagaram";

    if(s.size() != t.size()){
        cout << "Not anagrams" << endl;
        return 0;
    }

    unordered_map<char, int> charCount;
    for(char c : s){
        charCount[c]++;
    }
    for(char c : t){
        charCount[c]--;
    }
    for(auto& pair : charCount){
        if(pair.second != 0){
            cout << "Not anagrams" << endl;
            return 0;
        }
    }
    cout << "Anagrams" << endl;
    return 0;
}