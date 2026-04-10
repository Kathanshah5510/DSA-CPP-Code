#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout << "Enter string integer: ";
    getline(cin, s);
    
    if(s[s.size() - 1] % 2 != 0){
        cout << s << endl;
        return 0;
    }
    else{
        for(int i = s.size() - 2; i >= 0; i--){
            if(s[i] % 2 != 0){
                cout << s.substr(0, i + 1) << endl;
                return 0;
            }
        }
    }


    return 0;
}