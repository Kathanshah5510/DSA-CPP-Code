// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;

//     while(t--){
//         int n;
//         cin >> n;
//         vector<int> delicious(n);
//         for(int i = 0; i < n; i++){
//             cin >> delicious[i];
//         }

//         int operations = 0;
//         for(int i = 0; i < n - 1; i++){
//             if(delicious[i] + delicious[i + 1] % 3 == 0){
//                 operations++;
                
//             }

//         }
//         cout << operations << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int c0 = 0, c1 = 0, c2 = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x == 0) c0++;
            else if(x == 1) c1++;
            else c2++;
        }

        int ans = 0;
        ans += c0;
        int pairs = min(c1, c2);
        ans += pairs;
        c1 -= pairs;
        c2 -= pairs;
        ans += c1 / 3;
        ans += c2 / 3;
        cout << ans << endl;
    }

    return 0;
}