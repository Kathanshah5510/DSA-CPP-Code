#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        string word;
        cin >> word;

        int i = word.length();
        if(i > 10){
            cout << word[0] << i-2 << word[i-1] << endl;
        }
        else cout << word << endl;
    }
}
