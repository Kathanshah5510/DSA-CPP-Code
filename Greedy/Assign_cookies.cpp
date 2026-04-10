#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> g = {1,2,3}, s = {1,2};
    int n = g.size(), m = s.size();

    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(s[j] >= g[i]){
                s[j] = -1;
                count++;
                break;
            }
        }
    }
    cout << count << endl;

    return 0;
}