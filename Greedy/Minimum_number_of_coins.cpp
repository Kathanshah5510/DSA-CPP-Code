#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    int V = 49;
    int n = coins.size(), count = 0;
    // for(int i = n - 1; i >= 0; i--){
    //     while(V >= coins[i]){
    //         V -= coins[i];
    //         count++;
    //     }
    // }
    // cout << "Minimum number of coins required = " << count << endl;

    for(int i = n - 1; i >= 0; i--){
        if(V >= coins[i]){
            V -= coins[i];
            count++;
        }
    }
    cout << "Minimum number of coins required = " << count << endl;
    
    return 0;
}