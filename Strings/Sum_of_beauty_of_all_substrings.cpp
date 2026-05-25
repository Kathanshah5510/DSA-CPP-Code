#include <bits/stdc++.h>
using namespace std;

int countBeauty(string s){
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }
    int maxFreq = 0;
    int minFreq = INT_MAX;
    for(auto& pair : freq){
        maxFreq = max(maxFreq, pair.second);
        minFreq = min(minFreq, pair.second);
    }
    return maxFreq - minFreq;
}

int main(){
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int n = s.size();
    int totalBeauty = 0;

    for(int i = 0; i < n; i++){
        string temp = "";
        for(int j  = i; j < n; j++){
            temp += s[j];
            totalBeauty += countBeauty(temp);
        }
    }
    cout << "Sum of beauty of all substrings: " << totalBeauty << endl;
    return 0;
}