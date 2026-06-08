// leetcode 1922. Count Good Numbers

#include <bits/stdc++.h>
using namespace std;

// int main(){
//     long long n;
//     cin >> n;

//     long long even = (n + 1) / 2;
//     long long odd = n / 2;

//     long long mod = 1e9 + 7;
//     long long ans = 1;

//     for (int i = 0; i < even; i++) {
//         ans = (ans * 5) % mod;
//     }

//     for (int i = 0; i < odd; i++) {
//         ans = (ans * 4) % mod;
//     }

//     cout << ans << endl;

//     return 0;
// }

class Solution {
public:
    long long MOD = 1e9 + 7;
    // Recursive Binary Exponentiation
    long long power(long long x, long long n) {
        // base case
        if(n == 0) {
            return 1;
        }

        long long half = power(x, n / 2);
        long long result = (half * half) % MOD;
        // if exponent is odd
        if(n % 2 == 1) {
            result = (result * x) % MOD;
        }

        return result;
    }

    int countGoodNumbers(long long n) {
        long long evenPos = (n + 1) / 2;
        long long oddPos = n / 2;
        long long evenWays = power(5, evenPos);
        long long oddWays = power(4, oddPos);

        return (evenWays * oddWays) % MOD;
    }
};

int main() {

    Solution obj;
    long long n;
    cout << "Enter n: ";
    cin >> n;
    cout << obj.countGoodNumbers(n);

    return 0;
}