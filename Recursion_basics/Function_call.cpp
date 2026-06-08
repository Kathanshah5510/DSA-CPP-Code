#include <bits/stdc++.h>
using namespace std;

int recur(int num, int n){
    if(num == n){
        return 0;
    }
    else{
        cout << num << endl;
        num++;
        return recur(num, n);
    }
}

int main(){
    int x, n;
    cout << "Enter value for x and till which number you want to print: ";
    cin >> x >> n;
    int ans = recur(x, n+1);

    return 0;
}