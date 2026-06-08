#include <bits/stdc++.h>
using namespace std;

void rec(string s, int count){
    while(count > 0){
        cout << s << endl;
        count--;
    }
}

int main(){
    int count = 5;
    string s = "Kathan";
    rec(s, count);

    return 0;
}