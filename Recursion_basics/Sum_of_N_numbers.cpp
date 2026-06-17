#include <bits/stdc++.h>
using namespace std;

// parameterized
void rec(int n, int sum){
    if(n < 1){
        cout << "The result if sumation is: " << sum;
    }
    else{
        rec(n - 1, sum + n);    
    }
}

int main(){
    int n;
    cout << "Enter the integer to which you want the sum to be: ";
    cin >> n;
    rec(n, 0);
    
    return 0;
}