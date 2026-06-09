#include <bits/stdc++.h>
using namespace std;

// void rec(int num){
//     while(num > 0){
//         rec(num-1);
//         cout << num << endl;
//         break;
//     }
// }

void rec(int i, int num){
    if(i < 1){
        return;
    }
    rec(i-1, num);
    cout << i << endl;
}

int main(){
    int n = 10;
    // cout << "Enter till which number you want to print: ";
    // cin >> n;
    // rec(n);
    rec(n, n);

    return 0;
}