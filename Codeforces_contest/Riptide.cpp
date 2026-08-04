#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int rounds = 0;
        while(a != b && b != c && a != c){
            if (a > b && a > c){
                a--;
                if(b < c)
                    b++;
                else
                    c++;
            }
            else if(b > a && b > c){
                b--;
                if(a < c)
                    a++;
                else
                    c++;
            }
            else{
                c--;
                if(a < b)
                    a++;
                else
                    b++;
            }
            rounds++;
        }
        cout << rounds << endl;
    }
    return 0;
}