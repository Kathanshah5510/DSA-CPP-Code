#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1;
        cin >> s2;
        int count = 0;
        int A1 = 0, A2 = 0;
        int B1 = 0, B2 = 0;

        for(int i = 0; i < n; i++){
            if(s1[i] == '1'){
                if(i % 2 == 0)
                    A1++;
                else
                    A2++;
            }

            if(s2[i] == '1'){
                if(i % 2 == 0)
                    B1++;
                else
                    B2++;
            }
        }

        if (A1 == B1 && A2 == B2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}