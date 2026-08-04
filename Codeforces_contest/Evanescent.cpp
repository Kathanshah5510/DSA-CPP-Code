#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 1;
        for(int i = 1; i < n; i++){
            if(s[i] != s[i-1]){
                count++;
            }
        }
        int result = count;
        for(int i = 1; i < n - 1; i++){
            int curr = count;
            if(s[i] != s[i - 1])
                curr--;

            if(s[i] != s[i + 1])
                curr--;

            if(s[i - 1] != s[i + 1])
                curr++;

            result = min(result, curr);
        }
        cout << result << endl;
    }
    return 0;
}