#include <bits/stdc++.h>
using namespace std;

// // parameterized
// void rec(int n, int sum){
//     if(n < 1){
//         cout << "The result if sumation is: " << sum;
//     }
//     else{
//         rec(n - 1, sum + n);    
//     }
// }

// functional
int rec(int n){
    if(n == 0){
        return 0;
    }
    else return n + rec(n - 1);
}

int main(){
    int n;
    cout << "Enter the integer to which you want the sum to be: ";
    cin >> n;
    // rec(n, 0);
    int res = rec(n);
    cout << "The result of summation is: " << res << endl;
    
    return 0;
}