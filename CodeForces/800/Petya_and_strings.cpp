#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;

    transform(s1.begin(), s1.end(), s1.begin(), [](unsigned char c){ return tolower(c); });
    transform(s2.begin(), s2.end(), s2.begin(), [](unsigned char c){ return tolower(c); });

    if(s1 < s2){
        cout << "-1";
    }
    else if(s1 > s2){
        cout << "1";
    }
    else cout << "0";

    return 0;
}