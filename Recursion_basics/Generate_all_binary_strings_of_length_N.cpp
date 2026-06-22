#include <bits/stdc++.h>
using namespace std;

void generate(vector<string>& result, string current, int n){
    if(current.length() == n){
        result.push_back(current);
        return;
    }
    generate(result, current + "0", n);
    generate(result, current + "1", n);
    // if(current.empty() || current.back() == '0') {
    //     generate(result, current + "1", n);
    // }
}

int main(){
    int n;
    cin >> n;
    vector<string> result;
    generate(result, "", n);
    for (const auto& s : result) {
        cout << s << " ";
    }
    return 0;
}